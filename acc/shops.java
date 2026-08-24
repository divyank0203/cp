import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        int k = sc.nextInt();
        int grow=0;
        int last = 0;
        int idx=0;
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                last=arr[i];
                idx=i;
                break;
            }
        }
        for(int i=idx; i<n; i++){
            if(arr[i]>0){
                if(arr[i]>=last+k){
                    grow++;
                    
                }
                last=arr[i];
            }
        }
        System.out.println(grow);

    }
}