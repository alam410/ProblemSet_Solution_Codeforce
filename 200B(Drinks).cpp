#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double  sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
            }
            sum=(sum/n);
            cout<<sum;
}
