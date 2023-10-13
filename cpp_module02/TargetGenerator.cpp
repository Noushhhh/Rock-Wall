#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{  }

TargetGenerator::~TargetGenerator () 
{ }

void TargetGenerator::learnTargetType(ATarget *target) 
{ 
    if(target)
        if (_TargetGenerator.find(target->getType()) == _TargetGenerator.end())
                _TargetGenerator[target->getType()] = target->clone();
}
void TargetGenerator::forgetTargetType(std::string const &target_name) 
{
    if (_TargetGenerator.find(target_name) != _TargetGenerator.end())
        _TargetGenerator.erase(_TargetGenerator.find(target_name));
}

ATarget* TargetGenerator::createTarget(std::string const &target_name)
{
    ATarget *tmp = NULL;
    if (_TargetGenerator.find(target_name) != _TargetGenerator.end())
        tmp = _TargetGenerator[target_name];
    return tmp;
}

