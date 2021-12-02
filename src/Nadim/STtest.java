package Nadim;

class Student2{
    String name,college;
    int roll;
    void getData(String n,String c,int r){
        name=n;
        college=c;
        roll=r;
    }
    void printData(){
        System.out.println("Name: "+name);
        System.out.println("College: "+college);
        System.out.println("Roll: "+roll);

    }
}

public class STtest {
    public static void main(String[] args) {
        Student2 s1=new Student2();
        s1.getData("Nadim","Comilla",5);
        s1.printData();
        Student2 s2=new Student2();
        s2.getData("Imran","B baria",20);
        s2.printData();
    }
}
