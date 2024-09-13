#include "..\include\card.hpp"

card::card(std::string name, int shield, int attack, int speed, int power_usage){
    m_name = name;
    m_shield = shield;
    m_attack = attack;
    m_speed = speed;
    m_power_usage = power_usage;
}

void card::display_card() {
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Shield: " << m_shield << "\n";
    std::cout << "Attack: " << m_attack << "\n";
    std::cout << "Speed: " << m_speed << "\n";
    std::cout << "Power Usage: " << m_power_usage << "\n";
}

std::vector<card> load_deck(std::string& file_name) {
    std::ifstream file(file_name);
    std::vector<card> deck;
    std::string line;

    if (!file){
        std::cout << "Error: Could not open file " << file_name << "!\n";
        return deck;
    }

    while (std::getline(file, line)) {
        std::istringstream parse(line);
        std::string name;
        int shield, attack, speed, power_usage;

        //A little cursed sorry
        if (parse >> name >> shield >> attack >> speed >> power_usage){
            deck.emplace_back(name, shield, attack, speed, power_usage);
        }
        else {
            std::cout << "Error: Invalid line format in deck file!\n";
        }
    }

    return deck;
}