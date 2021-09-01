import java.util.Arrays;
import java.util.Scanner;
public class _02]_Array_Insertion 
{
    public static int[] insert(int n, int ar[], int x, int pos)
    {
        int ar2[] = new int[n+1];
        
        // insert the elements from the old array into the new array insert all elements till pos
        // then insert x at pos then insert rest of the elements
        for (int i = 0; i < n + 1; i++) {
            if (i < pos - 1)
                ar2[i] = ar[i];
            else if (i == pos - 1)
                ar2[i] = x;
            else
                ar2[i] = ar[i - 1];
        }
        return ar2;
    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        int n = sc.nextInt();
        System.out.println("Enter elements");
        int ar[] = new int[n];
        for(int i=0; i<n; i++){
            ar[i] = sc.nextInt();
        }
        System.out.println("initial array"+Arrays.toString(ar));
        System.out.println("Enter insert number");
        int x = sc.nextInt();
        System.out.println("Enter insertion position");
        int pos = sc.nextInt();
        
        ar = insert(n, ar, x, pos);
        System.out.println(Arrays.toString(ar));
    }
}
