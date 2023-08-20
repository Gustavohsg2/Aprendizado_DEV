package Java.Basico;
import java.util.Scanner;

public interface f_bas {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite um número para A:");
        int A = scanner.nextInt();
        System.out.println("Digite um número para B:");
        int B = scanner.nextInt();
        
        int aux = A;
        A = B;
        B = aux;
        System.out.println("O valor de A é: " + A + " e o valor de B é: " + B + ".");
    }
}