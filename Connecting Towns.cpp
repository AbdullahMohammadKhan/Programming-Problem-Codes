#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,a;int prod=1;
        cin>>t;
        while(t--)
        {
            cin>>a;
            prod=(prod% 1234567)*(a% 1234567);
        }
        cout<<prod% 1234567<<endl;


    }
    return 0;
}
