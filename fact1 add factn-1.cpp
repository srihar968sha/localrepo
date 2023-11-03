#include<stdio.h>
fact(int n){
	int ans;
	if (n==0){
	  ans=1;
	}
	else{
		ans=n*fact(n-1);
	}
	return ans;
}
int main(){
int n,sum=0,term;
printf("enter number");
scanf("%d",&n);

for(int i=0;i<=n;i++){
	term=fact(i-1)+fact(i);
	printf("%d term is %d\n",i,term);
	sum=sum+term;
       }
printf("%d is sum",sum);
return 0;
}
