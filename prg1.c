#include<stdio.h>
#include<conio.h>
int main(){
	
	char digit;
	
	printf("Enter a character:");
	scanf("%c",&digit);
	
	if(digit>='a' && digit<='z'){
		printf("it is a alphabet");
	} 
	
	else if(digit>=0 && digit<=9){
	
		printf("it is a number");	
	}
	
	else{
	
		printf("it is a special character");
	}	
		
	
	
	return 0;
}
