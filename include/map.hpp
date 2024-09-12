#ifndef MAP_HPP
#define MAP_HPP

#include "includes.hpp"

class map {
    public:
        map();

        void display_map();
        void set_map_value(int, int); 
    private:
        std::array<std::array<char,10>, 12> m_map;
};

#endif