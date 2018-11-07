//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HistogramWin.h"
#include "ChildWin.h"
#include "Main.h"
#include "GLvlTable.h"
#include "PlotLevels.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TPlotlevels *Plotlevels;
//---------------------------------------------------------------------------
__fastcall TPlotlevels::TPlotlevels(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

