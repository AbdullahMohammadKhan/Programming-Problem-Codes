#include<bits/stdc++.h>
using namespace std;
int digits(int n)
    {
        int sum=0;
        while(n>=1)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
int main()
{


    int n;
    cin>>n;
    int a[n];int k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            a[++k]=i;

    }
    int max_sum=0,max_num=0;
    for(int i=1;i<=k;i++)
    {
        int current_sum=digits(a[i]);
        if(current_sum>max_sum)
            max_sum=current_sum,max_num=a[i];
    }
    //if (max_num==0)
      //  cout<<n;
    //else
    cout<<max_num;
    return 0;

}
