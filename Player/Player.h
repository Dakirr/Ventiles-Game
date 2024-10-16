#pragma once
#include <string>

class Player {
    int id, team_id;
    std::string name;
    
    public:
    Player (std::string name);

    int get_id();

    int get_team();

    std::string get_name();

    void rename(std::string new_name);
};