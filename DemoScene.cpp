#include "DemoScene.h"

USING_NS_CC;

Scene* DemoScene::createScene()
{

    auto scene = Scene::create();
    
    auto layer = DemoScene::create();

    scene->addChild(layer);

    return scene;
}


bool DemoScene::init()
{
   
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    
    auto label = Label::createWithTTF("FUCK YOU", "fonts/Marker Felt.ttf", 24);
    
 
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    this->addChild(label, 1);

  
    auto sprite = Sprite::create("HelloWorld.png");

    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

	this->addChild(sprite);
    
    return true;
}
