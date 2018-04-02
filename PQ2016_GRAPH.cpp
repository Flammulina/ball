// PQ2016_GRAPH.cpp : アプリケーションのクラス動作を定義します。
//

#include "stdafx.h"
#include "PQ2016_GRAPH.h"
#include "PQ2016_GRAPHDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPQ2016_GRAPHApp

BEGIN_MESSAGE_MAP(CPQ2016_GRAPHApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CPQ2016_GRAPHApp コンストラクション

CPQ2016_GRAPHApp::CPQ2016_GRAPHApp()
{
	// TODO: この位置に構築用コードを追加してください。
	// ここに InitInstance 中の重要な初期化処理をすべて記述してください。
}


// 唯一の CPQ2016_GRAPHApp オブジェクトです。

CPQ2016_GRAPHApp theApp;


// CPQ2016_GRAPHApp 初期化

BOOL CPQ2016_GRAPHApp::InitInstance()
{
	CWinApp::InitInstance();

	// 標準初期化
	// これらの機能を使わずに最終的な実行可能ファイルの
	// サイズを縮小したい場合は、以下から不要な初期化
	// ルーチンを削除してください。
	// 設定が格納されているレジストリ キーを変更します。
	// TODO: 会社名または組織名などの適切な文字列に
	// この文字列を変更してください。
	SetRegistryKey(_T("アプリケーション ウィザードで生成されたローカル アプリケーション"));

	CPQ2016_GRAPHDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: ダイアログが <OK> で消された時のコードを
		//  記述してください。
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: ダイアログが <キャンセル> で消された時のコードを
		//  記述してください。
	}

	// ダイアログは閉じられました。アプリケーションのメッセージ ポンプを開始しないで
	//  アプリケーションを終了するために FALSE を返してください。
	return FALSE;
}
