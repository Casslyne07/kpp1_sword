#ifndef Pedang_Tipis
#define Pedang_Tipis

#include "sword.hpp"

class Rapier : public Sword {
    private:
        int speed_;

public:
    Rapier(const std::string &nama, int damage, int speed);

    int getSpeed() const;
    void puncture() const;

};
#endif
