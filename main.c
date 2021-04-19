#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct birth{int day,month,year;};
struct student{
 int ID;
 char name[100];
 struct birth dob;
 int score_lest_year;
 };


int main()
{
    printf("Hello welcome we are in main text ");

    return 0;
}
