#include<stdio.h>

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
    int idToSearch;
    int found = 0; 

    printf("Nhap id sinh vien muon sua thong tin: ");
    scanf("%d", &idToSearch);

    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i].id == idToSearch) {
            found = 1;
            printf("\nSinh vien tim thay:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Phone Number: %s", students[i].phoneNumber);

            printf("\nNhap lai ten sinh vien: ");
            getchar(); 
            fgets(students[i].name, sizeof(students[i].name), stdin);

            printf("Nhap lai tuoi sinh vien: ");
            scanf("%d", &students[i].age);

            printf("\nSinh vien sau khi sua:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Phone Number: %s", students[i].phoneNumber);
            break; 
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien voi id: %d\n", idToSearch);
    }

    
    printf("\nDanh sach sinh vien sau khi sua:\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("\nSinh vien %d:\n", students[i].id);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s", students[i].phoneNumber);
    }

    return 0;
}

