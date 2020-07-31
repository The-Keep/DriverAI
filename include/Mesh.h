#include <float.h>
#include <stdint.h>
#include <stdlib.h>

#include <iostream>
#include <vector>

#include "Eigen/Core"
#include "Eigen/Dense"

class Mesh
{
  private:
    /* data */
    std::vector<Eigen::Vector3d>* _vertex_buff;
    std::vector<std::uint16_t>* _triangles;
    std::vector<float>* _uv;

  public:
    Mesh();
    ~Mesh();
    void updateVertices(Eigen::Vector3d* _buffer, std::uint32_t size);
};