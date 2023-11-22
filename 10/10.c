#include <stdio.h>
void add_arr(int n, int * target, int * source1,int * source2);
void show(int n, int * arr);
int main(void)
{
    int source1[4] = {2, 4, 5, 8};
    int source2[4] = {1, 0, 4, 6};
    int target[4];
    add_arr(4, target, source1, source2);
    show(4, target);
    getchar();
    return 0;
}
void add_arr(int n, int * target, int * source1,int * source2)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}
void show(int n, int * arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
