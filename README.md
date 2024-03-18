# DreamerEpicCycle
A game were you participate in and shape the events in a science fiction fantasy galaxy

## Instructions and Navigations
All of the code is organized into folders. For example, chapter2.

The code has been tested with the following software:
- Visual Studio 2019 Community Edition 16.11.8 (Windows)
- gcc 9 (Linux)
- CMake 3.22.1
- Vulkan SDK 1.2.198.1 or above
- SDL version 2.0.18
- assimp 5.2.2

### Getting the code
This repository includes a submodule that makes it easier to get glTF models. To make sure the submodule is initialized properly, run the following command when cloning the repository:
`git clone --recurse-submodules https://github.com/PacktPublishing/Mastering-Graphics-Programming-with-Vulkan`

To download the glTF assets using the bootstrap script, run the following command: `python ./bootstrap.py`

Alternatively, you get manually download the models from https://github.com/KhronosGroup/glTF-Sample-Models. We tested only only a subset of glTF 2.0 models.

### Windows
We provide a Visual Studio solution containing the code for all chapters, located at `project\RaptorEngine.sln`.

### Linux
We provide the assimp library as part of this repo, while the SDL library has to be installed manually. On Debian and Ubuntu this can be done as follows:
`sudo apt install libsdl2-dev`

Assuming you unpacked the Vulkan SDK in `~/vulkan/1.2.198.1`, you have to add the following lines to your `.bashrc` file:
```
export VULKAN_SDK=~/vulkan/1.2.198.1/x86_64
export PATH=$VULKAN_SDK/bin:$PATH
export LD_LIBRARY_PATH=$VULKAN_SDK/lib:$LD_LIBRARY_PATH
export VK_LAYER_PATH=$VULKAN_SDK/etc/vulkan/explicit_layer.d
```

To generate the Make file, run the following command:
`cmake -B build -DCMAKE_BUILD_TYPE=Debug`

With the following software and hardware list you can run all code files present in the book (Chapter 1-15).
### Software and Hardware List
| Chapter | Software required | OS required |
| -------- | ------------------------------------ | ----------------------------------- |
| 1-15 | Vulkan 1.2 | Windows or Linux |
