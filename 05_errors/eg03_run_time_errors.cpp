// Example of syntax errors

#include "../std_lib_facilities.h"

int area(int length, int width)
{
    if (length <= 0 || width <= 0) error("non-positive area() argument");
    return length*width;
}

int framed_area(int x, int y)
{
    const int frame_width = 2;
    if (x-frame_width <= 0 || y-frame_width <= 0)
        error("non-positive area() argument called by framed_area()");
    return area(x-frame_width, y-frame_width);
}

int main()
{
    int x = -1, y = 0, z = 3;
    int area1 = area(x,y);
    if (area1 <= 0) error ("non-positive area");
    int area2 = framed_area(1, z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;
    cout << "area1: " << area1 << ", area2: " << area2 << ", area3: " << area3 << endl;

    return 0;
}