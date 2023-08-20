package Java.Basico;
import java.util.Scanner;

public class g_bas {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);        

        System.out.println("Digite um número para A:");
        int A = scanner.nextInt();
        System.out.println("Digite um número para B:");
        int B = scanner.nextInt();
        System.out.println("Digite um número para C:");
        int C = scanner.nextInt();
        System.out.println("Digite um número para D:");
        int D = scanner.nextInt();
        System.out.println(A+B +"\n" + A+C + "\n" + A+D + "\n" + B+C + "\n" + B+D + "\n" + C+D);
        System.out.println("MULTIPLICAÇÃO" + "\n" + A*B + "\n" + A*C + "\n" + A*D + "\n" + B*C + "\n" + B*D + "\n" + C*D);
    } 
}