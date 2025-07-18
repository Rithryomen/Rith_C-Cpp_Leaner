#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100  // Define the maximum number of students

int main() {
    int num_students;
    int id[MAX_STUDENTS];      // Array to store student IDs
    char name[MAX_STUDENTS][14];  // Array to store student names (14 characters max)
    char sex[MAX_STUDENTS];      // Array to store student sex (1 char per student)
    char add[MAX_STUDENTS][20];  // Array to store student addresses (20 characters max)
    float math[MAX_STUDENTS];    // Array to store math scores
    float eng[MAX_STUDENTS];     // Array to store English scores
    float kh[MAX_STUDENTS];      // Array to store Khmer scores
    float average[MAX_STUDENTS]; // Array to store averages

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Ensure the number of students doesn't exceed the defined maximum
    if (num_students > MAX_STUDENTS) {
        printf("You can only enter up to %d students.\n", MAX_STUDENTS);
        return 1;  // Exit the program if the number exceeds the limit
    }

    // Clear the buffer after scanf to avoid issues with getchar() later
    getchar();

    // Loop to input data for each student
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Input ID: ");
        scanf("%d", &id[i]);
        getchar();  // Clear the input buffer

        printf("Input name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = 0;  // Remove the newline character

        printf("Input sex (M/F): ");
        scanf("%c", &sex[i]);
        getchar();  // Clear the input buffer

        printf("Input address: ");
        fgets(add[i], sizeof(add[i]), stdin);
        add[i][strcspn(add[i], "\n")] = 0;  // Remove the newline character

        printf("Input math score: ");
        scanf("%f", &math[i]);

        printf("Input English score: ");
        scanf("%f", &eng[i]);

        printf("Input Khmer score: ");
        scanf("%f", &kh[i]);

        // Calculate average
        average[i] = (math[i] + eng[i] + kh[i]) / 3;
    }

    // Display the data
    printf("\nStudent Records:\n");
    printf("%-4s %-15s %-4s %-10s %-4s %-4s %-4s %-4s\n", "ID", "Name", "Sex", "Address", "Math", "Eng", "Khmer", "Average");
    for (int i = 0; i < num_students; i++) {
        printf("%-4d %-15s %-4c %-10s %-4.2f %-4.2f %-4.2f %-4.2f\n",
            id[i], name[i], sex[i], add[i], math[i], eng[i], kh[i], average[i]);
    }

    return 0;
}

