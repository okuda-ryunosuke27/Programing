#pragma once
#include "Vector2D.h"

class InputControl
{
	private:
		static bool now_button[16];
		static bool old_button[16];
		static float trigger[2];
		static Vector2D stick[2];

	public:
		static void Update();						//�X�V����

		//�{�^�����͎擾����
		static bool GetButton(int button);			//���������Ă����
		static bool GetButtonDown(int button);		//�������u��
		static bool GetButtonUp(int button);		//�������u��

		//�g���K�[���͎擾����
		static float GetLeftTrigger();				//���g���K�[
		static float GetRightTrigger();				//�E�g���K�[

		//�X�e�B�b�N���͎擾����
		static Vector2D GetLeftStick();				//���X�e�B�b�N
		static Vector2D GetRightStick();			//�E�X�e�B�b�N

	private:
		//�{�^���z��͈̓`�F�b�N
	static bool CheckButtonRange(int button);
};

