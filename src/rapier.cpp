#include "rapier.hpp"

#include <iostream>

Rapier::Rapier(const std::string &nama, int damage, int speed)
    : Sword(nama, damage), speed_(speed) {}

int Rapier::getSpeed() const { return speed_; }

void Rapier::puncture() const {
    std::cout << getNama() << " melakukan tusukan dengan damage " << getDamage()  
    + speed_ * 2 << "\n";
}
