#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    if(n>=0 && n%2==0){
        printf("The number is Even");
    }
     else if(n >=0 && n%2 != 0)
     {
        printf("Odd");
     }
     else{
        printf("Number is Negative");
     }
     return 0;

}