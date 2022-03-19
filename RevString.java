import java.util.*;
public class RevString{
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String str = sc.nextLine();
        char[] ch = str.toCharArray();
        for(int i = ch.length-1; i >=0 ; i--){
            System.out.print(ch[i]);
        }
    }
}
