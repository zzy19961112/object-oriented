
// CalculatorDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "calculation.h"
#include "numconvert.h"
#include "operate.h"
#include "precede.h"
#include "printer.h"
#include "scanner.h"

// CCalculatorDlg 对话框
class CCalculatorDlg : public CDialogEx
{
// 构造
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit mEdit;
	CEdit tEdit;
	CEdit rEdit;
	bool lastPress;  // 判断上次是否按的“=”按钮
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedBack();
	afx_msg void OnBnClickedLeft();
	afx_msg void OnBnClickedRight();
	afx_msg void OnBnClickedDot();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedSub();
	afx_msg void OnBnClickedMul();
	afx_msg void OnBnClickedDiv();
	afx_msg void OnBnClickedEql();
	void Clear();
	afx_msg void OnEnChangeShow();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOpenButton();
	afx_msg void OnBnClickedSaveButton();
	afx_msg void OnEnChangeOpenEdit();
	afx_msg void OnEnChangeSaveEdit();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedClear1();
	afx_msg void OnBnClickedClear2();
	afx_msg void OnBnClickedButtonAbout();
	afx_msg void OnBnClickedButtonOk();
};
