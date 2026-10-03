#include <stdio.h>

int main() {
    int numContainers;
    printf("Enter number of containers: ");
    scanf("%d", &numContainers);

    for (int i = 1; i <= numContainers; ++i) {
        double weight;
        int type;
        printf("\nContainer %d weight (kg) and cargo type (1: General, 2: Hazardous, 3: Refrigerated): ", i);
        scanf("%lf %d", &weight, &type);

        int canLoad = 0;
        switch (type) {
            case 1:
                if (weight <= 20000) canLoad = 1;
                break;
            case 2:
                if (weight <= 15000 && (i % 2 != 0)) canLoad = 1;
                break;
            case 3:
                if (weight <= 18000) canLoad = 1;
                break;
            default:
                canLoad = 0;
                break;
        }

        int trackingCode = (int)(weight) % 97;
        trackingCode = trackingCode % 100;

        printf("Loading Status: %s\n", canLoad ? "Allowed" : "Rejected");
        printf("Tracking Code: %d\n", trackingCode);
    }
    return 0;
}