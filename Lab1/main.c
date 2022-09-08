#include <locale.h>
#include <stdio.h>
#include "name.h"


int main()
{
    setlocale(LC_ALL, "RUS");
    name();
    puts ("   __                             ___     ___         ");
    puts ("     |    |   |     /|    /|     |   |       |        ");
    puts ("   __|    |___|    / |   / |     |   |      _|        ");
    puts ("  |           |      |     |     |   |       |        ");
    puts ("  |__         |      |     |     |___|    ___|        ");
    getchar();
}


