#pragma once


// CDNMT 对话框

class CDNMT : public CDialogEx
{
	DECLARE_DYNAMIC(CDNMT)

public:
	CDNMT(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDNMT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NMT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

};
