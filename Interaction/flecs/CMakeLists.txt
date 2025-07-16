cmake_minimum_required(VERSION 3.0.0)

add_library(flecslib STATIC
	flecs/flecs.h
	flecs/flecs.c
	
	flecs-game/src/camera_controller.c
	flecs-game/src/light_controller.c
	flecs-game/src/main.c
	flecs-game/src/world_cells.c
	flecs-game/include/flecs_game.h
	flecs-game/include/flecs-game/bake_config.h

	flecs-systems-transform/src/main.c
	flecs-systems-transform/include/flecs_systems_transform.h
	flecs-systems-transform/include/flecs-systems-transform/bake_config.h

	flecs-systems-physics/src/main.c
	flecs-systems-physics/src/octree.c
	flecs-systems-physics/src/spatial_query.c
	flecs-systems-physics/include/flecs_systems_physics.h
	flecs-systems-physics/include/flecs-systems-physics/bake_config.h
	flecs-systems-physics/include/flecs-systems-physics/octree.h
	flecs-systems-physics/include/flecs-systems-physics/spatial_query.h

	flecs-components-transform/src/transform.c
	flecs-components-transform/include/flecs_components_transform.h
	flecs-components-transform/include/flecs-components-transform/bake_config.h

	flecs-components-physics/src/physics.c
	flecs-components-physics/include/flecs_components_physics.h
	flecs-components-physics/include/flecs-components-physics/bake_config.h

	flecs-components-cglm/src/main.c
	flecs-components-cglm/include/flecs_components_cglm.h
	flecs-components-cglm/include/flecs-components-cglm/bake_config.h

	flecs-components-geometry/src/geometry.c
	flecs-components-geometry/include/flecs_components_geometry.h
	flecs-components-geometry/include/flecs-components-geometry/bake_config.h

	flecs-components-graphics/src/graphics.c
	flecs-components-graphics/include/flecs_components_graphics.h
	flecs-components-graphics/include/flecs-components-graphics/bake_config.h

	flecs-components-input/src/main.c
	flecs-components-input/include/flecs_components_input.h
	flecs-components-input/include/flecs-components-input/bake_config.h

	flecs-components-gui/src/main.c
	flecs-components-gui/include/flecs_components_gui.h
	flecs-components-gui/include/flecs-components-gui/bake_config.h

)