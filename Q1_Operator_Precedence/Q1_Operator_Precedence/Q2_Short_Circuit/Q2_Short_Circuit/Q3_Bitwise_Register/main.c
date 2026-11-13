
#include <stdio.h>

#define LIGHT 0
#define FAN 1
#define AC 2
#define HEATER 3
#define PUMP 4

unsigned char switch_on(unsigned char reg, int device)
{
    return reg | (1u << device);
}

unsigned char switch_off(unsigned char reg, int device)
{
    return reg & ~(1u << device);
}

unsigned char toggle(unsigned char reg, int device)
{
    return reg ^ (1u << device);
}

int is_on(unsigned char reg, int device)
{
    return (reg & (1u << device)) != 0;
}

void display(unsigned char reg)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (reg >> i) & 1u);
    }

    printf("\n");
}

int main()
{
    unsigned char reg = 0;

    printf("Initial Register: ");
    display(reg);

    reg = switch_on(reg, LIGHT);
    reg = switch_on(reg, AC);

    printf("After switching ON LIGHT and AC: ");
    display(reg);

    reg = toggle(reg, FAN);

    printf("After toggling FAN: ");
    display(reg);

    reg = switch_off(reg, LIGHT);

    printf("After switching OFF LIGHT: ");
    display(reg);

    printf("AC Status: %s\n", is_on(reg, AC) ? "ON" : "OFF");
    printf("PUMP Status: %s\n", is_on(reg, PUMP) ? "ON" : "OFF");

    return 0;
}
