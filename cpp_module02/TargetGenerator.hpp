#pragma once
#include <iostream>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator {
    private: 
        TargetGenerator(TargetGenerator const &src);
        TargetGenerator & operator=(TargetGenerator const &src);
        std::map <std::string, ATarget*> _TargetGenerator;

    public:
        TargetGenerator();
        ~TargetGenerator ();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target_name);
        ATarget* createTarget(std::string const &target_name);
};
