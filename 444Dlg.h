
// 444Dlg.h : ͷ�ļ�
//

#pragma once


// CMy444Dlg �Ի���
class CMy444Dlg : public CDialogEx
{
// ����
public:
	CMy444Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam) ;
// �Ի�������
	enum { IDD = IDD_MY444_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};
