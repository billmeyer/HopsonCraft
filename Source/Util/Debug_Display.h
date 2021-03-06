#ifndef DEBUG_DISPLAY_H
#define DEBUG_DISPLAY_H

#include <GL/glew.h>
#include <string>

//#include "../OpenGL/Glew/glew.h"
#include "../World/Block/Block.h"

class Master_Renderer;

namespace Debug_Display
{
    void init               ();

    void addFPS             (float fps);

    void addPlayerPosition  (const Vector3& location);
    void addLookVector      (const Vector3& rotation);

    void addChunkUpdates    (size_t numChunks);
    void addChunkAmounth    (size_t numChunks);

    void addheldBlock       (const Block_t& block);

    void draw               (Master_Renderer& renderer);
}

#endif // DEBUG_DISPLAY_H
