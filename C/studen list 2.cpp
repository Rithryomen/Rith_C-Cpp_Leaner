#include <stdio.h>

struct Student {
    int id;
    char name[15];
    char sex;
    char school[20];
    float avg;
};

int main() {
    struct Student students[15] = {
        {1, "Rith   ", 'M', "School:RUPP", 80.50},
        {2, "Sathya ", 'M', "School:RUPP", 60.99},
        {3, "Tou    ", 'M', "School:RUPP", 89.99},
        {4, "Smey   ", 'M', "School:RUPP", 99.00},
        {5, "No name", 'M', "School:RUPP", 00.00},
        {6, "No name", 'M', "School:RUPP", 00.00},
        {7, "No name", 'M', "School:RUPP", 00.00},
        {8, "No name", 'M', "School:RUPP", 00.00},
        {9, "No name", 'M', "School:RUPP", 00.00},
        {10, "No name", 'M', "School:RUPP", 00.00},
        {11, "No name", 'M', "School:RUPP", 00.00},
        {12, "No name", 'M', "School:RUPP", 00.00},
        {13, "No name", 'M', "School:RUPP", 00.00},
        {14, "No name", 'M', "School:RUPP", 00.00},
        {15, "No name", 'M', "School:RUPP", 00.00}
    };
    
    printf("ID\tName\t\tSex\tSchool\t\t\tAverage\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < 15; i++) {
        printf("%d\t%-15s\t%c\t%-20s\t%.2f\n", students[i].id, students[i].name, students[i].sex, students[i].school, students[i].avg);
    }

    return 0;
}

