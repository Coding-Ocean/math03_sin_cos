#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let deg = 0;
    let x, y, r;
    angleMode(DEGREES);
    while (notQuit) {
        //�p�xdeg������
        if (isTrigger(KEY_SPACE))deg = 0;
        if (isTrigger(KEY_D))deg += 30;
        if (isTrigger(KEY_A))deg -= 30;
        if (isPress(KEY_W))deg += 1;
        if (isPress(KEY_S))deg -= 1;
        //���_��������������P�̐���
        //deg�x��]�������Ƃ���x�Ay�����߂�
        x = cos(deg);
        y = sin(deg);
        //���̒���r�����߂āA�P���ǂ����m�F����
        r = sqrt(x * x + y * y);

        //�N���A���Ď���`��
        clear(128);
        mathAxis(1.2, 255);
        //���̑���
        strokeWeight(10);
        //�ΕӁi�����P�̐��j
        stroke(160, 200, 255);
        mathLine(0, 0, x, y);
        //���
        stroke(255, 255, 200);
        mathLine(0, 0, x, 0);
        //����
        stroke(255, 200, 200);
        mathLine(x, 0, x, y);

        //�e�L�X�g���
        textSize(40);
        fill(255, 255, 200);
        text("���=cos(" + deg + ")=" + x, 0, 60);
        fill(255, 200, 200);
        text("����=sin(" + deg + ")=" + y, 0, 120);
        fill(160, 200, 255);
        text("�Ε�(���a)=" + r, 0, 180);
    }
}
