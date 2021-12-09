import java.util.*;

class MindGame {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);

       System.out.println("Enter th String : ");
        String s = input.nextLine();
        int n = s.length();

        Stack<Integer> st = new Stack<>();

        for (int i = 0; i < n + 1; i++) {
            st.push(i + 1);

            if (i == n || s.charAt(i) == 'I') {
                while (!st.isEmpty()) {
                    System.out.println(st.pop());
                }
            }
        }
        input.close();
    }
}