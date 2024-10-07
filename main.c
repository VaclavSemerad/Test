#include <stdio.h>
#define string_max_length 100

int pole[] = {1,2,3,4,5};
int array_length = sizeof(pole) / sizeof(pole[0]);
int maximal_array_value = 0;
double array_value = 0;

void compare_strings() {
    char string1[string_max_length];
    char string2[string_max_length];
    int comparison_state = 1;
    printf("Write a string:");
    scanf("%s", string1);
    printf("Write another string:");
    scanf("%s", string2);

    for (int i = 0; ; i++) {
        if (string1[i] == 0 && string2[i] == 0)
        {
            break;
        }
        if (string1[i] == string2[i])
        {
            printf("This character is equal.\n");
        }
        if (string1[i] != string2[i])
        {
            printf("This character is not equal.\n");
            comparison_state = 0;
            break;
        }
    }
    if (comparison_state == 1)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings aren't equal.\n");
    }
    return;
}

int main(void)
{
    printf("Hello World!\n");

    for (int i = array_length ; i > 0; i--)
    {
        if (pole[i-1] > maximal_array_value)
        {
            maximal_array_value = pole[i-1];
        }
        
        
        printf("%i\n", pole[i-1]);
        array_value += pole[i-1];
        
    }

    double array_average = array_value / array_length;
    printf("The average value of the array is: %f\n", array_average);
    printf("The maximal value of the array is: %i\n\n", maximal_array_value);

    compare_strings();

    return 0;
}