package InputStream;

import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class prac03 {
    public static void main(String[] args) throws IOException {
        InputStream inputStream = System.in;
        InputStreamReader reader = new InputStreamReader(inputStream);

        // 위의 두 줄을 다음과 같이 줄여쓰기 가능
        // InputStreamReader reader = new InputStreamReader(System.in);

        char[] chars = new char[3];
        reader.read(chars);  // char형 문자를 하나씩 읽어들임

        System.out.println(chars);
    }
}
