#include "/home/jas/Desktop/ClashRCRound2Backend-final-clash/CREDENZ-02-02-22/sandbox/filter/filter.h"
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
put_filter();

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        reverse(a, a + n);
        for(int i=0;i<n;i++)
        {
            if((i + 1) % 5 == 0)
            {
                sum-=a[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}