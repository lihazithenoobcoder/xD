/* Watermelon
#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w == 2)
    {
        cout<<"NO";
    }
    else
    {
        if(w%2==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
*/

/*
Way Too Long Words

#include<iostream>
#include<cstring>
using namespace std;
int main()

{   
    int loop;
    cin>>loop;
    for(int i = 1; i<=loop;i++)
    {
        char inp[101];
        cin>>inp;
        int len;
        len = strlen(inp);
        if(len>10)
        {
            cout<<inp[0]<<len-2<<inp[len-1];
        }
        else
        {
            cout<<inp;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
TEAM
#include<iostream>
using namespace std;
int main()
{   
    int nofp,sum = 0;
    cin>>nofp;
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
*/

/*
#include<iostream>
using namespace std;
int main()
{   
    long long n,m,a,x,y;
    
    cin>>n>>m>>a;
    if(n%a==0)
    {
        x = n/a;
    }
    else
    {
        x = n/a + 1;
    }
    if(m%a == 0)
    {
        y = m/a;
    }
    else
    {
        y = m/a + 1;
    }
    cout<<x*y;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,k,sum = 0,i;
    cin>>n>>k;
    int a[n];
    for( i = 0;i<n;i++)
    {   
        cin>>a[i];
    }
    for( i= 0;i<n;i++)
    {
        if(a[i] != 0 )
        {
            if(a[i] >= a[k])          
            {
                sum =sum+1;  
            }
        }   


    }
    cout<<sum;
    return 0;
}
*/

/*
DOMINO PILING

#include<iostream>
using namespace std;
int main()
{
    int m,n,dm;
    cin>>m>>n;
    if(m%2 == 0 && n%2 == 0)
    {
        dm = (m/2)*(n/1);
    }
    else if(m%2 == 0 && n%2 != 0)
    {
        dm = (m/2)*(n/1);
    }
    else if(n%2 == 0 && m%2 != 0)
    {
        dm = (n/2)*(m/1);
    }
    else if(m%2 != 0 && n%2 != 0)
    {
        dm = (m/2)*(n/1) + (n/2);
    }
    cout<<dm;

    return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{   
    int n,value = 0;
    cin>>n;
    string s;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        if(s[1] = '+')
        {
            value = value + 1;
        }
        else 
        {
            value = value - 1;
        }
        cout<<endl;
    }
    cout<<value;
    return 0;
}


/*
#include<iostream>
using namespace std;
int main()
{
    int a = -1;
    a = a-1;
    cout<<a;

}
*/















































