#include <stdio.h>
#include <string.h>

int main() {
    int num;
    while (1) {
        printf("Enter stored access number (9999 to exit): ");
        scanf("%d", &num);
        if (num == 9999) break;

        int hour;
        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        const char* mode = (hour >= 22 || hour < 6) ? "LATE NIGHT MODE" : "STANDARD MODE";
        printf("%s\n", mode);

        int allowed = 0;
        if (strcmp(mode, "LATE NIGHT MODE") == 0) {
            allowed = (num & 8) != 0;
        } else {
            allowed = ((num & 1) != 0) || ((num & 2) != 0) || ((num & 4) != 0);
        }

        printf("Access: %s\n", allowed ? "Granted" : "Denied");

        if (num & 4) {
            printf("Info: Personal Trainer Access present (expect on training floor).\n");
        }
        printf("\n");
    }
    return 0;
}