#include<stdio.h>
int main(){
    /*
int n,n1,n2,nb,digit;
printf("donne n:");
scanf("%d",&n);
digit = 1;
n1 = 0;
n2 = 0;
do{
    nb = n % 10;
    
    if(nb % 2 == 0){
        n1 = n1 + nb * digit;
    }else{
        n2 = n2 + nb * digit;
    }
    digit *= 10;
    n = n/10;
}while(n ==! 0);
printf("n1 = %d\n n2 = %d",n1,n2);
*/
int a,b,x1,X2;
long long c;
printf("donne a:");
scanf("%d",&a);
printf("donne b:");
scanf("%d",&b);
int p = 10;
int s = 1;
do{
    x1 = a % 10;
    X2 = b % 10;
    c = x1 * p + X2 * s;
    p *= 10;
    s *= 10;
    a = a / 10;
    //a = a % 10;
    b = b / 10;
   // b = b % 10;
}while (a ==! 0 && b ==!0);
printf("c= %lld",c);
    return 0;
}