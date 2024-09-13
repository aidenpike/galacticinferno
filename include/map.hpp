#ifndef MAP_HPP
#define MAP_HPP

#include "includes.hpp"

class map {
    public:
        map();

        void display_map();
        void set_map_value(int, int, char); 
    private:
        std::array<std::array<char,8>, 5> m_map; //Rows then columns
};

#endif