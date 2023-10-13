#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) 
{ std::cout << _name << ": This looks like another boring day." << std::endl; }

Warlock::~Warlock () 
{ std::cout << _name << ": My job here is done!" << std::endl; }

std::string const &Warlock::getName() const { return _name; }
std::string const &Warlock::getTitle() const { return _title; }
void Warlock::setTitle(std::string const &title) { _title = title; }
void Warlock::setName(std::string const &name) { _name = name; }
void Warlock::introduce () const { std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; }


void Warlock::learnSpell(ASpell *spell) 
{ 
    if(spell)
        if (_spellBook.find(spell->getName()) == _spellBook.end())
                _spellBook[spell->getName()] = spell->clone();
}
void Warlock::forgetSpell(std::string spell_name) 
{
    if (_spellBook.find(spell_name) != _spellBook.end())
        _spellBook.erase(_spellBook.find(spell_name));
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target) 
{
    if (_spellBook.find(spell_name) == _spellBook.end())
        return;
    (_spellBook[spell_name]->launch(target));
}
