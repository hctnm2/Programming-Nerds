/*
Given an integer array nums of length n and an integer target, 
find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

Sample Input : nums = [-1,2,1,-4], target = 1
Sample Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Sample Input : nums = [2,6,-1,3,9], target = 5
Sample Output: 4
Explanation: The sum that is closest to the target is 4. (2 + -1 + 3 = 4).
*/

import java.util.*;
public class ClosestSumOf3 
{
    public static int threeSumClosest(int[] nums, int target) 
    {
        Arrays.sort(nums);
        int min_Sum = nums[0]+nums[1]+nums[nums.length-1];
        for (int i=0; i<nums.length-2;i++)
        {
            int start=i+1;
            int end = nums.length-1;
            while(start<end )
            {
                int sum = nums[i]+nums[start]+nums[end];
                if (sum<target)
                    start++;
                else if (sum>target)
                    end--;
                else 
                    return target;
                
                if (Math.abs(target-sum)<Math.abs(target-min_Sum))
                    min_Sum =sum;
            }
        }
        return min_Sum;
    }
    public static void main(String args[])
    {
	Scanner sc= new Scanner(System.in);
	System.out.print("Enter the Size of array : ");
	int l= sc.nextInt();
	int arr[]=new int[l];
	System.out.println("Enter the array elements");
	for (int i=0; i<l;i++)
	{
	    arr[i]=sc.nextInt();
	}
        System.out.print("Enter the target sum : ");
	int s= sc.nextInt();
        int closestsum= threeSumClosest(arr, s);
        System.out.println("The sum of 3 values closest to the target sum is : " + closestsum);
        
    }
}
