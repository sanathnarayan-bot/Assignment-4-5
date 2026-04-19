/*
A structure variable can be passed to a function. When a structure is passed as an argument,
its copy is passed to the function. This means any changes made inside the function do not affect
the original structure variable.
*/

#include <stdio.h>

struct student {
    int id;
    float marks;
};

void display(struct student s) {
    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student s1;

    printf("Enter ID and Marks: ");
    scanf("%d %f", &s1.id, &s1.marks);

    display(s1);

    return 0;
}
