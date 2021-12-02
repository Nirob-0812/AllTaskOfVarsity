package Second;

//import javax.print.attribute.standard.MediaSize;

class Student2 {
    String Name;
    String Batch;
    int Roll;

    void getData(String n, String b, int r) {
        Name = n;
        Batch = b;
        Roll = r;
    }
    void printData() {
        System.out.println("Name: "+ Name);
        System.out.println("Batch: "+ Batch);
        System.out.println("Roll: "+ Roll);

    }
}

public class STtest {
    public static void main(String[] args) {
        Student2 s1 = new Student2();
        s1.getData("Nirob","D-59",04);
        s1.printData();
        Student2 s2 = new Student2();
        s2.getData("Nadim","D-59",05);
        s2.printData();
    }
}
