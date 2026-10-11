#include <iostream>
#include <vector>
#include <memory>


#include "sword.hpp"
#include "longsword.hpp"
#include "rapier.hpp" 

int main() {
    std::vector<std::unique_ptr<Sword>> pedang;
    pedang.push_back(std::make_unique<Sword>("Elucidator", 50));
    pedang.push_back(std::make_unique<Longsword>("Excalibur", 70, 5.0));
    pedang.push_back(std::make_unique<Rapier>("Lambent Light", 40, 10));

    for (const auto& p :pedang){
        p->attack();
    }
    
    return 0;

}