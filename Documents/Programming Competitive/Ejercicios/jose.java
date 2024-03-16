import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = 1;
        while (t-- > 0) {
            solve(scanner);
        }
    }

    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int res = 13000;
        for (int i = 0; i < n; i++) {
            int m = scanner.nextInt();
            res -= m;
        }
        System.out.println(res);
    }
}
