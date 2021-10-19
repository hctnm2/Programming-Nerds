/*       
Given a array of N strings, find the longest common prefix among all strings present in the array.
*/

class Solution{
    String longestCommonPrefix(String arr[], int n){
        // code here
        if(arr.length == 0)
            return "";
        String prefix = arr[0];
        for(int i = 0;i<n;i++ )
        {
            while(arr[i].indexOf(prefix) != 0)
            {
                prefix = prefix.substring(0, prefix.length()-1);
            }
        }
        if(prefix.length() == 0)
            return "-1";
        return prefix;
    }
}
