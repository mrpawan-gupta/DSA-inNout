import java.util.*;

class Solution {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       int n = input.nextInt();
       int []arr = new int[n];

       for (int i = 0; i < arr.length; i++) {
         arr[i] = input.nextInt();
       }
       int countEven = 0;
       int countOdd = 0;

       for (int i : arr) {
         if(i%2==0){
           countEven++;
         }else{
           countOdd++;
         }
       }

       System.out.println("Even Number in Array are ==> " + countEven);
       System.out.println("odd Number in Array are ==> " + countOdd);


       input.close();
    }
}