
// PlanarSightDlg.h : 头文件
//

#pragma once
#include "OpenGL.h"
#include "afxwin.h"

// CPlanarSightDlg 对话框
class CPlanarSightDlg : public CDialogEx
{
// 构造
public:
	CPlanarSightDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_PLANARSIGHT_DIALOG };

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
	afx_msg void OnBnClickedOuterWalls();
	afx_msg void OnBnClickedInnerWalls();
	afx_msg void OnBnClickedMonsters();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedStartGame();
	afx_msg void OnBnClickedEndGame();
	// 显示可见多边形
	COpenGL *m_pDisplay;
	CButton vis_pol_check;
	afx_msg void OnClickedVisiPolygon();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnBnClickedShowTriangulation();
	// 显示三角剖分
	CButton showTriangulation;
	// 查看所有三角形的边标记
	CButton showMeshEdgeLabels;
	afx_msg void OnBnClickedMeshEdgeLabels();
	// 显示经过拓扑排序以后得到的排序线段
	CButton sortedSegments;
	afx_msg void OnBnClickedSortesSegments();
	// 显示平面上所有点的对偶图
	CButton showDualGraph;
	afx_msg void OnBnClickedDualGraph();
};
