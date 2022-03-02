import java.util.*;

class Solution {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int size = input.nextInt();
        int key = input.nextInt();
        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }
        boolean check = false;
        int index = -1;
        
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                check = true;
                index = i;
                break;
            }
        }
        if (check) {
            System.out.println("Key " + key + " is present at " + index);;
        } else {
            System.out.println("Key Not found");
        }
        
        input.close();
    }
}