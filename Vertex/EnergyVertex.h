#pragma once
#include "Vertex.h"

class EnergyVertex: public Vertex {
    private:
        int energy;

    public:
    EnergyVertex (double x, double y, int energy = 0);
    
    int get_energy();
    void change_energy(int diff);
};