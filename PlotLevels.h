//---------------------------------------------------------------------------

#ifndef PlotLevelsH
#define PlotLevelsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "HistogramWin.h"
#include "ChildWin.h"
#include "Main.h"
#include "GLvlTable.h"
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TPlotlevels : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TUpDown *UpDown1;
        TEdit *first;
        TEdit *last;
        TUpDown *UpDown2;
        TLabel *Label1;
        TLabel *Label2;
        TGroupBox *GroupBox2;
        TCheckBox *R;
        TCheckBox *G;
        TCheckBox *B;
        TCheckBox *Gray;
        TBitBtn *PGLOk;
private:	// User declarations
public:		// User declarations
        __fastcall TPlotlevels(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPlotlevels *Plotlevels;
//---------------------------------------------------------------------------
#endif
