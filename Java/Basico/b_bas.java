package Java.Basico;
import java.util.Scanner;

public class b_bas {
    public static void main(String[] args) {
        int fahr, cels;
        Scanner scanner = new Scanner (System.in);

        System.out.println("Digite a temperatura em fahrenheit:");
        fahr = scanner.nextInt();
        cels = (fahr - 32)*5/9;
        System.out.println("A temperatura em Celsius é:" + cels);
    }
}