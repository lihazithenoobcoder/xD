#include<stdio.h>
#include<math.h>
int main()
{
    int a,reminder,result,sum = 0;
    scanf("%d",&a);
    for(int i =0; i<4;i++)
    {   
        
        reminder = a%10;
        a = a/10;
        sum = sum + reminder;
    }
        printf("%d",sum);
    return 0;
}