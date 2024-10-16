#include "Card.h"

Card::Card (std::string name, std::vector<Effect&> effects) {
        this->name = name;
        this->effects = effects;
}

std::vector<Effect&>& Card::get_effects() {
        return effects;
}
