
// MFCApplication1View.cpp : CMFCApplication1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1View ����/����

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: �ڴ˴����ӹ������

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View ����

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ�����������ӻ��ƴ���
	CString S = _T("Hello,�ܽ���!");
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(100, 100, S);
}


// CMFCApplication1View ���

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View ��Ϣ��������


void CMFCApplication1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ�������Ϣ������������/�����Ĭ��ֵ
	CMFCApplication1Doc* pDoc = GetDocument();
	//��д������ʾ����name��ֵ
	CString a = pDoc->name;
	CClientDC dc(this);
	dc.TextOutW(300, 300, a);

	//ƴ���ַ�������ʾ
	CString str2 = _T("������ϰ!");
	CString str = pDoc->str1 + str2;
	dc.TextOutW(500, 500, str);
	CView::OnLButtonDown(nFlags, point);
}


void CMFCApplication1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ�������Ϣ������������/�����Ĭ��ֵ
	CMFCApplication1Doc* pDoc = GetDocument();
	pDoc->count += 1;//ÿ�ε��+1��

	CView::OnRButtonDown(nFlags, point);
	int a = pDoc->count;
	CString s;
	s.Format(_T("%d"), a);
	CClientDC dc(this);
	dc.TextOutW(400, 400, s);
	CView::OnRButtonDown(nFlags, point);
}