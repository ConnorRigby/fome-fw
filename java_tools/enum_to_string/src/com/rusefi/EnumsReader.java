package com.rusefi;

import com.rusefi.enum_reader.Value;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.Reader;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

public class EnumsReader {
    private final static Map<String, Value> currentValues = new TreeMap<>();

    public final static Map<String, Map<String, Value>> enums = new TreeMap<>();

    public static void process(Reader in) throws IOException {
        boolean isInsideEnum = false;
        BufferedReader reader = new BufferedReader(in);
        String line;
        while ((line = reader.readLine()) != null) {
            line = removeSpaces(line);

            if (line.startsWith("typedefenum{") || line.startsWith("typedefenum__attribute__")) {
                System.out.println("Entering enum");
                currentValues.clear();
                isInsideEnum = true;
            } else if (line.startsWith("}") && line.endsWith(";")) {
                isInsideEnum = false;
                line = line.substring(1, line.length() - 1);
                System.out.println("Ending enum " + line);
                enums.put(line, new TreeMap<>(currentValues));
            } else {
                line = line.replaceAll("//.+", "");
                if (isInsideEnum) {
                    if (isKeyValueLine(line)) {
                        line = line.replace(",", "");
                        String value = "";
                        int index = line.indexOf('=');
                        if (index != -1) {
                            value = line.substring(index + 1);
                            line = line.substring(0, index);
                        }
                        System.out.println("Line " + line);
                        currentValues.put(line, new Value(line, value));
                    }
                }
            }
        }
    }

    static String removeSpaces(String line) {
        return line.replaceAll("\\s+", "");
    }

    static boolean isKeyValueLine(String line) {
        return removeSpaces(line).matches("[a-zA-Z_$][a-zA-Z\\d_$]*[=-a-zA-Z\\d_*]*,?");
    }
}
