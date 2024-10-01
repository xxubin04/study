package condition;

public class switch_ex {
    public static void main(String[] args) {
        int score = 90;
        String flag = (score >= 85) ? "T" : "F";

        switch(flag) {
            case "T":
                System.out.println("pass");
                break;
            case "F":
                System.out.println("fail");
                break;
        }
    }
}
