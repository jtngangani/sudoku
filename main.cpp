#include <cell.h>
#include <assert.h>
#include <iostream>

using namespace std;

int main()
{
    cell* newCell = new cell();

    newCell->setValue(55);

    cout<<newCell->getValue();

    return 1;
}
