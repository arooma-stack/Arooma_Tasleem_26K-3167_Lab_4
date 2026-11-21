#include<stdio.h>
#include<string.h>
struct mobile{
	char name[20];
	char model[20];
	int launch_year;
	int price;
	};
	void displayinfo(struct mobile s1){
		printf("\nMobile name is %s", s1.name);
		printf("\nModel is %s",s1.model);
		printf("\nLaunch year is %d",s1.launch_year);
		printf("\nPrice is %d",s1.price);
	}
	int main(){
		struct mobile s1;
		strcpy(s1.name,"Nokia");
		strcpy(s1.model,"102");
		s1.launch_year=2026;
		s1.price=120000;
		displayinfo(s1);
		if(s1.price>100000){
			printf("\nBranded");
		}else {
			printf("\nnot Branded");
			
		}
	}