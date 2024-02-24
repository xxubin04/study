package cond.ex;

public class CondEx1 {

    public static void main(String[] args) {
        int score = 95;
        char ans;

        if (score >= 90) {
            ans = 'A';
        } else if (score >= 80) {
            ans = 'B';
        } else if (score >= 70) {
            ans = 'C';
        } else if (score >= 60) {
            ans = 'D';
        } else {
            ans = 'F';
        }

        System.out.println("학점은 " + ans + "입니다.");
    }
}
