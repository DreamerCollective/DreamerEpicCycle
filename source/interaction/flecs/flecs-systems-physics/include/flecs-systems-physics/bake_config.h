/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_SYSTEMS_PHYSICS_BAKE_CONFIG_H
#define FLECS_SYSTEMS_PHYSICS_BAKE_CONFIG_H

/* Headers of public dependencies */
#include "../../flecs/flecs.h"
#include <../../cglm/include/cglm/cglm.h>
#include <../../../flecs-components-transform/include/flecs_components_transform.h>
#include <../../../flecs-components-geometry/include/flecs_components_geometry.h>
#include <../../../flecs-components-physics/include/flecs_components_physics.h>

/* Convenience macro for exporting symbols */
#ifndef flecs_systems_physics_STATIC
#if defined(flecs_systems_physics_EXPORTS) && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_SYSTEMS_PHYSICS_API __declspec(dllexport)
#elif defined(flecs_systems_physics_EXPORTS)
  #define FLECS_SYSTEMS_PHYSICS_API __attribute__((__visibility__("default")))
#elif defined(_MSC_VER)
  #define FLECS_SYSTEMS_PHYSICS_API __declspec(dllimport)
#else
  #define FLECS_SYSTEMS_PHYSICS_API
#endif
#else
  #define FLECS_SYSTEMS_PHYSICS_API
#endif

#endif

