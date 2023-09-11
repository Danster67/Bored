#include <stdio.h>

int user_start();
int user_end(int start_pop); 
int year_calc(int start_pop, int end_pop);

int main(void)
{
    int start_pop;
    int end_pop;
    int years;

    start_pop = user_start();
    end_pop = user_end(start_pop);
    years = year_calc(start_pop, end_pop);

    printf("Years: %d", years);
}

int user_start() 
{
    int input;

    do {
        printf("Start Size: ");
        scanf("%d", &input);
    } while (input < 9);
    return input;
}

int user_end(int start_pop)
{
    int input;

    do {
        printf("End Size: ");
        scanf("%d", &input);
    } while (input < start_pop);

    return input;
}

int year_calc(int start_pop, int end_pop)
{
    int year;
    int born;
    int dead;
    year = 0;

    do {
        born = start_pop/3;
        dead = start_pop/4;
        start_pop = start_pop + born - dead;
        year = year + 1;
    } while (start_pop < end_pop);

    return year;
}