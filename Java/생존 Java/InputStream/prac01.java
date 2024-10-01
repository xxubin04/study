package InputStream;

import java.io.InputStream;

public class prac01 {
    public static void main(String[] args) {
        try {
            InputStream in = System.in;  // 키보드로부터 입력받을 수 있음
            int a;
            a = in.read();  // 입력으로부터 한 바이트를 읽어 a에 저장

            System.out.println(a);  // 입력한 문자의 ASCII 값을 출력
            // 아무것도 입력 X = -1 반환
        } catch (Exception e) {}  // 예외가 발생하면 catch문에서 처리하지만, 현재 아무 처리 X
    }
}
