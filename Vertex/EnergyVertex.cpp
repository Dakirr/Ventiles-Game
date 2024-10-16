#include "EnergyVertex.h"

EnergyVertex::EnergyVertex(double x, double y, int energy = 0): Vertex(x, y) {
        this->energy = energy;
        this->point_type = battery_point;
    }
    
void EnergyVertex::change_energy(int diff) {
    this->energy += diff;
}

int EnergyVertex::get_energy() {
    return this->energy;
}