#include "GameMainScene.h"
#include "../Object/RankingData.h"
#include "DxLib.h"
#include <math.h>

GameMainScene::GameMainScene() :high_score(0),
back_ground(NULL), barrier_image(NULL), mileage(0), player(nullptr),
enemy(nullptr)
{
	for (int i = 0; i < 3; i++)
	{
		enemy_image[i] = NULL;
		enemy_count[i] = NULL;
	}
}

GameMainScene::~GameMainScene() {	}

//初期化処理
void GameMainScene::Initialize()
{
	//高得点値を読み込む
	ReadHighScore();

	//画像の読み込み
	back_ground = LoadGraph("Resource/images/back.bmp");
	barrier_image = LoadGraph("Reasource/images/barrier.png");
	int result = LoadDivGraph("Resource/images/car.bmp", 3, 3, 1, 63, 120, enemy_image);
}