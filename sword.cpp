#include "sword.hpp"

#include <iostream>

Sword::Sword(const std::string &nama, int damage)
    : nama_(nama){
    setDamage(damage);
}

std::string Sword::getNama() const { return nama_; }
int Sword::getDamage() const { return damage_; }

void Sword::setDamage(int damage) {
    if (damage < 0) {
        damage_ = 0;
    } else {
        damage_ = damage;
    }
}

void Sword::attack() const {
    std::cout << nama_ << " menyerang dengan damage " << damage_ << "\n";
}