#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook {
    private: 
        SpellBook(SpellBook const &src);
        SpellBook & operator=(SpellBook const &src);
        std::map <std::string, ASpell*> _spellBook;

    public:
        SpellBook();
        ~SpellBook ();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spell_name);
        ASpell* createSpell(std::string const &spell_name);
};
