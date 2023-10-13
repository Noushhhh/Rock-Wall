#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>
#include "SpellBook.hpp"

class ASpell;
class SpellBook;

class Warlock {
    private: 
        Warlock();
        Warlock(Warlock const &src);
        Warlock & operator=(Warlock const &src);
        std::string _name;
        std::string _title;
        SpellBook _spellBook;

    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock ();
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        void setName(std::string const &name);
        void introduce () const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spell_name);
        void launchSpell(std::string spell_name, ATarget const &target);
};
