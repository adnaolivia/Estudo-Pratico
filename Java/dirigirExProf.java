import java.util.Scanner;

class dirigirExProf {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int idade;
    System.out.print("Qual a sua idade? ");
    idade = sc.nextInt();
    if (idade >= 18) {
      System.out.println("Pode dirigir!");
      if (idade > 50) {
        System.out.println("Mas tome cuidado!");
      }
    } else {
      if(idade > 16) {
        System.out.println("Não pode dirigir!");
        System.out.println("Mas já pode ir treinando");
      } else {
        System.out.println("Não pode dirigir!");
      }
    }
  }
}
