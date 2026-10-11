#ifndef Pedang
#define Pedang

#include <string>

class Sword {
private:
    std::string nama_;
    int damage_;
    

public:
    Sword(const std::string &nama, int damage);
    virtual ~Sword() = default;

    std::string getNama() const;
    int getDamage() const;
    void setDamage(int damage);
    

    virtual void attack() const;
    
};

#endif 
