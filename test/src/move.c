#include "move.h"
/*
float speed = 0.040; //�������� ��������� ���������
float gravity = -0.0001; // �������� ��������� ���������� Y
typedef struct {
    float currentFrame;
    int currentTypeAnimation;
    float x, y, dx, dy; //��� ���������� � �������� ���������
} Hero;

Hero character;

void Hero_Move(Hero *obj)
{
    bool is_jump;
    if (obj->y <= WindowHeight-150){
        is_jump = true;
        obj->y+=obj->dy; //���������� ���������
    }

    obj->x+=obj->dx;
    obj->dy-=gravity; // ������� ������� ����������

    obj->currentFrame += 0.0005;
    obj->currentTypeAnimation = 0;
    if (obj->currentFrame > 8) obj->currentFrame = 1;

    if (GetKeyState(VK_LEFT)<0 && (obj->x > 0) && State==1) // �������� ���������
    {
        obj->currentFrame += 0.005; // ������� ��� ����� ����� �� ������
        obj->dx-=speed; // ��������� ��������� ����������
        obj->x+=obj->dx; //���������� �������� ����������
        obj->dx=0; // ��������� ��� ���������� ���������
        obj->currentTypeAnimation = 1;
        if (obj->currentFrame > 8) obj->currentFrame = 1; //��������� ������ ����� ���

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
        obj->dy =speed * -5; // ���� ������� ��� �������� ������
        obj->y += obj->dy; //������ ���������� Y
        obj->currentTypeAnimation = 2;
    }
}

void characterUpdate(Hero *obj)
{
    Hero_Move(&character);
    RenderAnimatedTexture(&tex_Character, obj->x,obj->y, character.currentFrame, character.currentTypeAnimation, true);
}
*/
