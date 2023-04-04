#include<stdio.h>
int main(){
    int a,b,sum,sub,multi;
  
    scanf("%d %d",&a,&b);
    sum =a+b;
    printf("%d + %d = %d \n",a,b,sum);
     sub =a-b;
    printf("%d + %d = %d \n",a,b,sub);
     multi =a*b;
    printf("%d * %d = %d \n",a,b,multi);
    float div =a*1.00/b;
    printf("%d / %d = %.2f \n",a,b,div);

    return 0;
}