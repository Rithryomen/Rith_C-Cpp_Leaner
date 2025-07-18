#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

int main() {
    int num_students;
    int id[MAX_STUDENTS];
    char name[MAX_STUDENTS][14];
    char sex[MAX_STUDENTS];
    char add[MAX_STUDENTS][20];
    float Math[MAX_STUDENTS];
    float Eng[MAX_STUDENTS];
    float Program[MAX_STUDENTS];
    float Physic[MAX_STUDENTS];
    float ComputerFundamental[MAX_STUDENTS];
    float TFCS[MAX_STUDENTS];
    float average[MAX_STUDENTS];

    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    getchar();  // Clear the input buffer

    if (num_students > MAX_STUDENTS) {
        printf("Max students allowed: %d\n", MAX_STUDENTS);
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Input ID: "); scanf("%d", &id[i]); getchar();
        printf("Input name: "); fgets(name[i], sizeof(name[i]), stdin); name[i][strcspn(name[i], "\n")] = 0;
        printf("Input sex (M/F): "); scanf("%c", &sex[i]); getchar();
        printf("Input address: "); fgets(add[i], sizeof(add[i]), stdin); add[i][strcspn(add[i], "\n")] = 0;
        printf("Input Math score: "); scanf("%f", &Math[i]);
        printf("Input English score: "); scanf("%f", &Eng[i]);
        printf("Input Program score: "); scanf("%f", &Program[i]);
        printf("Input Physic score: "); scanf("%f", &Physic[i]);
        printf("Input Computer Fundamental score: "); scanf("%f", &ComputerFundamental[i]);
        printf("Input TFCS score: "); scanf("%f", &TFCS[i]);

        // Calculate the average score
        average[i] = (Math[i] + Eng[i] + Program[i] + Physic[i] + ComputerFundamental[i] + TFCS[i]) / 6;
    }

    // Display student records
    printf("\nStudent Records:\n");
    printf("%-4s %-15s %-4s %-10s %-4s %-4s %-4s %-4s %-4s %-4s %-4s\n", 
           "ID", "Name", "Sex", "Address", "Math", "Eng", "Prog", "Physic", "CompFund", "TFCS", "Average");

    for (int i = 0; i < num_students; i++) {
        printf("%-4d %-15s %-4c %-10s %-4.2f %-4.2f %-4.2f %-4.2f %-4.2f %-4.2f %-4.2f\n", 
               id[i], name[i], sex[i], add[i], Math[i], Eng[i], Program[i], Physic[i], ComputerFundamental[i], TFCS[i], average[i]);
    }

    return 0;
}

