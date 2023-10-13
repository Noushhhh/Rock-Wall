#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(ASpell const &src) 
{
    *this = src;
}

ASpell &ASpell::operator=(ASpell const &src) 
{
    _name = src._name;
    _effects = src._effects;
    return *this;
}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) {  }

ASpell::~ASpell () {}

std::string const &ASpell::getName() const { return _name; }
std::string const &ASpell::geteffects() const { return _effects; }

void ASpell::launch(ATarget const &target) { target.getHitBySpell(*this); }

