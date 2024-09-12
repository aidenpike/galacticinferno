#ifndef FLAGSHIP_HPP
#define FLAGSHIP_HPP

#include <iostream>

class flagship {
    public:
        flagship(int, int, int, int, int); //Hull, Shield, Attack, Speed, Power Cells

        //Getters
        int get_hull();
        int get_shield();
        int get_attack();
        int get_speed();
        int get_cell_count();

        //Setters
        void set_hull(int);
        void set_shield(int);
        void set_attack(int);
        void set_speed(int);
        void set_cell_count(int);

    private:
        int m_hull;
        int m_shield;
        int m_attack;
        int m_speed;
        int m_power_cells;
};

#endif 