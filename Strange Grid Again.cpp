#include<bits/stdc++.h>
using namespace std;

int main()
{
     long int r,c,first;
    cin>>r>>c;
    int n=r/2;
    if(r%2) // for odd number
    {
         first=0+(n)*10;

    }
    else //for even number
    {
         first =1+(n-1)*10;
    }
    cout<<first+(c-1)*2;
}
