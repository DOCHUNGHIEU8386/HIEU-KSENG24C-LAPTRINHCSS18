#include<stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin hoc sinh %d:\n", i + 1);
        printf("Nhap ten hoc sinh: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);  
        printf("Nhap tuoi hoc sinh: ");
        scanf("%d", &students[i].age);  
        getchar();  
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);  
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].name);  
        printf("Age: %d\n", students[i].age);  
        printf("Phone Number: %s", students[i].phoneNumber);  
    }

    return 0;
}

