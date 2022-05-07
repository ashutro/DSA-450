public class isArraySortedUsingRecurrsion {
    static boolean isSorted(int[] arr, int idx){
        if(idx == arr.length-1) return true;

        if(arr[idx]>arr[idx+1]) return false;

        else{
            boolean ans = isSorted(arr, idx+1);
            return ans;
        }
    }
    public static void main(String[] args) {
        int[]  arr1=  {1,2,3,4,5};
        int[]  arr2=  {1,2,3,5,4};
        if(isSorted(arr1, 0)) System.out.println("YES");
        else System.out.println("NO");
        if(isSorted(arr2, 0)) System.out.println("YES");
        else System.out.println("NO");
        
    }
    
}
