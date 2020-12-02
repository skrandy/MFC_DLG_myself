// CDNMT.cpp: 实现文件
//

#include "pch.h"
#include "MFC_DLG_myself.h"
#include "CDNMT.h"
#include "afxdialogex.h"


// CDNMT 对话框

IMPLEMENT_DYNAMIC(CDNMT, CDialogEx)

CDNMT::CDNMT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NMT, pParent)
{

}

CDNMT::~CDNMT()
{
}

void CDNMT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDNMT, CDialogEx)
END_MESSAGE_MAP()


// CDNMT 消息处理程序
