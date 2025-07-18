#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int id;
    float Math, Eng, CF, Physic, TFCS, Program, max;
    float average;
    char name[14], sex, add[20];
    
    // Input user information and marks
    system("cls");
    printf("Input ID: ");
    scanf("%d", &id);
    getchar();  // To consume the newline character after scanf for ID

    // Input Name
    printf("Input Name: ");
    fgets(name, sizeof(name), stdin); // Safer alternative to gets()
    name[strcspn(name, "\n")] = 0; // Remove the trailing newline character

    // Input Sex (F/M)
    printf("Input Sex (F/M): ");
    scanf("%c", &sex);
    getchar(); // Flush the input buffer

    // Input Address
    printf("Input Address: ");
    fgets(add, sizeof(add), stdin); // Safer alternative to gets()
    add[strcspn(add, "\n")] = 0; // Remove the trailing newline character
    
    // Input marks for each subject
    printf("Input Math: ");
    scanf("%f", &Math);
    printf("Input Eng: ");
    scanf("%f", &Eng);
    printf("Input CF: ");
    scanf("%f", &CF);
    printf("Input Physic: ");
    scanf("%f", &Physic);
    printf("Input TFCS: ");
    scanf("%f", &TFCS);
    printf("Input Program: ");
    scanf("%f", &Program);

    // Calculate the maximum score
    max = Math;
    if (Eng > max) max = Eng;
    if (CF > max) max = CF;
    if (Physic > max) max = Physic;
    if (TFCS > max) max = TFCS;
    if (Program > max) max = Program;

    // Calculate the average
    average = (Math + Eng + CF + Physic + TFCS + Program) / 6;
    
    // Print column headers
    printf("%-3s %-15s %-4s %-10s %-5s %-5s %-5s %-5s %-5s %-5s %-5s %-5s\n", 
           "ID", "Name", "Sex", "Address", "Math", "Eng", "CF", "Physic", "TFCS", "Program", "Average", "Max");
    
    // Print the student data
    printf("%-3d %-15s %-4c %-10s %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f\n", 
           id, name, sex, add, Math, Eng, CF, Physic, TFCS, Program, average, max);

    return 0;
}

