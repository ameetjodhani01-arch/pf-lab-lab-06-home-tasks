#include <stdio.h>

int main() {
    int val;
    while (1) {
        printf("Enter combined appliance value (-1 to exit): ");
        scanf("%d", &val);
        if (val == -1) break;

        int option;
        printf("Enter option (1: Water heater ON, 2: AC OFF, 3: Flip lights, 4: Check camera): ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                val |= 2;
                break;
            case 2:
                val &= ~4;
                break;
            case 3:
                val ^= 1;
                break;
            case 4:
                if (val & 8) {
                    printf("Security Camera is Active.\n");
                } else {
                    printf("Security Camera is Inactive.\n");
                }
                break;
            default:
                printf("Invalid option!\n");
                continue;
        }

        printf("New combined value: %d\n", val);
        if ((val & 2) && (val & 4)) {
            printf("OVERLOAD RISK: Air Conditioner and Water Heater are both switched on!\n");
        }
        printf("\n");
    }
    return 0;
}