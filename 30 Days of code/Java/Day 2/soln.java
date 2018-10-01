import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the solve function below.
    static void solve(double meal_cost, int tip_percent, int tax_percent) {


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent  = scan.nextInt();    // tip percentage
        int taxPercent  = scan.nextInt();    // tax percentage
        scan.close();

        /* Calculate total cost */
        int totalCost = (int) Math.round(mealCost + 
                                         mealCost * tipPercent / 100.0 + 
                                         mealCost * taxPercent / 100.0);
        
        /* Print output */
        System.out.println(totalCost );
    }
}
