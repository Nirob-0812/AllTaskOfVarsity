package Fifth;

import java.util.Scanner;

public class Area {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Length: ");
        int len = input.nextInt();
        System.out.print("Enter Width: ");
        int wid = input.nextInt();
        double result = 0.5 * len * wid;
        System.out.println("Area of Triangle: " + result);
    }
}
