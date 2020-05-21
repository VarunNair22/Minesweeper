#pragma once

#include "wx/wx.h"

class cMain : public wxFrame
{
private:
	int fieldWidth = 10;
	int fieldHeight = 10;
	int mineCount = 30;
	wxButton** btn;
	void generateField(int fx, int fy);
public:
	cMain();
	~cMain();

	int* field = nullptr;
	bool firstClick = true;


	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

