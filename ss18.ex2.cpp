#include<stdio.h>

struct Student {
	char name[50];
	int age;
	char phoneNumber[15];
};
int main() {
	struct Student student1;
	printf("Moi nhap ten hoc sinh: ");
	fgets(student1.name, sizeof(student1.name), stdin);
	
	printf("Moi nhap tuoi hoc sinh: ");
	scanf("%d", &student1.age);
	getchar();
	printf("Nhap so dien thoai hoc sinh: ");
	fgets(student1.phoneNumber, sizeof(student1.phoneNumber), stdin);
	printf("\nStudent Information:\n");
	printf("Name: %s", student1.name);
	printf("Age: %d\n", student1.age);
	printf("Phone Number: %s", student1.phoneNumber);
	
	return 0;
}
