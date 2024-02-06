#include "HelpScene.h"
#include "../Utility/InputControl.h"
#include "DxLib.h"

HelpScene::HelpScene() :background_image(NULL)
{

}

HelpScene::~HelpScene()
{

}

//����������
void HelpScene::Initialize()
{
	//�摜�̓ǂݍ���
	background_image = LoadGraph("Resource/images/Title.bmp");

	//�G���[�`�F�b�N
	if (background_image == -1)
	{
		throw("Resource/images/Title.bmp������܂���\n");
	}
}

//�X�V����
eSceneType HelpScene::Update()
{
	//B�{�^���������ꂽ��A�^�C�g���ɖ߂�
	if (InputControl::GetButtonDown(XINPUT_BUTTON_B))
	{
		return eSceneType::E_TITLE;
	}

	return GetNowScene();
}

//�`�揈��
void HelpScene::Draw() const
{
	//�w�i�摜�̕`��
	DrawGraph(0, 0, background_image, FALSE);

	//�Q�[������
	SetFontSize(16);
	DrawString(20, 120, "�w���v���", 0xFFFFFF, 0);

	DrawString(20, 160, "����͏�Q��������Ȃ���", 0xFFFFFF, 0);
	DrawString(20, 180, "���葱����Q�[���ł��B", 0xFFFFFF, 0);
	DrawString(20, 200, "�R�����s���邩��Q����", 0xFFFFFF, 0);
	DrawString(20, 220, "���񓖂���ƃQ�[���I�[�o�[�ł��B", 0xFFFFFF, 0);

	DrawString(150, 450, "---- B�{�^���������ă^�C�g���֖߂� ----", 0xFFFFFF, 0);
}

//�I��������
void HelpScene::Finalize()
{
	//�ǂݍ��񂾉摜�̍폜
	DeleteGraph(background_image);
}

//���݂̃V�[�������擾
eSceneType HelpScene::GetNowScene() const
{
	return eSceneType::E_HELP;
}