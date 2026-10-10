#include <iostream>
#include "sword.hpp"

int main() {
    Sword s("Elucidator", 50);
    s.attack();

    s.move(3.0, 4.0);
    std::cout << "Posisi: (" << s.getX() << ", " << s.getY() << ")\n";

    s.setDamage(-10);   
    s.attack();
    return 0;
}