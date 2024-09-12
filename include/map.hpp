#ifndef MAP_HPP
#define MAP_HPP

class map {
    public:
        map();

        void display_map();
        void set_map_value(int, int); 
    private:
        int m_map[10][12];
};

#endif