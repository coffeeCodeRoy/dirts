#include <cstdio>

int main()
{
    char *day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int today = 1;
    int elapse = 3;
    int futureDay = (today + elapse) % 7;

    printf("Today is %s and the future day is %s.", day[today], day[futureDay]);
}