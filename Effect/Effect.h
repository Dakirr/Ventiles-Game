#include "Vertex.h"
#include <functional>

typedef enum  {
    all,
    adjacent,
    random,
    random_adjacent,
} TargetTag;

typedef enum {
    neutral,
    own, 
    friendly,
    enemy,
    all,
} PlayerTag;

class Effect {
    protected:
    TargetTag target;
    PlayerTag target_player;
    TypeTag target_type;
    std::function<void(Vertex&)> eff;
    
    public:
    Effect (TargetTag TaT, PlayerTag PT, TypeTag TyT, std::function<void(Vertex&)> eff);
    
    void apply(Vertex& T);

    TargetTag get_target();

    PlayerTag get_target_player();

    TypeTag get_target_type();
};