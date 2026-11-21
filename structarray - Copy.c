#include<stdio.h>
#include<string.h>
struct student{
	// members, variables , attributes
	char name[20];
	int rollno;
	float obt_marks;
	int total_marks;
	char department[20];
	float percentage;
};
void getdata(struct student s1){
	printf("\n	Student Name %s",s1.name);
	printf("\n  Student roll no %d",s1.rollno);
	printf("\n  Student obtained marks %f",s1.obt_marks);
	printf("\n  Student total marks %d",s1.total_marks);
	printf("\n  Student department %s",s1.department);
	printf("\n  Student percentage is %f",s1.percentage);
	
}
int main(){
	struct student s1[3];
	int i;
	//s1.percentage=s1.obt_marks*100/s1.total_marks;
	for(i=0;i<3;i++){
		printf("\nEnter Student Name %d",i+1);
		scanf("%s",s1[i].name);
		printf("\nEnter roll no ");
		scanf("%d",&s1[i].rollno);
	}
	
	
}