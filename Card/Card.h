#pragma once
#include "Effect.h"
#include <vector>
#include <string>

class Card {
    protected:
    std::string name;
    std::vector<Effect&> effects; 
    
    public:
    Card (std::string name, std::vector<Effect&> effects) {
        this->name = name;
        this->effects = effects;
    }

    std::vector<Effect&>& get_effects() {
        return effects;
    }
};