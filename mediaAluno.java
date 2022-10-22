import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    float nota1, nota2, media;
    String nome;
    System.out.println("Digite o nome do aluno");
      nome = sc.nextLine(); //input pra ler string
    System.out.println("digite a primeira nota");
      nota1 = sc.nextFloat(); //input pra ler float
    System.out.println("digite a segunda nota");
      nota2 = sc.nextFloat();
    media = (nota1 + nota2)/2;
    if (media < 6.0) {
      System.out.println(nome);
      System.out.println(media);
      System.out.println("Aluno abaixo da média");
      }
      else {
        System.out.println(nome);
        System.out.println(media);
        System.out.println("Aluno aprovado!");
      }
  }
}