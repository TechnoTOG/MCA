import java.util.*;
class employee {
  int empid;
  String empname;
  String designation;
}

class employeedetails {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);  //  Scanner Class Object

    employee e1 = new employee(); //  Employee Objects
    employee e2 = new employee();
    employee e3 = new employee();

    System.out.println("Enter the Details for Employee 1");
    System.out.print("ID: ");
    e1.empid = sc.nextInt();
    sc.nextLine();
    System.out.print("Name: ");
    e1.empname = sc.nextLine();
    System.out.print("Designation: ");
    e1.designation = sc.nextLine();

    System.out.println("Enter the Details for Employee 2");
    System.out.print("ID: ");
    e2.empid = sc.nextInt();
    sc.nextLine();
    System.out.print("Name: ");
    e2.empname = sc.nextLine();
    System.out.print("Designation: ");
    e2.designation = sc.nextLine();

    System.out.println("Enter the Details for Employee 3");
    System.out.print("ID: ");
    e3.empid = sc.nextInt();
    sc.nextLine();
    System.out.print("Name: ");
    e3.empname = sc.nextLine();
    System.out.print("Designation: ");
    e3.designation = sc.nextLine();

    System.out.println("\n");

    System.out.println("Employee ID: " + e1.empid);
    System.out.println("Employee Name: " + e1.empname);
    System.out.println("Employee designation: " + e1.designation + "\n");

    System.out.println("Employee ID: " + e2.empid);
    System.out.println("Employee Name: " + e2.empname);
    System.out.println("Employee designation: " + e2.designation + "\n");

    System.out.println("Employee ID: " + e3.empid);
    System.out.println("Employee Name: " + e3.empname);
    System.out.println("Employee designation: " + e3.designation + "\n");
  }
}