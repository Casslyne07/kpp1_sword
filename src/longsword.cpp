#include "longsword.hpp"

#include <iostream>

Longsword::Longsword(const std::string &nama, int damage, double weight)
    : Sword(nama, damage), weight_(weight) {}

double Longsword::getWeight() const { return weight_; }


void Longsword::attack() const {
    std::cout << getNama() << " melakukan slash dengan damage " << getDamage()  
    + weight_ * 3 << "\n";

}
