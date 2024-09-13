#include "..\include\card.hpp"

card::card(std::string name, int shield, int attack, int speed, int power_usage){
    m_name = name;
    m_shield = shield;
    m_attack = attack;
    m_speed = speed;
    m_power_usage = power_usage;
}

void card::display_card() {
    
}