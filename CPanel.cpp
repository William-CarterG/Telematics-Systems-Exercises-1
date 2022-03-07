// CPanel.cpp : implementation file
//

#include "pch.h"
#include "CustomCtrl.h"
#include "CPanel.h"


// CPanel

IMPLEMENT_DYNAMIC(CPanel, CWnd)

CPanel::CPanel()
{
    angulo = 0, color=0;
}

CPanel::~CPanel()
{
}


BEGIN_MESSAGE_MAP(CPanel, CWnd)
    ON_WM_PAINT()
END_MESSAGE_MAP()

void CPanel::OnPaint() {
    int x, y, rd;
    CPaintDC dc(this);
    CRect r;
    GetClientRect(r);

    CBrush b1;
    if (!color) b1.CreateSolidBrush(RGB(255, 255, 255));
    else b1.CreateSolidBrush(RGB(255, 0, 0));
    
    dc.SelectObject(&b1);
    dc.Ellipse(r);

    CPoint pt = r.CenterPoint();
    dc.MoveTo(pt.x, pt.y);

    rd = pt.x < pt.y ? pt.x : pt.y;
    x = (int)(rd * sin(this->angulo * 3.141592 / 180));
    y = (int)(rd * cos(this->angulo * 3.141592 / 180));

    dc.LineTo(pt.x + x, pt.y + y);
    
}

// CPanel message handlers


