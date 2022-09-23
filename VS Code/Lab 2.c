#include<iostream>
using namespace std;
int main()
{   
    int nofp,sum = 0;
    for(int i = 1;i<=nofp;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c) >= 2)
        {
            sum = sum +1;
        }
        cout<<endl;
    }
    cout<<sum;
    return 0;
}