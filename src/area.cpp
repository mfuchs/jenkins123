#include "area.h"

int area(int a, int b)
{
    if (a < 0 || b < 0)
        return 0;
    else
        return a * b;
}
