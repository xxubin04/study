package InputStream;

import java.io.IOException;
import java.io.InputStream;

public class prac02 {
    // 입출력 작업에서 발생할 수 있는 IOException을 던짐
    public static void main(String[] args) throws IOException {
        InputStream inputStream = System.in;

        byte[] bytes = new byte[3];
        inputStream.read(bytes);  // byte 단위로, 사용자의 입력을 bytes 배열에 읽어들임

        System.out.println(bytes[0]);
        System.out.println(bytes[1]);
        System.out.println(bytes[2]);
    }
}
