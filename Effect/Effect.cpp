#include "Effect.h"


Effect::Effect (TargetTag TaT, PlayerTag PT, TypeTag TyT, std::function<void(Vertex&)> eff) {
    this->target = TaT;
    this->target_player = PT;
    this->target_type = TyT;
}

void Effect::apply(Vertex& T) {
    this->eff(T);
}

TargetTag Effect::get_target() {
    return this->target;
}

PlayerTag Effect::get_target_player() {
    return this->target_player;
}

TypeTag Effect::get_target_type() {
    return this->target_type;
}
