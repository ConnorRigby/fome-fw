package com.rusefi.ui.light;

import com.rusefi.Timeouts;

import javax.swing.*;
import java.awt.*;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.net.HttpURLConnection;
import java.net.URL;

public class InternetStatus {
    private static final String GOOGLE = "http://google.com";
    private final JPanel panel = new JPanel();
    private final JLabel status = new JLabel();

    public InternetStatus() {
        panel.add(status);
        Font defaultFont = status.getFont();
        status.setFont(new Font(defaultFont.getName(), defaultFont.getStyle(), 2 * defaultFont.getSize()));

        new Thread(() -> {
            while (true) {
                boolean isConnected = isServerReachable();
                try {
                    SwingUtilities.invokeAndWait(new Runnable() {
                        @Override
                        public void run() {
                            if (isConnected) {
                                status.setText("online");
                                panel.setBackground(Color.green);
                            } else {
                                status.setText("offline");
                                panel.setBackground(Color.red);
                            }
                        }
                    });
                    Thread.sleep(Timeouts.SECOND);
                } catch (InterruptedException | InvocationTargetException e) {
                    // ignore
                }
            }
        }).start();
    }

    private static boolean isServerReachable() {
        try {
            URL urlServer = new URL(GOOGLE);
            HttpURLConnection urlConn = (HttpURLConnection) urlServer.openConnection();
            urlConn.setConnectTimeout(3000); //<- 3Seconds Timeout
            urlConn.connect();
            if (urlConn.getResponseCode() == 200) {
                return true;
            } else {
                return false;
            }
        } catch (IOException e1) {
            return false;
        }
    }

    public Component getContent() {
        return panel;
    }
}
