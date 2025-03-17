#include<stdio.h>
int main(){
int n;
int prime=1;
scanf("%d",&n);
for(int i=2;i<n;i++){
   if(n%i==0){
    prime=0;
    break;
   }
}
if(prime==1){
    printf("%d is prime number",n);
}
else{
    printf("none");
}
return 0;
}
