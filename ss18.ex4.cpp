#include<stdio.h>

struct Student {
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};

int main() {
	struct Student students[50];
	int numberOfStudents = 5;
	for (int i = 0; i < numberOfStudents; i++) { 
    students[i].id = i + 1;
    printf("\nNhap thong tin cho tung sinh vien %d:\n", i +1);
    printf("Nhap ten hoc sinh: ");
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("Nhap tuoi hoc sinh: ");
    scanf("%d", &students[i].age);
    getchar();
    printf("Nhap so dien thoai: ");
    fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin); }
    printf("\nDanh sach sinmh vien:\n"); 
    for (int i = 0; i < numberOfStudents; i++) { 
    printf("\nSinh vien %d\n", students[i].id);
    printf("ID: %d\n", students[i].id);
    printf("Name: %s", students[i].name);
    printf("Age: %d\n", students[i].age);
    printf("Phone Number: %s", students[i].phoneNumber);
    }
    return 0;
 }

