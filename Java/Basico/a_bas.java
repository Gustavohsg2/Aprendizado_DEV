package Java.Basico;
import java.util.Scanner;

public class a_bas {
    /**
     * @param args
     */
    public static void main(String[] args){
        int cels, fahr;
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Digite a temperatura em graus Celsius:");
            cels = scanner.nextInt();
        }

        fahr = (cels*9 + 160)/5;

        System.out.println("A temperatura em Fahrenheit é: " + fahr);
    }
}