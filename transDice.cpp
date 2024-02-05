#include "transDice.h"
#include "Engine/Model.h"

transDice::transDice(GameObject* parent)
	:GameObject(parent, "transDice"),hModel_(-1)
{
}

transDice::~transDice()
{
}

void transDice::Initialize()
{
	hModel_ = Model::Load("Dice.fbx");
	assert(hModel_ >= 0);
}

void transDice::Update()
{
}

void transDice::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void transDice::Release()
{
}