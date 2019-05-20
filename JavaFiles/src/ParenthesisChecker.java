import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class ParenthesisChecker {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(bufferedReader.readLine());
        while((t-=1)!=-1){
            String exp = bufferedReader.readLine();
            Stack<Character> stack = new Stack<>();
            boolean balanced = true;

            for(int i=0;i<exp.length();i++){
                if(exp.charAt(i)=='(' || exp.charAt(i)=='{' || exp.charAt(i)=='['){
                    stack.push(exp.charAt(i));
                }else if(!stack.isEmpty()) {
                    if (exp.charAt(i) == ')' && stack.peek() == '(') {
                        stack.pop();
                    } else if (exp.charAt(i) == '}' && stack.peek() == '{') {
                        stack.pop();
                    } else if (exp.charAt(i) == ']' && stack.peek() == '[') {
                        stack.pop();
                    } else {
                        balanced = false;
                        break;
                    }
                }else {
                    balanced = false;
                    break;
                }
            }

            if(balanced && stack.isEmpty()){
                System.out.println("balanced");
            }else{
                System.out.println("not balanced");
            }
        }
    }
}
