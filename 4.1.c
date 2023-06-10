#include <stdio.h>
#include <math.h>
int main () {
int i;
int a;
int n;
int S=0;
printf("Enter a three digit number: a= ");
scanf("%d",&a);
for (i=0;i<4;i++){
n=a%10;
a=(a-n)/10;
S=S+n;	
}

printf("The sum: %d", S );

return 0;
}
