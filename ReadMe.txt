================================================================================
MICROSOFT FOUNDATION CLASS ライブラリ: PQ2016_GRAPH プロジェクトの概要
===============================================================================

アプリケーション ウィザードが作成した PQ2016_GRAPH には Microsoft 
Foundation Class の基本的な使い方が示されています。アプリケーション作成のひな型
としてお使いください。

このファイルには PQ2016_GRAPH アプリケーションを構成している各ファイ
ルの概要説明が含まれます。

PQ2016_GRAPH.vcproj
   これはアプリケーション ウィザードで生成された VC++ プロジェクトのメイン プ
   ロジェクト ファイルです。ファイルが生成された Visual C++ のバージョン情報が
   含まれています。また、アプリケーション ウィザードで選択したプラットフォー
   ム、構成およびプロジェクト機能に関する情報も含まれています。

PQ2016_GRAPH.h
   これはアプリケーションのメイン ヘッダー ファイルです。このファイルには、
   Resource.h を含む、その他のプロジェクト固有のヘッダーが含まれていて、
   CPQ2016_GRAPHApp アプリケーション クラスを宣言します。

PQ2016_GRAPH.cpp
   これは、アプリケーション クラス CPQ2016_GRAPHApp を含むメイン アプリケー
   ション ソース ファイルです。

PQ2016_GRAPH.rc
   これは、プログラムが使用する Microsoft Windows のリソースの一覧ファイルで
   す。このファイルには RES サブディレクトリに保存されているアイコン、ビットマ
   ップ、カーソルが含まれています。このファイルは、Microsoft Visual C++ で直接
   編集することができます。プロジェクト リソースは 1041 にあります。

res\PQ2016_GRAPH.ico
   これは、アプリケーションのアイコンとして使用されるアイコンファイルです。この
   アイコンはメイン リソース ファイル PQ2016_GRAPH.rc に含まれていま
   す。

res\PQ2016_GRAPH.rc2
   このファイルは Microsoft Visual C++ を使用しないで編集されたリソースを含んで
   います。リソース エディタで編集できないリソースはすべてこのファイルに入れて
   ください。


/////////////////////////////////////////////////////////////////////////////

アプリケーション ウィザードは 1 つのダイアログ クラスを作成します:

PQ2016_GRAPHDlg.h, PQ2016_GRAPHDlg.cpp - ダイアログ
   これらのファイルは CPQ2016_GRAPHDlg クラスを含みます。このクラスはアプ
   リケーションのメイン ダイアログの動作を定義します。ダイアログ テンプレートは
   Microsoft Visual C++ で編集可能な PQ2016_GRAPH.rc に含まれます。


/////////////////////////////////////////////////////////////////////////////

その他の標準ファイル:

StdAfx.h, StdAfx.cpp
   これらのファイルは、既にコンパイルされたヘッダー ファイル (PCH) 
   PQ2016_GRAPH.pch や既にコンパイルされた型のファイル StdAfx.obj を
   ビルドするために使用されます。

Resource.h
   これは新規リソース ID を定義する標準ヘッダー ファイルです。Microsoft 
   Visual C++ はこのファイルの読み取りと更新を行います。

/////////////////////////////////////////////////////////////////////////////

その他の注意:

アプリケーション ウィザードは "TODO:" で始まるコメントを使用して、追加したりカ
スタマイズする必要があるソース コードの部分を示します。

アプリケーションが共有 DLL 内で MFC を使用する場合は、MFC DLL を再頒布する必要
があります。また、アプリケーションがオペレーティング システムのロケール以外の言
語を使用している場合も、対応するローカライズされたリソース MFC90XXX.DLL を再頒
布する必要があります。これらのトピックの詳細については、MSDN ドキュメントの 
Visual C++ アプリケーションの再頒布に関するセクションを参照してください。

/////////////////////////////////////////////////////////////////////////////
