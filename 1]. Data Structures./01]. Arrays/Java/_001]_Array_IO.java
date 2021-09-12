import java.util.*;

class ArrayIO{
    public static void main (String[] args){   
      System.out.println("Enter the no of elements : ");      
      Scanner sc = new Scanner(System.in);
      int num = sc.nextInt();

      System.out.println("Enter the elements : "); 
      int[] arr = new int[num];

      for (int i = 0; i < num;++i){
        arr[i] = sc.nextInt();
      }
     
      for (int i = 0; i < arr.length; i++){
         System.out.println("Element at index " + i + 
                                      " : "+ arr[i]);    
      }                             
      sc.close();
    } 
}