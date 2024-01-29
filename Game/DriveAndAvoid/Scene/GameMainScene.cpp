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

//‰Šú‰»ˆ—
void GameMainScene::Initialize()
{
	//‚“¾“_’l‚ð“Ç‚Ýž‚Þ
	ReadHighScore();

	//‰æ‘œ‚Ì“Ç‚Ýž‚Ý
	back_ground = LoadGraph("Resource/images/back.bmp");
	barrier_image = LoadGraph("Reasource/images/barrier.png");
	int result = LoadDivGraph("Resource/images/car.bmp", 3, 3, 1, 63, 120, enemy_image);
}