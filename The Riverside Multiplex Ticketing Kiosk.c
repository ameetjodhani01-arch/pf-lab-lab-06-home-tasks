#include <stdio.h>

int main() {
    int age;
    while (1) {
        printf("Enter age (0 to exit): ");
        scanf("%d", &age);
        if (age == 0) break;

        int category;
        printf("Enter show category (1: Regular, 2: 3D, 3: Premiere): ");
        scanf("%d", &category);

        int day;
        printf("Enter day of the month (1-31): ");
        scanf("%d", &day);

        double basePrice = 0;
        switch (category) {
            case 1: basePrice = 500; break;
            case 2: basePrice = 800; break;
            case 3: basePrice = 1200; break;
            default: printf("Invalid category!\n"); continue;
        }

        double price = basePrice;
        if (age < 13) {
            price -= basePrice * 0.30;
        } else if (age >= 60) {
            price -= basePrice * 0.20;
        }

        if (day % 5 == 0) {
            price -= 50;
        }

        if (price < 100) {
            price = 100;
        }

        printf("Final Total: Rs. %.2f\n\n", price);
    }
    return 0;
}