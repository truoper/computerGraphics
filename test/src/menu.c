#include <gl/gl.h>
#include <stdio.h>
#include <stdlib.h>

#include "control.h"
#include "button.h"

int textureId = 0;
char anim = 0;
float TypeOfAnim = 0;
float tick = 0;

void Init()
{
    anim = 0;
    Menu_AddButton("Start", 10, 10, 100, 30, 2);
    Menu_AddButton("Animation", 10, 50, 100, 30, 2);
    Menu_AddButton("Exit", 10, 90, 100, 30, 2);
}

void InitTest()
{
    tick = 0;
    TypeOfAnim = 0;
    anim = 1;
    Menu_AddButton("Stand", 10, 10, 100, 30, 2);
    Menu_AddButton("Run", 10, 50, 100, 30, 2);
    Menu_AddButton("Jump", 10, 90, 100, 30, 2);
    Menu_AddButton("Back", 10, 130, 100, 30, 2);
}

void MouseDone()
{
    int buttonId = Menu_MouseDone();
    if (buttonId < 0)
    {
        return;
    }
    char *name = Menu_GetButtonName(buttonId);
    if (strcmp(name, "Exit") == 0)
    {
        PostQuitMessage(0);
    }
    if (strcmp(name, "Start") == 0)
    {
        Menu_Clear();
        Menu_AddButton("Back",10, 10, 100, 30, 2);
        //начало игры
    }
    if (strcmp(name, "Animation") == 0)
    {
        Menu_Clear();
        InitTest();
    }
    if (strcmp(name, "Back") == 0)
    {
        Menu_Clear();
        Init();
    }
    if (strcmp(name, "Stand") == 0)
    {
        TypeOfAnim = 0;
        tick = 0;
    }
    if (strcmp(name, "Run") == 0)
    {
        TypeOfAnim = 1;
        tick = 0;
    }
    if (strcmp(name, "Jump") == 0)
    {
        TypeOfAnim = 2;
        tick = 0;
    }
}

float TextureVertex[] = {150, 10, 230, 10, 230, 130, 150, 130};
float TextureCord[] = {0, 0, 1, 0, 1, 1, 0, 1};

void ShowTexture(float NumberOfSprite, float TypeOfAnim)
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,textureId);
    glEnable(GL_ALPHA_TEST);
    glAlphaFunc(GL_GREATER, 0.7);

    glColor3f(1, 1, 1);
    glPushMatrix();
        glEnableClientState(GL_VERTEX_ARRAY);
        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        static float spriteXsize = 240;
        static float spriteYsize = 108;
        static float charsizex = 30;
        static float charsizey = 36;
        float left = (charsizex*NumberOfSprite)/spriteXsize;
        float right = left+(charsizex/spriteXsize);
        float top = (charsizey*TypeOfAnim)/spriteYsize;
        float bottom = top + (charsizey/spriteYsize);

        TextureCord[5] = TextureCord[7] = bottom;
        TextureCord[1] = TextureCord[3] = top;
        TextureCord[0] = TextureCord[6] = left;
        TextureCord[2] = TextureCord[4] = right;
        glVertexPointer(2, GL_FLOAT, 0, TextureVertex);
        glTexCoordPointer(2, GL_FLOAT, 0, TextureCord);
        glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
        glDisableClientState(GL_VERTEX_ARRAY);
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisable(GL_ALPHA_TEST);
    glPopMatrix();
}
