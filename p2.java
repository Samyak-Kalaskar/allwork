import java.util.Scanner;

public class CommentChecker {
    public static void isComment(String line) {

        
        if (line.length() > 2 && line.charAt(0) == '/' && line.charAt(1) == '/' && line.charAt(2) != '/') {
            System.out.println("It is a single-line comment");
            return;
        }

        
        if (line.length() > 4 && line.charAt(line.length() - 2) == '*' && line.charAt(line.length() - 1) == '/' && line.charAt(0) == '/' && line.charAt(1) == '*') {
            System.out.println("It is a multi-line comment");
            return;
        }

        System.out.println("It is not a comment");
    }

    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

    
        System.out.println("Enter a line:");
        String line = scanner.nextLine();

       
        isComment(line);
    }
}
