#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User
{
    int age;
    char name[50];
    double gpa;
};

struct User *createUser(int id, char name[], double gpa)
{
    struct User *u = (struct User *)malloc(sizeof(struct User));
    u->age = 15;
    strcpy(u->name, "Omar");
    u->gpa = 2.5;
    return u;
}

int main(void)
{
    struct User u1 = {1, "Mohamed", 3.1};
    struct User u2 = {};
    printf("Age: %d, Name: %s, gpa: %lf\n", u1.age, u1.name, u1.gpa);

    u2.age = 21;
    strcpy(u2.name, "Ahmed");
    u2.gpa = 3.9;
    printf("Age: %d, Name: %s, gpa: %lf\n", u2.age, u2.name, u2.gpa);

    struct User *u3 = (struct User *)malloc(sizeof(struct User));

    u3->age = 15;
    strcpy(u3->name, "Omar");
    u3->gpa = 2.5;
    printf("Age: %d, Name: %s, gpa: %lf\n", u3->age, u3->name, u3->gpa);

    struct User *u4 = createUser(1, "Samir", 3.1);
    printf("Age: %d, Name: %s, gpa: %lf\n", u4->age, u4->name, u4->gpa);

    // Clean up heap memory
    free(u3);
    free(u4);
}
