import java.util.Scanner;

public class Nextline {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Scanner is used to take input in java
        System.out.println("Enter a number :"); // Used to Print a Statement
        int x = sc.nextInt(); // Used to take Integer input

        System.out.println("\nEnter a String :");
        String str = sc.nextLine(); // Used to take String input

        System.out.println("\nBut Why JAVA is on so hurry that it didn't took my string input ? ");

        System.out.println("\nEnter The Second String :");
        String str2 = sc.nextLine();

        System.out.println("\nx : " + x);
        System.out.println("string : " + str);
        System.out.println("str2: " + str2);

    }
}
