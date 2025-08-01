#pragma once

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
    public:
        Weapon(const std::string &type);
        ~Weapon(void);
        const std::string &getType(void) const;
        void setType(const std::string &type);
        
    private:
        std::string _type;
        Weapon(void);
};

#endif