package Java.Basico;
import java.util.Scanner;

public class c_bas {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner (System.in)) {
            System.out.println("Digite a altura da lata de óleo:");
            int h = scanner.nextInt();
            System.out.println("Digite o raio da lata de óleo:");
            int r = scanner.nextInt();

            double vol = 3.14159*(r*r)*h;

            System.out.println("O volume da lata de óleo é: " + vol);
        }
    }
}
