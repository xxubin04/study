package ch03_operator;

public class Exercise3_08 {
    public static void main(String[] args) {
        byte a = 10;
        byte b = 20;
        int c = a + b;

        int ch = 'A';
        ch = ch + 2;

        float f = (float)3 / 2;
        long l = 3000 * 3000 * 3000L;

        float f2 = 0.1f;
        double d = 0.1;

        boolean result = (float)d==f2;

        System.out.println("c="+c);
        System.out.println("ch="+(char)ch);
        System.out.println("f="+f);
        System.out.println("l="+l);
        System.out.println("result="+result);
    }
}
