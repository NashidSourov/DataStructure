#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }


    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]) ;
        }
    }


    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;

}
