package First;

class Student {
    String name;
    String city;
    int age;

    void PrintData() {
        System.out.println("Name: " + name);
        System.out.println("City: " + city);
        System.out.println("Age: " + age);
    }
}

public class First_Question {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Nirob";
        s1.city = "Jamalpur";
        s1.age = 21;
        s1.PrintData();
        Student s2 = new Student();
        s2.name = "Mehedi";
        s2.city = "Dhaka";
        s2.age = 22;
        s2.PrintData();


    }
}
