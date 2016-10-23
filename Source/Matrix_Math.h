#ifndef MATRIX_MATH_H_INCLUDED
#define MATRIX_MATH_H_INCLUDED

#include "OpenGL/GLM/glm_transformations.h"

class Camera;

namespace Maths
{
    Matrix4 createViewMatrix (const Camera& camera);

    Matrix4 createTransforrmationMatrix(const Vector3& translation,
                                        const Vector3& rotation,
                                        const Vector3& scale);

    Matrix4 createPerspectiveMatrix ();
}

#endif // MATRIX_MATH_H_INCLUDED