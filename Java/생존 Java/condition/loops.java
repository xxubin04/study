package condition;

public class loops {
    public static void main(String[] args) {
        int num = 3;

        for (int i=1; i<10; i++) {
            System.out.println(num + " * " + i + " = " + (num * i));
        }

        do {
            System.out.println(num++);
        } while (num <= 10);
    }
}
