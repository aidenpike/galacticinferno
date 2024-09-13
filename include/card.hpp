#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include "includes.hpp"

class card {
    public:
        card(std::string, int, int, int, int); //Name, Shield, Attack, Speed, Power Usage
    private:
        std::string m_name;
        int m_shield;
        int m_attack;
        int m_speed;
        int m_power_usage;
};

#endif