package ch04_condition;

public class Exercise04_10 {
    public static void main(String[] args) {
        int num = 12345;
        int sum = 0;

        while (true) {
            if (num >= 1) {
                sum += (num%10);
                num /= 10;
            } else {
                break;
            }
        }
        System.out.println("sum="+sum);
    }
}
