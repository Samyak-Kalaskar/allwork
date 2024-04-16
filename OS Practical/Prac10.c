#include <stdio.h>

int main() {
    int n, i, seek_time = 0, total_seek_time = 0;
    int queue[20];

    printf("Enter the number of requests: ");
    scanf("%d", &n);

    printf("Enter the request queue: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &queue[i]);
    }

    int head;
    printf("Enter the initial position of the disk head: ");
    scanf("%d", &head);

    // Calculate seek time
    for (i = 0; i < n; i++) {
        seek_time = abs(queue[i] - head);
        total_seek_time += seek_time;
        head = queue[i];
        printf("Seek time for request %d: %d\n", queue[i], seek_time);
    }

    printf("Total seek time: %d\n", total_seek_time);
    printf("Average seek time: %.2f\n", (float)total_seek_time / n);

    return 0;
}
