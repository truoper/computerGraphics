#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

extern int textureId;
extern char anim;
extern float TypeOfAnim;
extern float tick;

void Init();
void InitTest();
void MouseDone();

extern float TextureVertex[];
extern float TextureCord[];

void ShowTexture(float NumberOfSprite, float TypeOfAnim);

#endif // MENU_H_INCLUDED
