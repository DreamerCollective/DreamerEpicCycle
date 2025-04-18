#ifndef FLECS_COMPONENTS_PHYSICS_H
#define FLECS_COMPONENTS_PHYSICS_H

#include <../../../flecs-components-physics/include/flecs-components-physics/bake_config.h>

// Reflection system boilerplate
#undef ECS_META_IMPL
#ifndef FLECS_COMPONENTS_PHYSICS_IMPL
#define ECS_META_IMPL EXTERN // Ensure meta symbols are only defined once
#endif

FLECS_COMPONENTS_PHYSICS_API
extern ECS_DECLARE(EcsCollider);

FLECS_COMPONENTS_PHYSICS_API
extern ECS_DECLARE(EcsRigidBody);

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsVelocity2, {
    float x;
    float y;
});

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsVelocity3, {
    float x;
    float y;
    float z;
});

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsAngularSpeed, {
    float value;
});

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsAngularVelocity, {
    float x;
    float y;
    float z;
});

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsBounciness, {
    float value;
});

FLECS_COMPONENTS_PHYSICS_API
ECS_STRUCT(EcsFriction, {
    float value;
});

#ifdef __cplusplus
extern "C" {
#endif

FLECS_COMPONENTS_PHYSICS_API
void FlecsComponentsPhysicsImport(
    ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#ifndef FLECS_NO_CPP

namespace flecs {
namespace components {

class physics {
public:
    using Velocity2 = EcsVelocity2;
    using Velocity3 = EcsVelocity3;
    using AngularSpeed = EcsAngularSpeed;
    using AngularVelocity = EcsAngularVelocity;
    using Bounciness = EcsBounciness;
    using Friction = EcsFriction;

    physics(flecs::world& ecs) {
        // Load module contents
        FlecsComponentsPhysicsImport(ecs);

        // Bind C++ types with module contents
        ecs.module<flecs::components::physics>();
        ecs.component<Velocity2>();
        ecs.component<Velocity3>();
        ecs.component<AngularSpeed>();
        ecs.component<AngularVelocity>();
        ecs.component<Bounciness>();
        ecs.component<Friction>();
    }
};

}
}

#endif
#endif

#endif
