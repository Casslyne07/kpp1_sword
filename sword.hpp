#ifndef Pedang
#define Pedang

#include <string>

class Sword {
private:
    std::string nama_;
    int damage_;
    double x_;
    double y_;

public:
    Sword(const std::string &nama, int damage);

    std::string getNama() const;
    int getDamage() const;
    void setDamage(int damage);
    double getX() const;
    double getY() const;

    void move(double dx, double dy);
    void attack() const;
};

#endif 
