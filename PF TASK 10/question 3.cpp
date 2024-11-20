#include <stdio.h>
#include <string.h>

#define MAX_CARS 100
#define MAX_LEN 50

struct Car {
    char make[MAX_LEN], model[MAX_LEN];
    int year;
    float price, mileage;
};

int main() {
    struct Car cars[MAX_CARS];
    int count = 0, choice;
    char searchTerm[MAX_LEN];
    while (1) {
        printf("1. Add Car\n2. Display Cars\n3. Search Car\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1 && count < MAX_CARS) {
            printf("Make: "); scanf("%s", cars[count].make);
            printf("Model: "); scanf("%s", cars[count].model);
            printf("Year: "); scanf("%d", &cars[count].year);
            printf("Price: "); scanf("%f", &cars[count].price);
            printf("Mileage: "); scanf("%f", &cars[count].mileage);
            count++;
        }
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("%s %s, %d, %.2f, %.2f\n", cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
            }
        }
        else if (choice == 3) {
            printf("Search: "); scanf("%s", searchTerm);
            for (int i = 0; i < count; i++) {
                if (strstr(cars[i].make, searchTerm) || strstr(cars[i].model, searchTerm)) {
                    printf("%s %s, %d, %.2f, %.2f\n", cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
                }
            }
        }
        else if (choice == 4) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}


