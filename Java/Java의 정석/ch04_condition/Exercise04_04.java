package ch04_condition;

public class Exercise04_04 {
    public static void main(String[] args) {
        int num = 0;
        int sum = 0;

        while (sum < 100) {
            if (++num % 2 == 0) {
                sum += (num * (-1));
            } else {
                sum += num;
            }
        }
        System.out.println(num);
    }
}
