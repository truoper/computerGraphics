#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED

int Menu_AddButton(char* name, float x, float y, float width, float height, float textScale);
void Menu_ShowMenu();
void Menu_Clear();

char *Menu_GetButtonName(int buttonId);

int Menu_MoseMove(float x, float y);
int Menu_MouseDone();
void Menu_MouseUp();

#endif //BUTTON_H_INCLUDED
