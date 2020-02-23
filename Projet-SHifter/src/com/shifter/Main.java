package com.shifter;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
	// write your code here
        System.out.println("Creating a new Socket connection ...");
        ServerSocket socketPort = new ServerSocket(4444);
        Socket socket = socketPort.accept();
        Scanner scanner = new Scanner(socket.getInputStream());
        while(true) {
            System.out.println(scanner.nextLine());
            System.out.println("New InputStream");
        }
    }
}
