package Java.Basico;
import java.util.Scanner;

public class d_bas {
    public static void main(String[] args){
        try (Scanner scanner = new Scanner (System.in)) {
            System.out.println("Qual foi o tempo gasto pelo carro?");
            int tem_gasto = scanner.nextInt();
            System.out.println("Qual foi a velocidade média do carro?");
            int ved_med = scanner.nextInt();
            int dist = tem_gasto*ved_med;
            double litros = dist/12.0;
            System.out.println("A distância percorrida foi:" + dist );
            System.out.println("A quantidade de litros gastos foi:" + litros);
        }
    }
}