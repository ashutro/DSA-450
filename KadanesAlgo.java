import java.util.Scanner;

class Kadanes{
    long MaxSum(int[] arr, int n){
        long sum = Integer.MIN_VALUE;
        int l = 0;
        for(int i = 0; i < n;i++){
            l += arr[i];
            if(sum<l){
                sum = l;
            }
            if(l<0){
                l = 0;
            }
        }
        return sum;
    }
}

public class KadanesAlgo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            
            for(int i =0; i<n;i++){
                arr[i] = sc.nextInt();
            }

            Kadanes obj = new Kadanes();

            System.out.println(obj.MaxSum(arr, n));
        }
        sc.close();
    }
}