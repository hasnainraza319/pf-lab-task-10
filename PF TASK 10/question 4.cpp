#include <stdio.h>
#include <string.h>

#define MAX_PACKAGES 100
#define MAX_NAME_LEN 50
#define MAX_DEST_LEN 50

struct TravelPackage {
    char packageName[MAX_NAME_LEN];
    char destination[MAX_DEST_LEN];
    int duration;
    float cost;
    int seatsAvailable;
};

int main() {
    struct TravelPackage packages[MAX_PACKAGES];
    int count = 0, choice;
    int seatsToBook, i;

    while (1) {
        printf("\n1. Add Travel Package\n2. Display Available Packages\n3. Book a Package\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < MAX_PACKAGES) {
            printf("Enter the  package name: ");
            scanf(" %[^\n]", packages[count].packageName); 
            printf("Enter destination: ");
            scanf(" %[^\n]", packages[count].destination); 
            printf("Enter  the duration (days): ");
            scanf("%d", &packages[count].duration);
            printf("Enter cost: ");
            scanf("%f", &packages[count].cost);
            printf("Enter the  available seats: ");
            scanf("%d", &packages[count].seatsAvailable);
            count++;
            printf("Package added successfully!\n");
        }
        else if (choice == 2) {
            if(count == 0) {
                printf("No packages available.\n");
            } else {
                printf("\nAvailable Packages:\n");
                for (i = 0; i < count; i++) {
                    printf("%d. %s to %s, %d days, Cost: %.2f, Seats Available: %d\n", 
                            i+1, packages[i].packageName, packages[i].destination, packages[i].duration, packages[i].cost, packages[i].seatsAvailable);
                }
            }
        }
        else if (choice == 3) {
            if(count == 0) {
                printf("No packages available to book.\n");
            } else {
                printf("Enter the package number to book: ");
                scanf("%d", &i);
                if (i > 0 && i <= count) {
                    printf("Enter number of seats to book: ");
                    scanf("%d", &seatsToBook);
                    if (seatsToBook <= packages[i-1].seatsAvailable) {
                        packages[i-1].seatsAvailable -= seatsToBook;
                        printf("Successfully booked %d seats on package: %s\n", seatsToBook, packages[i-1].packageName);
                    } else {
                        printf("Not enough seats available.\n");
                    }
                } else {
                    printf("Invalid package number.\n");
                }
            }
        }
        else if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        }
        else {
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

