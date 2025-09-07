import java.util.*;
class employee {
  int empid;
  String empname, designation, dept;
}

class employeeArr {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);  //  Scanner Class Object

    employee e1[] = new employee[3]; //  Employee Objects

    for(int i = 0; i < 3; i++) {
      e1[i] = new employee();
      System.out.println("Enter the Details for Employee " + i);
      System.out.print("ID: ");
      e1[i].empid = sc.nextInt();
      sc.nextLine();
      System.out.print("Name: ");
      e1[i].empname = sc.nextLine();
      System.out.print("Designation: ");
      e1[i].designation = sc.nextLine();
      System.out.print("Department: ");
      e1[i].dept = sc.nextLine();
    }

    for(int j = 0; j < 3; j++) {
      System.out.println("\nThe details of Employee " + (j+1) + "\nID: " + e1[j].empid + "\nName: " + e1[j].empname + "\nDesignation: " + e1[j].designation);
    }
  }
}