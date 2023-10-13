#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    protected: 
        std::string _name;
        std::string _effects;

    public:
        ASpell();
        ASpell(ASpell const &src);
        ASpell & operator=(ASpell const &src);
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell ();
        std::string const &getName() const;
        std::string const &geteffects() const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &target);
};