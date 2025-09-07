import java.util.*;
class bank {
  static int accno;
  static String name, acctype;
  static float balamt;

  public static void store(int accnum, String nam, String actype, float balance) {
    accno = accnum;
    name = nam;
    acctype = actype;
    balamt = balance;
  }

  public static void display() {
    System.out.println("\n\n--------------------");
    System.out.println("Account Number : " + accno);
    System.out.println("Account Name   : " + name);
    System.out.println("Account Type   : " + acctype);
    System.out.println("Account Balance: " + balamt);
    System.out.println("--------------------\n\n");
  }

  public static void main(String args[] ){
    Scanner sc = new Scanner(System.in);
    int acn;
    String na, act;
    float bal;

    System.out.println("Enter the Account Number: ");
    acn = sc.nextInt();
    System.out.println("Enter the Account Name: ");
    sc.nextLine();
    na = sc.nextLine();
    System.out.println("Enter the Account Type: ");
    act = sc.nextLine();
    System.out.println("Enter the Account Balance: ");
    bal = sc.nextFloat();

    store(acn, na, act, bal);
    display();
  }
}