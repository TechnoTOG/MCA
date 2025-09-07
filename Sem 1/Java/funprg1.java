import java.util.*;

class funprg1{
  public static int add(int a, int b){
    return a+b;
  }
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int a, b;

    System.out.print("Enter the value for a: ");
    a = sc.nextInt();
    System.out.print("Enter the value for b: ");
    b = sc.nextInt();

    System.out.println("\n The value for a+b is: " + add(a,b));
  }
}