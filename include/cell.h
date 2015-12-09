#ifndef CELL_H
#define CELL_H

class cell
{
    private:
        bool m_valid;
        int m_value;

    public:
        cell();                     //Constructor: Sets valid  to false and  value to INT_MAX
        int getValue();             //Returns value if cell is valid else assert
        bool isValid();             //Returns the status
        void setValid(bool p_valid);//Sets valid bit. If set to invalid, changes value to INT_MAX
        void setValue(int p_value); //Sets value to p_value, Also sets the valid flag if unset.
};

#endif

