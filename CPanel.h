#pragma once


// CPanel

class CPanel : public CWnd
{
	DECLARE_DYNAMIC(CPanel)

public:
	CPanel();
	virtual ~CPanel();

protected:
	DECLARE_MESSAGE_MAP()
public:
	int color, angulo;
	void OnPaint();
};


