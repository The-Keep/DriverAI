#include "Mesh.h"

using namespace Eigen;

Mesh::Mesh() {
    this->_vertex_buff = new std::vector<Vector3d>();
    this->_triangles = new std::vector<std::uint16_t>();
    this->_uv = new std::vector<float>();
};

Mesh::~Mesh() {
    std::vector<Vector3d> buffer = *this->_vertex_buff;
    for (int i = 0; i < buffer.size(); i++) {
        delete &buffer[0];
    }

    delete this->_vertex_buff;
    delete this->_triangles;
    delete this->_uv;
};

void Mesh::updateVertices(Vector3d *_buffer, std::uint32_t size) {
    auto vertex_buffer = *this->_vertex_buff;
    for (std::uint32_t i = 0; i < vertex_buffer.size(); i++) {
        delete &vertex_buffer[i];
    }
    vertex_buffer.resize(size);

    for (int i = 0; i < size; i++) {
        vertex_buffer[i] = *(_buffer + i);
    }
}