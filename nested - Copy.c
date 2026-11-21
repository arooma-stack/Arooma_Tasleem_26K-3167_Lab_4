#include<stdio.h>
#include<string.h>
//embedded structure
struct mobile{
	char name[20];
	int prices;
	struct battery{
		float price;
};		int fastcharging;
	}b1;

int main(){
	struct mobile m1;
	m1.price=2000000;
	strcpy(m1.name,"IPhone");
	m1.b1.prices=3400;
	m1.b1.fastcharging=75;
	printf("\nMobile Name %s",m1.name);
