import java.util.*;

class ArrayIO{
    public static void main(String[] args) {
        System.out.print("Enter the size of array :-");
        Scanner input = new Scanner(System.in);

        int size = input.nextInt();
        int arr[] = new int[size];

        System.out.print("Enter the elements of array :-");
        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }

        System.out.println("The elements of array are :-");

        for (int i = 0; i < size ; ++i) {
            System.out.print((arr[i]) + " ");
        }

        input.close();
    }
}