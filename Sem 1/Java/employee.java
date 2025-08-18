class employee {  //  Employee class
  int empid;
  String empname, designation;
}

class employeedetails {
  public static void main(String args[]) {
    employee e1 = new employee(); //  Employee Objects
    employee e2 = new employee();
    employee e3 = new employee();

    e1.empid = 101;
    e1.empname = "Thomas";
    e1.designation = "Administration";

    e2.empid = 102;
    e2.empname = "Issac";
    e2.designation = "Accounts";

    e3.empid = 103;
    e3.empname = "Isabel";
    e3.designation = "Logistics";

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