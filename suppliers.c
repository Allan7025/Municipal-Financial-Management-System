<<<<<<< HEAD
=======
// ==========================================================
// Supplier Management Module
// Developer: Nangolo Drothea
// Student No: 223039985
// Course: PAP521S – Programming in Practice
// ==========================================================
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
#include <stdio.h>
#include <string.h>
#include "suppliers.h"

Supplier suppliers[MAX_SUPPLIERS];
int supplierCount = 0;

<<<<<<< HEAD
void addSupplier(void)
{
    if (supplierCount >= MAX_SUPPLIERS)
    {
=======
void addSupplier(void) {
    if (supplierCount >= MAX_SUPPLIERS) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\n Supplier list is full!\n");
        return;
    }

    Supplier s;
    s.isActive = 1;

    printf("\n--- Register New Supplier ---\n");

    printf("Supplier Name: ");
    getchar();
    fgets(s.name, MAX_NAME, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Contact Person / Phone: ");
    fgets(s.contact, MAX_CONTACT, stdin);
    s.contact[strcspn(s.contact, "\n")] = '\0';

    printf("Service / Goods Provided: ");
    fgets(s.service, MAX_NAME, stdin);
    s.service[strcspn(s.service, "\n")] = '\0';

    suppliers[supplierCount++] = s;
    printf("\n Supplier registered successfully! Total: %d\n", supplierCount);
}

<<<<<<< HEAD
void displayAllSuppliers(void)
{
    if (supplierCount == 0)
    {
=======
void displayAllSuppliers(void) {
    if (supplierCount == 0) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\n No suppliers registered yet.\n");
        return;
    }

    printf("\n=== All Registered Suppliers (%d) ===\n", supplierCount);
<<<<<<< HEAD
    for (int i = 0; i < supplierCount; i++)
    {
=======
    for (int i = 0; i < supplierCount; i++) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\nSupplier #%d\n", i + 1);
        printf("  Name:    %s\n", suppliers[i].name);
        printf("  Contact: %s\n", suppliers[i].contact);
        printf("  Service: %s\n", suppliers[i].service);
    }
}

<<<<<<< HEAD
void searchSupplier(void)
{
=======
void searchSupplier(void) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
    char keyword[MAX_NAME];
    int found = 0;

    printf("\n--- Search Supplier ---\n");
    printf("Enter name or keyword to search: ");
    getchar();
    fgets(keyword, MAX_NAME, stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    printf("\n--- Search Results ---\n");
<<<<<<< HEAD
    for (int i = 0; i < supplierCount; i++)
    {
        if (strstr(suppliers[i].name, keyword) != NULL ||
            strstr(suppliers[i].service, keyword) != NULL)
        {
=======
    for (int i = 0; i < supplierCount; i++) {
        if (strstr(suppliers[i].name, keyword) != NULL ||
            strstr(suppliers[i].service, keyword) != NULL) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
            printf("\n Found Supplier #%d\n", i + 1);
            printf("  Name:    %s\n", suppliers[i].name);
            printf("  Contact: %s\n", suppliers[i].contact);
            printf("  Service: %s\n", suppliers[i].service);
            found = 1;
        }
    }

<<<<<<< HEAD
    if (!found)
    {
=======
    if (!found) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\n No supplier matching '%s' found.\n", keyword);
    }
}

<<<<<<< HEAD
void handleSupplierMenu(void)
{
    int choice;
    while (1)
    {
=======
void handleSupplierMenu(void) {
    int choice;
    while (1) {
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        printf("\n\n=== SUPPLIER MANAGEMENT — Nangolo Drothea (223039985) ===\n");
        printf("1. Register New Supplier\n");
        printf("2. Display All Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Back to Main Menu\n");
        printf("Enter your choice: ");

<<<<<<< HEAD
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n')
                ;
=======
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
            printf("Please enter a valid number.\n");
            continue;
        }

<<<<<<< HEAD
        switch (choice)
        {
        case 1:
            addSupplier();
            break;
        case 2:
            displayAllSuppliers();
            break;
        case 3:
            searchSupplier();
            break;
        case 4:
            return;
        default:
            printf("Invalid choice. Try again.\n");
=======
        switch (choice) {
            case 1: addSupplier(); break;
            case 2: displayAllSuppliers(); break;
            case 3: searchSupplier(); break;
            case 4: return;
            default: printf("Invalid choice. Try again.\n");
>>>>>>> 89b179fea9aaabbc5ba642d789f71163b3d039c9
        }
    }
}