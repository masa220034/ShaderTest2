#pragma once
#include "Engine/GameObject.h"

class transDice :
    public GameObject
{
    int hModel_;
public:
    //�R���X�g���N�^
    transDice(GameObject* parent);

    //�f�X�g���N�^
    ~transDice();

    //������
    void Initialize() override;

    //�X�V
    void Update() override;

    //�`��
    void Draw() override;

    //�J��
    void Release() override;
};