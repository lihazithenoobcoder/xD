/*#include<iostream>
using namespace std;
//checking if a number is prime

int main()
{   
    int n,i,rem;
    cin>> n;
    for(i = 2;i<n;i++)
    {
        rem = n%i;
        if(rem == 0)
        {
            cout<<"Non-prime"<<endl;
            break;
        }
        
    }
    if(i == n)
    {
        cout<< "Prime" << endl;
    }
    return 0;
}
*/



// To print all the prime numbers between a and b
/*#include<iostream>
using namespace std;

int main()
{
    int a,b,rem,i,j;
    cin>>a;
    cin>>b;
    for(j = a; j<=b;j++)
    {
        for(i = 2;i<j;i++)
        {
            rem = j%i;
            if(rem == 0)
            {
                
                break;
            }
            
        }
        if(i == j)
        {
            cout<< j << endl;
        }
    }

    
        break;
    
    default:
        break;
    }

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch (a)
    {
    case 5:
        cout<<"Hello"<<endl;
        break;
    case 8:
        cout<<"Hola"<<endl;    
    
    default:
    
        break;
    }


    return 0;
}

















