#ifndef FLAGSHIP_HPP
#define FLAGSHIP_HPP

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
        int set_hull(int);
        int set_shield(int);
        int set_attack(int);
        int set_speed(int);
        int set_cell_count(int);
        
    private:
        int hull;
        int shield;
        int attack;
        int speed;
        int power_cells;
};

#endif 