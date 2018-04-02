// PQ2016_GRAPHDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CPQ2016_GRAPHDlg �_�C�A���O
class CPQ2016_GRAPHDlg : public CDialog
{
// �R���X�g���N�V����
public:
	CPQ2016_GRAPHDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^

// �_�C�A���O �f�[�^
	enum { IDD = IDD_PQ2016_GRAPH_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit msgED;
	//afx_msg void OnBnClickedButton1();
	//afx_msg void OnBnClickedButton2();
	//afx_msg void OnBnClickedButton3();
	/*
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedRadio9();
	afx_msg void OnBnClickedRadio8();
	afx_msg void OnBnClickedRadio10();
	*/
	LRESULT OnMessageRCV( WPARAM wParam, LPARAM lParam);
	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	
	
	CAnimateCtrl m_xc_Animation;
	CStatic m_xcdc;

	int check = 0;
	int ball = -1;
	afx_msg void OnAcnStopAnimate1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	int rcnt = 0;

	int r = 2;
};
