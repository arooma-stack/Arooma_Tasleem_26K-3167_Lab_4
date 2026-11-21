#include<stdio.h>
int sum(int n){
	//sum(5)
	//5==0 no
	//4==0 no
	//3==0 no
	//2==0 no
	//1==0 no
	//0==0 yes
	if(n==0) {
		return  0;
	}else{
		return n+sum(n-1);
		//PUSH in stack
		//sum(5) calls sum(4) and wait for its result
		//sum(4) calls sum(3) and wait for its result
		//sum(3) calls sum(2) and wait for its result
		//sum(2) calls sum(1) and wait for its result
		//sum(1) calls sum(0) and wait for its result
		//base case
		//POP results
		//sum(0) =1+0=1
		//sum(2) = 2+1=3
		//sum(3) = 3+3=6
		//sum(4) = 4+6=10
		//sum(5) = 5+10=15
		
		
	}
}
int main(){
	printf("Sum is %d",sum(5));
}