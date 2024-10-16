#pragma once
#include <vector>

typedef enum {
    battery_point, 
    card_point,
} TypeTag;

class Vertex {
    protected:
        double x, y;
        TypeTag point_type; 
        std::vector<Vertex&> links; 
        

    public:
    Vertex (double x, double y);
    
    TypeTag get_target_type();
    std::vector<Vertex&> get_links();
    
    
    void link(Vertex& P);

};