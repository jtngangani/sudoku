#include <grid.h>
#include <assert.h>
#include <iostream>

using namespace std;

int main()
{
    grid* Grid = new grid();

    Grid->setValue(1,2,5);
    cout<<Grid->getValue(1,2);
    
    Grid->printGrid();
    return 1;
}
