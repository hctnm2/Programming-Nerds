#include <iostream>
using namespace std;
int main()
{
    int a[50] , n , temp, k , i , j;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"\nEnter the value of k : ";
    cin>>k;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<" element : ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"\n";
    cout<<k<<"th largest number is "<< a[n-k];
    return 0;
}
