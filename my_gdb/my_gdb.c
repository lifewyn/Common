#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    printf("Hello, World in parent process!\n");

    int my_value = 5;

    my_value = my_value + 9;

    printf("the my_value is %d\n", my_value);

    printf("see you!\n");

    return 0;
}