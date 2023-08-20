package Java.Basico;
import java.util.Scanner;

public class e_bas {
   public static void main(String[] args){
        Scanner scanner = new Scanner (System.in);

        System.out.println("Qual o valor da prestação?");
        double prest = scanner.nextDouble();

        System.out.println("Qual a taxa de juros?");
        double taxa = scanner.nextDouble();

        System.out.println("Qual o tempo de atraso? Em meses.");
        double temp = scanner.nextDouble();

        double valor_prest = prest + (prest*(taxa/100)*temp);

        System.out.println("O valor da prestasção é:" + valor_prest);

   }
}