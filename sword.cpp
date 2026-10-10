#include "sword.hpp"

#include <iostream>

Sword::Sword(const std::string &nama, int damage)
    : nama_(nama), x_(0.0), y_(0.0) {
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

double Sword::getX() const { return x_; }
double Sword::getY() const { return y_; }

void Sword::move(double dx, double dy) {
    x_ += dx;
    y_ += dy;
}

void Sword::attack() const {
    std::cout << nama_ << " menyerang dengan damage " << damage_ << "\n";
}