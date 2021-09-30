#include <iostream>
#include <windows.h>
#include "cocos2d.h"
#include "MinHook.h"

#include <fstream>
#include <vector>

using namespace cocos2d;


class ВКгруппа {
public:
void callback(CCObject* pSender) {
reinterpret_cast<void(__stdcall*)(CCObject*)>(reinterpret_cast<char*>(GetModuleHandle(0)) + 0x4EF60)(pSender);
}
};

class backmenu {
public:
void Creator(CCObject* pSender) {

reinterpret_cast<void(__stdcall*)(CCObject*)>(reinterpret_cast<char*>(GetModuleHandle(0)) + 0x191CD0)(pSender); 
}
};

class addsong {
public:
void adminsys(CCObject* pSender) {


system("start https://rugd.foxodever.com/server/dashboard/reupload/songAdd.php");
}
};
class dashboard {
public:
void adminsys(CCObject* pSender) {


system("start https://rugd.foxodever.com/server/dashboard/index.php");
}
};
class changePassword {
public:
void adminsys(CCObject* pSender) {


system("start https://rugd.foxodever.com/server/dashboard/account/changePassword.php");
}
};
class changeUsername {
public:
void adminsys(CCObject* pSender) {


system("start https://rugd.foxodever.com/server/dashboard/account/changeUsername.php");
}
};
class found {
public:
void rugdp(CCObject* pSender) {
//FLAlertLayer* alert = FLAlertLayer::create(nullptr, "Search", "OK", nullptr, std::string("Not <cr>now! :)</c>"));
//alert->show();
reinterpret_cast<void(__stdcall*)(CCObject*)>(reinterpret_cast<char*>(GetModuleHandle(0)) + 0x4EF60)(pSender);
}
};

class AdminP {
public:
void rugdp(CCObject* pSender) {

reinterpret_cast<void(__stdcall*)(CCObject*)>(reinterpret_cast<char*>(GetModuleHandle(0)) + 0x191870)(pSender); // ASM путь
}
};

class mylevels {
public:
void rugdp(CCObject* pSender) {
/*
4EAA0
*/
//reinterpret_cast<void(__stdcall*)(CCObject*)>(reinterpret_cast<char*>(GetModuleHandle(0)) + 0x15CD30)(pSender);  ASM путь
MessageBoxA(NULL, "In beta!", "Not working...", MB_OK);
}
};

