#include "Eigen/Core"
#include "Eigen/Dense"
#include "tools.h"

#include <fstream>
#include <iostream>
#include <stdio.h>

int main() {
    Eigen::Vector3d pos_a(1, 1, 1);
    Eigen::Vector3d pos_b(2, 2, 2);

    Eigen::Vector3d final_pos = pos_a + pos_b;

    printf("%.2f, %.2f, %.2f", final_pos.x(), final_pos.y(), final_pos.z());

    return 0;
}