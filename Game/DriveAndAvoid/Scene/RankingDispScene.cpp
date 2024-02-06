#include "RankingDispScene.h"
#include "../Utility/InputControl.h"
#include "DxLib.h"

RankingDispScene::RankingDispScene() :background_image(NULL), ranking(nullptr)
{

}

RankingDispScene::~RankingDispScene()
{

}

//����������
void RankingDispScene::Initialize()
{
	//��ʂ̓ǂݍ���
	background_image = LoadGraph("Resource/images/Ranking.bmp");

	//�G���[�`�F�b�N
	if (background_image == -1)
	{
		throw("Resource/images/Ranking.bmp������܂���\n");
	}

	//�����L���O�����擾
	ranking = new RankingData;
	ranking->Initialize();
}

//�X�V����
eSceneType RankingDispScene::Update()
{
	//
}