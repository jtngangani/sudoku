#include <cell.h>
#include <climits>
#include <assert.h>
#include <iostream>

using namespace std;

cell::cell()
{
    m_valid = false;
    m_value = INT_MAX;
}

int cell::getValue()
{
    assert(isValid());
    return m_value;
}

bool cell::isValid()
{
    return m_valid;
}

void cell::setValid(bool p_valid)
{
    m_valid = p_valid;
    if(not m_valid)
        m_value = INT_MAX;
}

void cell:: setValue(int p_value)
{
    m_valid = true;
    m_value = p_value;
}


        
