package Second;

class Student2 {
    String Name;
    String Batch;
    int Roll;

    void getData(String name, String batch, int roll) {
        Name = name;
        Batch = batch;
        Roll = roll;
    }

    void printData() {
        System.out.println("Name: " + Name);
        System.out.println("Batch: " + Batch);
        System.out.println("Roll: " + Roll);

    }
}

public class STtest {
    public static void main(String[] args) {
        Student2 s1 = new Student2();
        s1.getData("Nirob", "D-59", 04);
        s1.printData();
        Student2 s2 = new Student2();
        s2.getData("Mehedi", "D-59", 04);
        s2.printData();
    }

}
