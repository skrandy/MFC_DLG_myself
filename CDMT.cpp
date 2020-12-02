// CDMT.cpp: 实现文件
//

#include "pch.h"
#include "MFC_DLG_myself.h"
#include "CDMT.h"
#include "afxdialogex.h"


// CDMT 对话框

IMPLEMENT_DYNAMIC(CDMT, CDialogEx)

CDMT::CDMT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MT, pParent)
{

}

CDMT::~CDMT()
{
}

void CDMT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDMT, CDialogEx)
END_MESSAGE_MAP()


// CDMT 消息处理程序
