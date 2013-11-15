#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "GameControl/GameControl.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
	
}

AppDelegate::~AppDelegate() 
{
	CocosDenshion::SimpleAudioEngine::end();
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);
	
    // turn on display FPS
    pDirector->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

	if ( !GameControl::RunGameControl() ) {
		CCLOG("GameControl Init Faile!");
	}

    // create a scene. it's an autorelease object
    CCScene *pScene = CCScene::create();

    // run
    pDirector->runWithScene(pScene);

	CCScheduler* scheduler = CCDirector::sharedDirector()->getScheduler();

	scheduler->scheduleSelector(schedule_selector(AppDelegate::AppUpdate), pDirector, 1.0f/60.0f, false);


    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    //CCDirector::sharedDirector()->stopAnimation();

	CCDirector::sharedDirector()->pause();

    // if you use SimpleAudioEngine, it must be pause
    CocosDenshion::SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    //CCDirector::sharedDirector()->startAnimation();

	CCDirector::sharedDirector()->resume();

    // if you use SimpleAudioEngine, it must resume here
    CocosDenshion::SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}

void AppDelegate::AppUpdate(float dt)
{
	
}