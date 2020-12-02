#pragma once


// CDMT 对话框

class CDMT : public CDialogEx
{
	DECLARE_DYNAMIC(CDMT)

public:
	CDMT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDMT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
