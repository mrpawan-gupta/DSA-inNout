  
/*
Hashing ==>  technique or process of mapping keys, 
values into the hash table by using a hash function
we map value with acertain key in different Data Structues.
Example :-
Que :-- Given an array which may contain duplicates, 
print all elements and their frequencies.
*/

import java.util.*;
public class _01_basicHashing {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
         Map<Integer, Integer> mp = new HashMap<>();
 
        // Traverse through array elements and
        // count frequencies
        for (int i = 0; i < n; i++){
            mp.put(arr[i], mp.get(arr[i]) == null ? 1 : mp.get(arr[i]) + 1);
        }
 
        // To print elements according to first
        // occurrence, traverse array one more time
        // print frequencies of elements and mark
        // frequencies as -1 so that same element
        // is not printed multiple times.
        for (int i = 0; i < n; i++) {
            if (mp.get(arr[i]) != -1){
                System.out.println(arr[i] + " " + mp.get(arr[i]));
                mp.put(arr[i], -1);
            }
        }
    }
}