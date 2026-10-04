#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "budget_management.h"

Department budgets[MAX_DEPTS];
int deptCount = 0;

<<<<<<< HEAD
void readLine(const char *prompt, char *buffer, int size)
{
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) == NULL)
    {
=======


void readLine(const char *prompt, char *buffer, int size) {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin) == NULL) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\nInput ended. Exiting.\n");
        exit(0);
    }
    buffer[strcspn(buffer, "\n")] = '\0';
}

<<<<<<< HEAD
double calculateRemaining(double allocated, double expenditure)
{
    return allocated - expenditure;
}

const char *getStatus(double allocated, double expenditure)
{
=======
double calculateRemaining(double allocated, double expenditure) {
    return allocated - expenditure;
}

const char *getStatus(double allocated, double expenditure) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    if (expenditure <= allocated)
        return "WITHIN BUDGET";
    else
        return "EXCEEDED BUDGET";
}

<<<<<<< HEAD
void readName(const char *prompt, char *name)
{
    while (1)
    {
=======
void readName(const char *prompt, char *name) {
    while (1) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        readLine(prompt, name, NAME_LEN);
        if (strlen(name) > 0)
            return;
        printf("  Error: Name cannot be empty.\n");
    }
}

<<<<<<< HEAD
double readAmount(const char *prompt)
{
=======
double readAmount(const char *prompt) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    char text[100];
    char *end;
    double amount;

<<<<<<< HEAD
    while (1)
    {
=======
    while (1) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        readLine(prompt, text, sizeof(text));
        amount = strtod(text, &end);

        if (end == text || *end != '\0')
            printf("  Error: Enter a valid number.\n");
        else if (amount <= 0)
            printf("  Error: Amount must be greater than zero.\n");
        else
            return amount;
    }
}

<<<<<<< HEAD
int findDepartment(const char *name)
{
    int i;

    for (i = 0; i < deptCount; i++)
    {
=======
int findDepartment(const char *name) {
    int i;

    for (i = 0; i < deptCount; i++) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        if (strcmp(budgets[i].name, name) == 0)
            return i;
    }

    return -1;
}

<<<<<<< HEAD
void addBudget(void)
{
    char name[NAME_LEN];

    if (deptCount == MAX_DEPTS)
    {
=======
void addBudget(void) {
    char name[NAME_LEN];

    if (deptCount == MAX_DEPTS) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("  Error: Maximum number of departments reached.\n");
        return;
    }

    readName("Department name: ", name);

<<<<<<< HEAD
    if (findDepartment(name) != -1)
    {
=======
    if (findDepartment(name) != -1) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("  Error: %s already has a budget.\n", name);
        return;
    }

    strcpy(budgets[deptCount].name, name);
    budgets[deptCount].allocated = readAmount("Allocated budget (N$): ");
    budgets[deptCount].expenditure = 0.0;
    deptCount++;

    printf("  Budget saved for %s.\n", name);
}

<<<<<<< HEAD
void addExpenditure(void)
{
=======
void addExpenditure(void) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    char name[NAME_LEN];
    int index;
    double amount, remaining;

    readName("Department name: ", name);
    index = findDepartment(name);

<<<<<<< HEAD
    if (index == -1)
    {
=======
    if (index == -1) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("  Error: Department not found.\n");
        return;
    }

    amount = readAmount("Expenditure (N$): ");
    budgets[index].expenditure += amount;

    remaining = calculateRemaining(
        budgets[index].allocated,
<<<<<<< HEAD
        budgets[index].expenditure);
=======
        budgets[index].expenditure
    );
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9

    printf("  Remaining budget: N$%.2f\n", remaining);

    if (remaining < 0)
        printf("  WARNING: %s has EXCEEDED its budget!\n", name);
}

<<<<<<< HEAD
void displayDepartment(Department d)
{
=======
void displayDepartment(Department d) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    printf("\nDepartment: %s\n", d.name);
    printf("Allocated Budget: N$%.2f\n", d.allocated);
    printf("Expenditure: N$%.2f\n", d.expenditure);
    printf("Remaining Budget: N$%.2f\n",
           calculateRemaining(d.allocated, d.expenditure));
    printf("Status: %s\n",
           getStatus(d.allocated, d.expenditure));
}

<<<<<<< HEAD
void displayAll(void)
{
    int i;

    if (deptCount == 0)
    {
=======
void displayAll(void) {
    int i;

    if (deptCount == 0) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("  No budgets entered yet.\n");
        return;
    }

    for (i = 0; i < deptCount; i++)
        displayDepartment(budgets[i]);
}

<<<<<<< HEAD
void displayExceeded(void)
{
=======
void displayExceeded(void) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    int i, found = 0;

    printf("\nDepartments over budget:\n");

<<<<<<< HEAD
    for (i = 0; i < deptCount; i++)
    {
        if (budgets[i].expenditure > budgets[i].allocated)
        {
=======
    for (i = 0; i < deptCount; i++) {
        if (budgets[i].expenditure > budgets[i].allocated) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
            printf("  %s - over by N$%.2f\n",
                   budgets[i].name,
                   budgets[i].expenditure - budgets[i].allocated);
            found = 1;
        }
    }

    if (!found)
        printf("  None. All departments are within budget.\n");
}

<<<<<<< HEAD
void budgetMenu(void)
{
    char choice[10];

    do
    {
=======
void budgetMenu(void) {
    char choice[10];

    do {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\n===== BUDGET MANAGEMENT =====\n");
        printf("1. Enter departmental budget\n");
        printf("2. Enter expenditure\n");
        printf("3. Display budget information\n");
        printf("4. Show departments over budget\n");
        printf("0. Exit\n");

        readLine("Choose: ", choice, sizeof(choice));

        if (strcmp(choice, "1") == 0)
            addBudget();
        else if (strcmp(choice, "2") == 0)
            addExpenditure();
        else if (strcmp(choice, "3") == 0)
            displayAll();
        else if (strcmp(choice, "4") == 0)
            displayExceeded();
        else if (strcmp(choice, "0") == 0)
            printf("Goodbye.\n");
        else
            printf("  Invalid option.\n");

    } while (strcmp(choice, "0") != 0);
}
<<<<<<< HEAD
=======

>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