class NewScene {
public:



void buttn(CCObject* smth) {


auto win_size = CCDirector::sharedDirector()->getWinSize();

auto Scene = CCScene::create();
CCApplication::sharedApplication();

auto myScene = CCScene::create();

auto winSize = CCDirector::sharedDirector()->getWinSize();

auto BtnScene = CCScene::create();
/*
auto sprite1 = CCSprite::createWithSpriteFrameName("GJ_gradientBG.png");
sprite1->setPosition(CCPoint(287, 160));

sprite1->setColor({ 53, 51, 51 });
sprite1->setScaleX({ 19.333 });
*/
auto director = cocos2d::CCDirector::sharedDirector()->getRunningScene();


CCSprite* spriteR = CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
CCMenuItemSpriteExtra* btnR = CCMenuItemSpriteExtra::create(spriteR, spriteR, myScene, menu_selector(backmenu::Creator));
CCMenu* menuFindR = CCMenu::create();
spriteR->setScale(1.0);
menuFindR->addChild(btnR, 100);
menuFindR->setPosition(CCPoint(23, 165));
myScene->addChild(menuFindR, 100);

CCSprite* spriteR2 = CCSprite::createWithSpriteFrameName("GJ_TopDemonBtn_001.png");
CCMenuItemSpriteExtra* btnR2 = CCMenuItemSpriteExtra::create(spriteR2, spriteR2, myScene, menu_selector(addsong::adminsys));
CCMenu* menuFindR2 = CCMenu::create();
menuFindR2->addChild(btnR2, 100);
menuFindR2->setPosition(CCPoint(123, 239));
myScene->addChild(menuFindR2, 100);

CCSprite* spriteR21 = CCSprite::createWithSpriteFrameName("gj_findBtn_001.png");
CCMenuItemSpriteExtra* btnR21 = CCMenuItemSpriteExtra::create(spriteR21, spriteR21, myScene, menu_selector(found::rugdp));
CCMenu* menuFindR21 = CCMenu::create();
menuFindR21->addChild(btnR21, 100);
menuFindR21->setPosition(CCPoint(116, 27));
myScene->addChild(menuFindR21, 100);

CCSprite* songreup = CCSprite::createWithSpriteFrameName("GJ_musicOnBtn_001.png");
CCMenuItemSpriteExtra* btnPAD = CCMenuItemSpriteExtra::create(songreup, songreup, myScene, menu_selector(addsong::adminsys));

CCSprite* dashb = CCSprite::createWithSpriteFrameName("GJ_menuBtn_001.png");
CCMenuItemSpriteExtra* btnDB = CCMenuItemSpriteExtra::create(dashb, dashb, myScene, menu_selector(dashboard::adminsys));
btnDB->setPositionY(-60);

CCSprite* chpassbase = CCSprite::createWithSpriteFrameName("GJ_longBtn01_001.png");
CCMenuItemSpriteExtra* chpass = CCMenuItemSpriteExtra::create(chpassbase, chpassbase, myScene, menu_selector(changePassword::adminsys));
CCLabelBMFont* chpasstxt = CCLabelBMFont::create("Change password", "bigFont.fnt", 16);
chpass->addChild(chpasstxt, 101);
chpasstxt->setPositionX(47);
chpasstxt->setPositionY(15);
chpass->setPositionY(-120);
chpass->setPositionX(-20);
chpasstxt->setScaleX(0.4);
chpasstxt->setScaleY(0.4);



CCSprite* chunbase = CCSprite::createWithSpriteFrameName("GJ_longBtn01_001.png");
CCMenuItemSpriteExtra* chun = CCMenuItemSpriteExtra::create(chunbase, chunbase, myScene, menu_selector(changeUsername::adminsys));
CCLabelBMFont* chuntxt = CCLabelBMFont::create("Change username", "bigFont.fnt", 16);
chun->addChild(chuntxt, 101);
chuntxt->setPositionX(47);
chuntxt->setPositionY(15);
chun->setPositionY(-155);
chun->setPositionX(-20);
chuntxt->setScaleX(0.4);
chuntxt->setScaleY(0.4);

CCSprite* mylvlsbase = CCSprite::createWithSpriteFrameName("GJ_longBtn01_001.png");
CCMenuItemSpriteExtra* mylvls = CCMenuItemSpriteExtra::create(mylvlsbase, mylvlsbase, myScene, menu_selector(mylevels::rugdp));
CCLabelBMFont* mylvlstxt = CCLabelBMFont::create("My levels", "bigFont.fnt", 16);
mylvls->addChild(mylvlstxt, 101);
mylvlstxt->setPositionX(47);
mylvlstxt->setPositionY(15);
mylvls->setPositionY(50);
mylvls->setPositionX(-20);
mylvlstxt->setScaleX(0.4);
mylvlstxt->setScaleY(0.4);



CCMenu* AdminSysP = CCMenu::create();
AdminSysP->addChild(btnPAD, 100);
AdminSysP->setPosition(CCPoint(529, 190));
AdminSysP->addChild(btnDB, 100);
AdminSysP->addChild(chpass, 100);
AdminSysP->addChild(chun, 100);
AdminSysP->addChild(mylvls, 100);
//myScene->addChild(sprite1, -5);
myScene->addChild(AdminSysP, 100);

auto topLeft = CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
auto bottomLeft = CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
auto topRight = CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
auto bottomRight = CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
auto background = CCSprite::createWithSpriteFrameName("block007_bgcolor_001_001.png");
/*auto backgroundtint = CCSprite::createWithSpriteFrameName("groundSquareShadow_001.png");
backgroundtint->setRotation(90);
backgroundtint->setScaleX(50);
backgroundtint->setScaleY(20);
backgroundtint->setPositionX(winSize.width/2);*/
topLeft->setFlipY(true);
topRight->setFlipY(true);
topRight->setFlipX(true);
bottomRight->setFlipX(true);

background->setPosition({ winSize.width / 2, winSize.height / 2 });
CCSize size = bottomLeft->getScaledContentSize();

bottomLeft->setPosition({ size.width / 2, size.height / 2 });

topLeft->setPosition({ size.width / 2, (winSize.height) - (size.height / 2) });

topRight->setPosition({ (winSize.width) - (size.width / 2), (winSize.height) - (size.height / 2) });

bottomRight->setPosition({ (winSize.width) - (size.width / 2), size.height / 2 });

background->setScaleX(100);
background->setScaleY(100);
background->setColor({0, 97, 171});
CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5, myScene));

CCLabelBMFont* titlelbl = CCLabelBMFont::create("AdminPS", "bigFont.fnt", 24);
titlelbl->setPositionX(winSize.width/2);
titlelbl->setPositionY(winSize.height-30);
myScene->addChild(titlelbl, 5);

//myScene->addChild(sprite1);
myScene->addChild(topLeft, 2);
myScene->addChild(bottomLeft, 2);
myScene->addChild(topRight, 2);
myScene->addChild(bottomRight, 2);
myScene->addChild(background, 0);
//myScene->addChild(backgroundtint, 1);


}
};

namespace menuLayer {
inline bool(__thiscall* init)(CCLayer* self);
bool __fastcall initHook(CCLayer* self) {
bool result = init(self);

auto win_size = CCDirector::sharedDirector()->getWinSize();

// example button
CCSprite* sprite = CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
CCMenuItemSpriteExtra* btn = CCMenuItemSpriteExtra::create(sprite, sprite, self, menu_selector(NewScene::buttn));
CCMenu* menu = CCMenu::create();
menu->addChild(btn, 100);
menu->setPosition(CCPoint(545, 157));
self->addChild(menu, 100);
sprite->setFlipX(true);

return result;
}
}

DWORD WINAPI Mod(void* hMod) {
MH_Initialize();
uintptr_t base = (uintptr_t)GetModuleHandleA(0);

// hook menulayer
MH_CreateHook((PVOID)(base + 0x4DE40), (LPVOID)menuLayer::initHook, (LPVOID*)&menuLayer::init);
MH_EnableHook(MH_ALL_HOOKS);

return 0;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD reason, LPVOID reserved) {
if(reason == DLL_PROCESS_ATTACH) {
CreateThread(0, 0x1000, Mod, hMod, 0, 0);
}
return true;
}