//
// Created by redone on 6/21/23.
//

#ifndef POOL_ICHARACTER_HPP
#define POOL_ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter {
public:
    virtual ~ICharacter() {}

    virtual std::string const &getName() const = 0;

    virtual void equip(AMateria *m) = 0;

    virtual void unequip(int idx) = 0;

    virtual void use(int idx, ICharacter &target) = 0;
};

#endif //POOL_ICHARACTER_HPP
