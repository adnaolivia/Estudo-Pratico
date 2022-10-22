import java.util.Scanner;

class MediaPonderada {
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int n1, n2, media;
        n1 = leia.nextInt();
        n2 = leia.nextInt();
        n1 = n1 * 2;
        n2 = n2 * 3;
        media = (n1 + n2)/5;
        System.out.println(media);
    }
}