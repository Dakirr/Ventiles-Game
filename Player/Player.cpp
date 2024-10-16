#include "player.h"
int CURRENT_PLAYER_ID = 0;

class Player {
    int id, team_id;
    std::string name;
    
    public:
    Player (std::string name) {
        this->name = name;
        this->id = CURRENT_PLAYER_ID;
        this->team_id = CURRENT_PLAYER_ID;
        CURRENT_PLAYER_ID += 1;
    }

    int get_id() {
        return this->id;
    }

    int get_team() {
        return this->team_id;
    }

    std::string get_name() {
        return this->name;
    }

    void rename(std::string new_name) {
        this->name = new_name;
    }
};