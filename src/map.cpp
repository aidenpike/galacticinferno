#include "..\include\map.hpp"

map::map(){
    for (int rows = 0; rows < m_map.size(); rows++){
        for (int columns = 0; columns < m_map[rows].size(); columns++){
            m_map[rows][columns] = '+';
        }
    }
}

void map::display_map(){
    for (int rows = 0; rows < m_map.size(); rows++){
        for (int columns = 0; columns < m_map[rows].size(); columns++){
            std::cout << m_map[rows][columns];
        }

        std::cout << "\n";
    }
}

void map::set_map_value(int rows, int columns, char token_location){
    m_map[rows][columns] = token_location;
}