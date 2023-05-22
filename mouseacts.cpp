#include "mouseacts.h"

MouseActs::MouseActs(QWidget *parent) :QWidget (parent) {}

void MouseActs::clickCurPos(int style) {
    GetCursorPos(&pos);
    switch (style) {
    case LD:
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN, pos.x, pos.y, 0, 0);
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, pos.x, pos.y, 0, 0);
    case LS:
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN, pos.x, pos.y, 0, 0);
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, pos.x, pos.y, 0, 0);
        break;
    case RD:
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTDOWN, pos.x, pos.y, 0, 0);
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTUP, pos.x, pos.y, 0, 0);
    case RS:
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTDOWN, pos.x, pos.y, 0, 0);
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_RIGHTUP, pos.x, pos.y, 0, 0);
    case ZZM:

//        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN, 50, 50, 0, 0);
//        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 600*65536/1920, 600*65536/1080, 0, GetMessageExtraInfo());
//      mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, 600, 600, 0, 0);

        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, pos.x, pos.y, 0, 0);
        //mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, pos.x, pos.y + 300, 0, 0);
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 600*65536/1920, 600*65536/1080, 0, GetMessageExtraInfo());
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP, pos.x, pos.y + 300, 0, 0);






        break;
    }
}
