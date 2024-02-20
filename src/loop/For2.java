package loop;

public class For2 {

    public static void main(String[] args) {
        int sum = 0;
        int endNum = 3;

        for (int i = 1; i <= 10; i++) {  // while문(While2_3)보다 for문(For2)이 더 구조적으로 깔끔함
            sum = sum + i;
            System.out.println("i=" + i + " sum=" + sum);
        }
    }
}
