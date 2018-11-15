#ifndef SCENE_H_
#define SCENE_H_
#include <eigen3/Eigen/Geometry>
#include <vector>
#include <Camera.h>
#include <Light.h>
#include <Object.h>

class Scene{
public:
    Scene()=default;
    void AddCamera(Camera c);
    void AddLight(Light l);
    //void AddObject(Object o);

private:
    std::vector<Light> lights;
    //std::vector<Object> objects;
    Camera camera;
};

#endif
