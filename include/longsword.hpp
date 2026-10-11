#ifndef Pedang_Panjang
#define Pedang_Panjang

#include "sword.hpp"

class Longsword : public Sword {
    private:
        double weight_;

public:
    Longsword(const std::string &nama, int damage, double weight);

    double getWeight() const;
    virtual void attack() const override;

};
#endif
