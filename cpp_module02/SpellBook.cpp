#include "SpellBook.hpp"

SpellBook::SpellBook()
{  }

SpellBook::~SpellBook () 
{ }

void SpellBook::learnSpell(ASpell *spell) 
{ 
    if(spell)
        if (_spellBook.find(spell->getName()) == _spellBook.end())
                _spellBook[spell->getName()] = spell->clone();
}
void SpellBook::forgetSpell(std::string const &spell_name) 
{
    if (_spellBook.find(spell_name) != _spellBook.end())
        _spellBook.erase(_spellBook.find(spell_name));
}

ASpell* SpellBook::createSpell(std::string const &spell_name)
{
    ASpell *tmp = NULL;
    if (_spellBook.find(spell_name) != _spellBook.end())
        tmp = _spellBook[spell_name];
    return tmp;
}

