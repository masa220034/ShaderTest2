#include "TestScene.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"
#include "Stage.h"
#include "transDice.h"
#include "Engine/Camera.h"

TestScene::TestScene(GameObject* parent)
	:GameObject(parent, "TenstScene")
{
}

void TestScene::Initialize()
{
	Instantiate<Stage>(this);
	//Instantiate<transDice>(this);
}

void TestScene::Update()
{
}

void TestScene::Draw()
{
}

void TestScene::Release()
{
}
