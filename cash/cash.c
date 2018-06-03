#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change;
    // Prompt a user for change owed
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Convert change to cents
    change = round(change * 100);

    int result = 0;

    // Giving quarters
    while (change >= 25)
    {
        result++;
        change -= 25;
    }

    // Giving dimes
    while (change >= 10)
    {
        result++;
        change -= 10;
    }

    // Giving nickles
    while (change >= 5)
    {
        result++;
        change -= 5;
    }

    // Giving pennies
    while (change >= 1)
    {
        result++;
        change -= 1;
    }

    // Printing the total number of coins given
    printf("%i\n", result);


}