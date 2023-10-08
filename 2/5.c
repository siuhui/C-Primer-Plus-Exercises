#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{   
    printf("Brazil, Russia, India, China\n");
    ic();
    br();
    getchar();
    return 0;
}

void br(void)
{
    printf("Brazil, Russia\n");    
}

void ic(void)
{
    printf("India, China\n");
}