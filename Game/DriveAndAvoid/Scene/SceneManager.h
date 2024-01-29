#pragma once

#include "SceneBase.h"

//固定化するフレームレート値
#define TARGET_FREAM_RATE	(60)
//1フレーム当たりの時間(マイクロ秒)
#define DELTA_SECOND		(1000000 / TARGET_FREAM_RATE)

class SceneManager
{
private:
	SceneBase* current_scene;		//現在シーン情報

public:
	SceneManager();
	~SceneManager();
	
	void Initialize();				//初期化処理
	void Update();					//更新処理
	void Finalize();				//終了時処理

private:
	void Draw() const;
	void ChangeScene(eSceneType scene_type);
	SceneBase* CreateScene(eSceneType scene_type);
};

