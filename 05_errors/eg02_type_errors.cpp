// Example of syntax errors

#include "../std_lib_facilities.h"

int area(int length, int width)
{
    return length*width;
}

int main()
{
    int x0 = arena(7);
    int x1 = area(7)
    int x2 = area("seven", 2);
    return 0;
}