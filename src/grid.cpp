#include "grid.h"
#include "climits"
#include "assert.h"

grid::grid()
{
    //Allocate 2-D array of cells 
    m_grid = new cell_t*[N];
    for (int i = 0; i < N; i++)
    {
        m_grid[i] = new cell_t[N];
    }

    //Initialize the grid
    for(int i=0; i<N; i++)
        for(int j=0;j<N;j++)
        {
            m_grid[i][j].valid = false;
            m_grid[i][j].value = INT_MAX;
        }
}

void grid::setValue(int p_row, int p_col, int p_val)
{
    assert( p_row < N and p_col < N and p_val < N);
    m_grid[p_row][p_col].valid = true;
    m_grid[p_row][p_col].value = p_val;
}

int grid::getValue(int p_row, int p_col)
{
    assert(p_row < N and p_col < N);
    return m_grid[p_row][p_col].value;
}

