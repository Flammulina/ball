// PQ2016_GRAPH.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��


// CPQ2016_GRAPHApp:
// ���̃N���X�̎����ɂ��ẮAPQ2016_GRAPH.cpp ���Q�Ƃ��Ă��������B
//

class CPQ2016_GRAPHApp : public CWinApp
{
public:
	CPQ2016_GRAPHApp();

// �I�[�o�[���C�h
	public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CPQ2016_GRAPHApp theApp;