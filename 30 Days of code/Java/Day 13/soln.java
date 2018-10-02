import java.util.*;


abstract class Book {
    String title;
    String author;
    Book(String t, String a) {
        title  = t;
        author = a;
    }
    abstract void display();
}

class MyBook extends Book {
    int price;
    
    MyBook(String title, String author, int price) {
        super(title, author);
        this.price = price;
    }
    
    void display() {
        System.out.println("Title: "  + title);
        System.out.println("Author: " + author);
        System.out.println("Price: "  + price);
    }
}
// End class
public class Solution {
   
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String title = scanner.nextLine();
        String author = scanner.nextLine();
        int price = scanner.nextInt();
        scanner.close();

        Book book = new MyBook(title, author, price);
        book.display();
    }
}
