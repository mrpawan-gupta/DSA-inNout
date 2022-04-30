import java.util.*;

class Solution {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);

       int n = input.nextInt();
       int [] arr = new int[n];

       for(int i = 0; i < n ; i++){
         arr[i] = input.nextInt();
       }
       int sum = 0;
       for (int i = 0; i < arr.length; i++) {
         sum+=arr[i];
       }

       System.out.println("The sum of element is " +  sum);

       input.close();
    }
}