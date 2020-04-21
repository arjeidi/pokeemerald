#ifndef GUARD_START_MENU_H
#define GUARD_START_MENU_H

extern bool8 (*gMenuCallback)(void);

void ShowReturnToFieldStartMenu(void);
void Task_ShowStartMenu(u8 taskId);
void ShowStartMenu(void);
void ShowBattlePyramidStartMenu(void);
void SaveGame(void);
void sub_80A0514(void);
void sub_80A08CC(void);
void HideStartMenu(void);
void AppendToList(u8* list, u8* pos, u8 newEntry);

#endif // GUARD_START_MENU_H
