// PQ2016_GRAPHDlg.h : ヘッダー ファイル
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CPQ2016_GRAPHDlg ダイアログ
class CPQ2016_GRAPHDlg : public CDialog
{
// コンストラクション
public:
	CPQ2016_GRAPHDlg(CWnd* pParent = NULL);	// 標準コンストラクタ

// ダイアログ データ
	enum { IDD = IDD_PQ2016_GRAPH_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
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
