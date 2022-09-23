/*

/printing hollow rectangular pattern
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i = 1; i<=row;i++)
    {
        for( int j =1; j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";

            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
    

}




// printing inverted half pyramid

#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    for( int i = row;i>=1;i--)
    {
        for(int j=1;j<=col;j++)
        {
            if(j<=i)
            {
                cout<<"*";

            }
        }
        cout<<endl;
    }     






    return 0;
}


//half pyramid after 180 degree rotation


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if((n-i)>=j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }


        }
        cout<<endl;




    }





    return 0;
}

// Printing half pyramid using numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}


//Printing Floyd's Triangle

#include<iostream>
using namespace std;
int main()
{
    int n,num = 0;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j= 1;j<=n;j++)
        {
            if(j<=i)
            {
                num = num + 1;
                cout<<num<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


//Printing butterfly pattern

#include<iostream>
using namespace std;
int main()

{
    int n;
    
    cin>>n;
    //for printing the upper part of the pattern

    for(int i = 1; i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(j<=i) 
            {
                cout<<"*";   //for printing the left side of the pattern
            }

        }

        int space = 2*n-2*i;

        for(int j = 1;j<=space;j++)
        {
            cout<<" "; //for printing the space inside the pattern
        }

        for(int j = 1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }

        }

        cout<<endl;
    }
    //for printing the lower part of the pattern

    for(int i = n; i>=1;i--)
    {
        for(int j = 1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }

        }
        int space = 2*n-2*i;
        for(int j = 1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j = 1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }

        }

        cout<<endl;
    }

    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = n;i>=1;i--)
    {
        for(int j =1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<j;
                cout<<" ";
            }
        }
    cout<<endl;
    }
    return 0;
}



