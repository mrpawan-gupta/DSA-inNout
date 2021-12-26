import java.util.Scanner;

public class _01_BasicString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String str1 = in.nextLine(); // input of string
        String str2 = in.nextLine();

        System.out.println(str1 + " " + str2); // print String
    
        char ch = str1.charAt(1); // function to check charecter at given index

        int b = str1.compareTo(str2);
        //If the first string is lexicographically greater than the second string, 
        //it returns a positive number (difference of character value). 
        //If the first string is less than the second string lexicographically,
        // it returns a negative number, and if the first string is lexicographically equal to the second string, 
        // it returns 0.


        System.out.println(ch);

        if(b==0) {
            System.out.println("Both String are Same");
        }
        else {
            System.out.println(b);
            System.out.println("Not Same");
        }
    }  
}