package Third;

class Nirob {
    Nirob(String name) {
        System.out.println("Name: " + name);
    }

    Nirob(String name, String batch) {
        System.out.print("Name: " + name);
        System.out.print(" Batch: " + batch);
        System.out.println();
    }

    Nirob(String name, String batch, int roll) {
        System.out.print("Name: " + name);
        System.out.print(" Batch: " + batch);
        System.out.print(" Roll: " + roll);
        System.out.println();
    }
}

class Nirob1 {
    void dog(String name) {
        System.out.println("Name: " + name);
    }

    void dog(String name, String batch) {
        System.out.print("Name: " + name);
        System.out.print(" Batch: " + batch);
        System.out.println();
    }

    void dog(String name, String batch, int roll) {
        System.out.print("Name: " + name);
        System.out.print(" Batch: " + batch);
        System.out.print(" Roll: " + roll);
        System.out.println();
    }
}


public class Third_question {
    public static void main(String[] args) {
        Nirob obj = new Nirob("Nirob");
        Nirob obj1 = new Nirob("Nirob", "D-59");
        Nirob obj2 = new Nirob("Nirob", "D-59", 04);
        Nirob1 obj3 = new Nirob1();
        obj3.dog("Nirob");
        obj3.dog("Nirob", "D-59");
        obj3.dog("Nirob", "D-59", 04);
    }
}
