
// UsingView.cpp : CUsingView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Using.h"
#endif

#include "UsingDoc.h"
#include "UsingView.h"
#include "W32D.h"
#include "w32.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsingView

IMPLEMENT_DYNCREATE(CUsingView, CView)

BEGIN_MESSAGE_MAP(CUsingView, CView)
END_MESSAGE_MAP()

// CUsingView ����/����

CUsingView::CUsingView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingView::~CUsingView()
{
}

BOOL CUsingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingView ����

void CUsingView::OnDraw(CDC* pDC)
{
	CUsingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("%d"), factorial(5));
	pDC->TextOutW(20, 20, s);
	CString s1;
	FAC fac;
	s1.Format(_T("%f"), fac.convert(30.0));
	pDC->TextOutW(20, 40, s1);
	CString s2;
	s2.Format(_T("%d"), factorial1(5));
	pDC->TextOutW(20, 60, s2);
	CString s3;
	FAC1 fac1;
	s3.Format(_T("%f"), fac1.convert(30.0));
	pDC->TextOutW(20, 80, s3);
}


// CUsingView ���

#ifdef _DEBUG
void CUsingView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingDoc* CUsingView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingDoc)));
	return (CUsingDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingView ��Ϣ�������
