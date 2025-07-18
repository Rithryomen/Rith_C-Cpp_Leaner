#include <stdio.h>

int main() {
    float Math, English, Program, Physic, CF, tfst;
    float average;

    // Input values
    printf("Enter Math: ");
    scanf("%f", &Math);  // Corrected scanf format
    printf("Enter English: ");
    scanf("%f", &English);  // Corrected scanf format
    printf("Enter Program: ");
    scanf("%f", &Program);  // Corrected scanf format
    printf("Enter Physic: ");
    scanf("%f", &Physic);  // Corrected scanf format
    printf("Enter CF: ");
    scanf("%f", &CF);  // Corrected scanf format
    printf("Enter tfst: ");
    scanf("%f", &tfst);  // Corrected scanf format

    // Calculate average
    average = (Math + English + Program + Physic + CF + tfst) / 6;

    // Output values
    printf("Math: %.2f\t English: %.2f\t Program: %.2f\t Physic: %.2f\t CF: %.2f\t tfst: %.2f\t Average: %.2f\n",
           Math, English, Program, Physic, CF, tfst, average);

    return 0;
}

