package ch04_condition;

public class Exercise04_15 {
    public static void main(String[] args) {
        int number = 12321;
        int tmp = number;

        int result = 0;

        while (tmp != 0) {
            result = result * 10 + tmp % 10;  // 역순으로 문자열 배치
            tmp /= 10;
        }

        if (number == result)
            System.out.println(number + "는 회문수입니다.");
        else
            System.out.println(number + "는 회문수가 아닙니다.");
    }
}
