package Fourth;

class Bird {
    Bird(String bird1) {
        System.out.println(bird1);
    }

    Bird(String bird1, String bird2) {
        System.out.print(bird1);
        System.out.println(" " + bird2);
    }

    Bird(String bird1, String bird2, String bird3) {
        System.out.print(bird1);
        System.out.print(" " + bird2);
        System.out.println(" " + bird3);
    }
}

public class Fourth_Question {
    public static void main(String[] args) {
        Bird s1 = new Bird("Doel");
        Bird s2 = new Bird("Doel", "Shalik");
        Bird s3 = new Bird("Doel", "Shalik", "Tia");
    }
}
