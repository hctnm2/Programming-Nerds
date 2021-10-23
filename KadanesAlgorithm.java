import java.io.*;
import java.util.*;
public class MyClass {
    static public int maxSubArray(int[] nums)
    {
        int meh = 0,msf = Integer.MIN_VALUE;
        for(int i = 0;i<nums.length;i++)
        {
            meh = meh + nums[i];
            if(meh < nums[i])
                meh = nums[i];
            if(meh > msf)
                msf = meh;
        }
    return msf;
    }
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] num = new int[n];
      for(int i=0;i<n;i++)
        num[i] = sc.nextInt();
        System.out.println("Maximum contiguous sum is : " + maxSubArray(num));
    }
}
