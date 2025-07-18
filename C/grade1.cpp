#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main() {
    float Math, Eng, Pro, Phy, TFCS, CF;
    float avg;
    char grade;
    char ch;

    again:
        system("cls");
        p("input Math="); s("%f", &Math);
        p("input Eng="); s("%f", &Eng);
        p("input Program="); s("%f", &Pro);
        p("input Physic="); s("%f", &Phy);
        p("input TFCS="); s("%f", &TFCS);
        p("input CF="); s("%f", &CF);

        avg = (Math + Eng + Pro + Phy + TFCS + CF) / 6;

        if (avg >= 95)
            grade = 'A';
        else if (avg >= 85 && avg < 95)
            grade = 'B';
        else if (avg >= 75 && avg < 85)
            grade = 'C';
        else if (avg >= 65 && avg < 75)
            grade = 'D';
        else if (avg >= 50 && avg < 65)
            grade = 'E';
        else
            grade = 'F';

        p("Your Grade is: %c", grade);
        p("Press Enter Key To Continue:\n");

        ch = getchar();
        if (ch ==13 '\n')  // Check for Enter key (newline)
            goto again;  // Continue the loop if Enter is pressed

    return 0;
}

