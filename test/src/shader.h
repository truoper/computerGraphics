#ifndef SHADER_H_INCLUDED
#define SHADER_H_INCLUDED

char *Shared_LoadFile(char *FileName);
GLuint Shader_CreateShader(char *FileName, GLuint type);
GLuint Shader_CreateProgram(char *VertexFileName, char *FragmentFileName);

#endif // SHADER_H_INCLUDED
