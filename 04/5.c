#include <stdio.h>

int main(void)
{
    float speed, size;
    printf("Enter the download speed in Mbs and the size of file in MB"
            "(split by spaces):");
    scanf("%f %f", &speed, &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("downloads in %.2f seconds.", size*8.0/speed);
    getchar();
    getchar();
    return 0;
}