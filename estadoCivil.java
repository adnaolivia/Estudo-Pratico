import java.util.Scanner;

public class estadoCivil {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int EC;
        EC = 0;
        System.out.println("Digite o estado civil (1: solteiro, 2: casado, 3: outros");
            EC = entrada.nextInt();
       switch (EC) {
           case 1:
                System.out.println("Solteiro");
                break;
           case 2:
                System.out.println("Casado") ;
                break;
            case 3:
                System.out.println("Outro");
                break;
            default:
                System.out.println("Número inválido");
       }
    }
}

//QUE ALEGRIAAA, peguei o exemplo desse algoritmo em pseudocódigo e fiz ele em java, sozinha :))))))))))
