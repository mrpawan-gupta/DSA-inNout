import java.util.*;

class Factorial {

    static int Nfactorial(int n){
        if (n == 0)    
            return 1;    
        else    
            return(n * Nfactorial(n-1)); 
    }
   public static void main(String[] args) {
       System.out.print("Enter the Number :-");
       
       Scanner input = new Scanner(System.in);
       int num = input.nextInt();
        
       int fact = Nfactorial(num);

       System.out.println("Factorial of "+num+" is: "+fact); 
      
       input.close();
   } 
}
