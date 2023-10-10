#include "move.h"
/*
float speed = 0.040; //скорость изменения координат
float gravity = -0.0001; // скорость изменения координаты Y
typedef struct {
    float currentFrame;
    int currentTypeAnimation;
    float x, y, dx, dy; //обе координаты и скорость изменения
} Hero;

Hero character;

void Hero_Move(Hero *obj)
{
    bool is_jump;
    if (obj->y <= WindowHeight-150){
        is_jump = true;
        obj->y+=obj->dy; //обновление координат
    }

    obj->x+=obj->dx;
    obj->dy-=gravity; // влияние примера гравитации

    obj->currentFrame += 0.0005;
    obj->currentTypeAnimation = 0;
    if (obj->currentFrame > 8) obj->currentFrame = 1;

    if (GetKeyState(VK_LEFT)<0 && (obj->x > 0) && State==1) // проверка состояния
    {
        obj->currentFrame += 0.005; // подсчет для смены кадра по спрайт
        obj->dx-=speed; // пересылка изменения координаты
        obj->x+=obj->dx; //вычисление конечной координаты
        obj->dx=0; // обнуление для исключение пересчета
        obj->currentTypeAnimation = 1;
        if (obj->currentFrame > 8) obj->currentFrame = 1; //обнуление номера кадра для

    }
    if (GetKeyState(VK_RIGHT)<0 && (obj->x < WindowWeight-75) && State==1)
    {
        obj->currentFrame += 0.005;
        obj->dx+=speed;
        obj->x+=obj->dx;
        obj->dx=0;
        obj->currentTypeAnimation = 1;
        if (obj->currentFrame > 8) obj->currentFrame = 1;
    }

    if (GetKeyState(VK_UP)<0 && (obj->y > 20) && State==1 && !is_jump)
    {
        is_jump = false;
        obj->dy =speed * -5; // дает импульс для имитации прыжка
        obj->y += obj->dy; //расчет координаты Y
        obj->currentTypeAnimation = 2;
    }
}

void characterUpdate(Hero *obj)
{
    Hero_Move(&character);
    RenderAnimatedTexture(&tex_Character, obj->x,obj->y, character.currentFrame, character.currentTypeAnimation, true);
}
*/
