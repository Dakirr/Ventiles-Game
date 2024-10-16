#include "Vertex.h"


Vertex::Vertex (double x, double y) {
    this->x = x;
    this->y = y;
    this->links = std::vector<Vertex&>();
}

TypeTag Vertex::get_target_type() {
        return this->point_type;
} 

std::vector<Vertex&> Vertex::get_links() {
        return this->links;
    } 

void Vertex::link(Vertex& P) {
    this->links.push_back(P);
};