#ifndef __shape_h__
#define __shape_h_

struct Color {
    float r, g, b;
};

struct Shape {
    struct Color color;
    int vertice_len;
    int vertices[32];
};

#endif // __shape_h__
