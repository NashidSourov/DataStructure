//root finding of a Quadratic equation by binary search

#include<bits/stdc++.h>
using namespace std;

#define ll long long
 ll a,b,c;

ll f_x(ll x)
{
    return 2*a*x+b;  // finding slope
}

ll bSearch()
{
    ll low=pow(-10,9);
    ll high=pow(10,9);

    while(low<=high)
    {
        ll mid=(high+low)/2;
        if(f_x(mid)==0)
        {
            return mid;
        }
        else if(f_x(mid)>0)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}

int main()
{

    cin>>a>>b>>c;

    cout<<bSearch()<<endl;

    return 0;
}

