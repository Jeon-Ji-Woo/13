#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//형식선언 
struct student{
	int  ID;
	char name[100];
	float score;
};
 
int main(int argc, char *argv[]) {
	//instance 선언
	struct student s1 = {2311249, "Jiwoo", 4.3}; 
	//댜른값 변경
	s1.ID = 123456;
	s1.name[0] = 'c';
	s1.score = 0.7;
	//출력 
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("score : %f\n", s1.score);
	
	strcpy(s1.name, "Haesol");
	printf("name2 : %s\n");
	
	system("PAUSE");
	return 0;
}
