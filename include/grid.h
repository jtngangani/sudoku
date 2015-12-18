#ifndef GRID_H
#define GRID_H

const int N = 9;

typedef struct
{
    bool valid;
    int value;
} cell_t;

class grid
{
    private:
        //Two-dimensional grid structure
        cell_t** m_grid;

    public:
        grid();
        ~grid();
        int getValue(int p_row, int p_col);
        void setValue(int p_row, int p_col, int p_val);
};

#endif
        
