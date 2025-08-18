class students {
  int studno;
  String studname;
}

class studentsdemo {
  public static void main(String args[]){
    students s1 = new students();
    students s2 = new students();

    s1.studno = 101;
    s1.studname = "Erick Xavier";

    System.out.println("The name of first students: "+s1.studname);
  }
}