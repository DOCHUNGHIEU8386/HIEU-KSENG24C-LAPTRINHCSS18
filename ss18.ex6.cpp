#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};

int main() {
    struct Student students[50] = {
        {1, "HIEUTHUNHAT", 1, "0123456789"},
        {2, "HIEUTHUHAI", 2, "0123456789"},
        {3, "HIEUTHUBA", 3, "7894561230"},
        {4, "HIEUTHUTU", 4, "4561237890"},
        {5, "HIEUTHUNAM", 5, "1237894560"}
    };
    
    int numberOfStudents = 5; 
    struct Student newStudent;

    printf("\nNhap thong tin sinh vien moi:\n");
    newStudent.id = numberOfStudents + 1; 
    printf("Nhap ten sinh vien: ");
    getchar(); 
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    getchar(); 
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);

    students[numberOfStudents] = newStudent;
    numberOfStudents++;

    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s", students[i].name);  
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s", students[i].phoneNumber);  
    }

    return 0;
}

