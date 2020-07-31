#include "Eigen/Dense"
#include "Eigen/Core"
#include "Mesh.h"

class SceneObj
{
private:
    Eigen::Vector3d *_position;
    Eigen::Vector3d *_rotation;
    Eigen::Vector3d *_scale;
    Mesh *_mesh;

public:
    SceneObj(/* args */);
    SceneObj(Mesh *mesh);
    ~SceneObj();
};

SceneObj::SceneObj(/* args */)
{
    this->_position = new Eigen::Vector3d(0, 0, 0);
    this->_rotation = new Eigen::Vector3d(0, 0, 0);
    this->_scale = new Eigen::Vector3d(1, 1, 1);
}

SceneObj::SceneObj(Mesh *mesh)
{
    this->_position = new Eigen::Vector3d(0, 0, 0);
    this->_rotation = new Eigen::Vector3d(0, 0, 0);
    this->_scale = new Eigen::Vector3d(1, 1, 1);

    this->_mesh = mesh;
}

SceneObj::~SceneObj()
{
}
