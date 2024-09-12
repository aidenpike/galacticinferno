#include "..\include\flagship.hpp"

flagship::flagship(int hull, int shield, int attack, int speed, int power_cells){
    m_hull = hull;
    m_shield = shield;
    m_attack = attack;
    m_speed = speed;
    m_power_cells = power_cells;
}

int flagship::get_hull(){
    return m_hull;
}

int flagship::get_shield(){
    return m_shield;
}

int flagship::get_attack(){
    return m_attack;
}

int flagship::get_speed(){
    return m_speed;
}

int flagship::get_cell_count(){
    return m_power_cells;
}

void flagship::set_hull(int hull){
    m_hull = hull;
}

void flagship::set_shield(int shield){
    m_shield = shield;
}

void flagship::set_attack(int attack){
    m_attack = attack;
}

void flagship::set_speed(int speed){
    m_speed = speed;
}

void flagship::set_cell_count(int power_cells){
    m_power_cells = power_cells;
}