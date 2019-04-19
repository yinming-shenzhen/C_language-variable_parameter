#include "base.h"
#include <stdarg.h>

int create_student(char* name, int age, ...);

int main(void)
{
    create_student("Lincoln", 20, 1);    
    create_student("Tony Stark", 10);

    exit(0);
}

int create_student(char* name, int age, ...)
{
    printf(RED"[%s]"NONE BLUE"name: %-20s,"NONE YELLOW"age: %-4d\n"NONE, __FUNCTION__, name, age);

    if (age >= 20)
    {
        int male;
        va_list argptr;
        va_start(argptr, age);
        male = va_arg( argptr, int);
        printf(RED"[%s]"NONE            \
               BLUE"name: %-20s,"NONE   \
               YELLOW"age: %-4d"NONE    \
               GREEN"male: %-4d\n"NONE, \
               __FUNCTION__, name, age, male);
        va_end(argptr);
    }
    
    return 0;
}