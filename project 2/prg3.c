#include<stdio.h>
#include<conio.h>
int main(){
	
	int n,i;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	for(i=0; n!=0; i++){
		n /= 10;
		
	}
	printf("count the number%d",i);
	return 0;
}
