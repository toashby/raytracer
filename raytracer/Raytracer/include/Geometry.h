#ifndef GEOMETRY_H_
#define GEOMETRY_H_
#include <eigen3/Eigen/Geometry>
//#include "Triangle.h"
//#include <vector>
#include "Ray.h"
//#include "Material.h"

class Material;

struct hit_record
{
    float t;
    Eigen::Vector3f p;
    Eigen::Vector3f normal;
    Material *mat_ptr;
};

class Geometry
{
public:
    virtual bool hit(const Ray& r, float t_min, float t_max, hit_record& rec)const = 0;
};



#endif
