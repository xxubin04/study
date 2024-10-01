package InputStream;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class prac04 {
    public static void main(String[] args) throws IOException {
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        String str = br.readLine();

        System.out.println(str);
    }
}
