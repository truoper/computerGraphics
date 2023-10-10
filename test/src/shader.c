/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gl/gl.h>

#include "shader.h"

char *Shared_LoadFile(char *FileName)
{
    FILE *f = fopen(FileName, "rb");
    if(!f)
    {
        printf("%s \"%s\" %s\n","File",FileName, "not found.");
    }
    fseek(f, 0, SEEK_END);
    int len = ftell(f);
    char *text = malloc(len + 1);
    memset(text, 0, len + 1);

    fseek(f, 0, SEEK_SET);
    fread(text, 1, len, f);
    fclose(f);

    return text;
}

GLuint Shader_CreateShader(char *FileName, GLuint type)
{
    char *txt = Shader_LoadFile(FileName);

    GLuint shader = glCreateShader(type);
    glShaderSource(shader, 1, &txt, NULL);
    glCompileShader(shader);
    free(txt);

    GLuint ok;
    GLchar log[2000];
    if(!ok)
    {
        glGetShaderInfoLog(shader, 2000, NULL, log);
        printf("%s\n", log);
    }

    return shader;
}

GLuint Shader_CreateProgram(char *VertexFileName, char *FragmentFileName)
{
    GLuint frag = Shader_CreateShader(FragmentFileName, GL_FRAGMENT_SHADER);
    GLuint vert = Shader_CreateShader(VertexFileName, GL_VERTEX_SHADER);

    GLuint prog = glCreateProgram();
    glAttachShader(prog, frag);
    glAttachShader(prog, vert);

    GLuint ok;
    GLchar log[2000];
    glGetProgramiv(prog, GL_LINK_STATUS, &ok);
    if(!ok)
    {
        glGetShaderInfoLog(prog, 2000, NULL, log);
        printf("%s\n", log);
    }

    return prog;
}
*/
