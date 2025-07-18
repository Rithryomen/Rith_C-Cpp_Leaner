#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main() {
    int a[20], n, i, pos, add;
    char ch;

    again:
    system("cls");  // Clear console screen

    // Input number of elements (n)
    do {
        p("Input n: ");
        s("%d", &n);
    } while (n < 0 || n > 20);

    // Input the elements of the array
    for (i = 0; i < n; i++) {
        p("a[%d]= ", i);
        s("%d", &a[i]);
    }

    // Display the array before adding the new element
    p("\n==> Before Add: <==\n");
    for (i = 0; i < n; i++) {
        p("%5d", a[i]);
    }

    // Input the element to add
    p("\nPlease Input An Element That You Want To Add= ");
    s("%d", &add);

    // Input the position where the element should be added
    do {
        p("\nWhich Position Do You Want To Add it? ");
        s("%d", &pos);
    } while (pos < 0 || pos > n);  // Ensure position is valid (0 to n)

    n++;  

    // Shift elements to the right to make space for the new element
    for (i = n - 1; i > pos; i--) {
        a[i] = a[i - 1];  // Shift element to the right
    }

    // Insert the new element at the specified position
    a[pos] = add;

    // Display the array after adding the new element
    p("\n==> After Add: <==\n");
    for (i = 0; i < n; i++) {
        p("%5d", a[i]);
    }

    p("\nPress Any Key To Continue (ESC to Exit):\n");
    ch = getchar();  // Wait for user input
    if (ch != 27) {
        getchar();  // To catch the newline character after pressing a key
        goto again;  // Repeat the process
    }

    return 0;
}

