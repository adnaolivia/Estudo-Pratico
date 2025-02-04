import java.util.Scanner;

class Idade {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int idade;
    System.out.println("Qual a sua idade? ");
      idade = sc.nextInt();
    if (idade > 18) {
      System.out.println("Pode dirigir :)");
      if (idade > 50) {
        System.out.println("mas tome cuidado!");
      }
    }
      else
      System.out.println("Não pode dirigir :(");
  }
}
