//---------------------------------------------------------------------------

#ifndef PtLevelsH
#define PtLevelsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include "Main.h"
#include "ChildWin.h"
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TPlotlevels1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TUpDown *UpDown1;
        TEdit *first;
        TEdit *last;
        TUpDown *UpDown2;
        TGroupBox *GroupBox2;
        TCheckBox *R;
        TCheckBox *G;
        TCheckBox *B;
        TCheckBox *Gray;
        TBitBtn *PGLOk;
        void __fastcall PGLOkClick(TObject *Sender);
        void __fastcall UpDown1Click(TObject *Sender, TUDBtnType Button);
        void __fastcall UpDown2Click(TObject *Sender, TUDBtnType Button);

private:	// User declarations
public:		// User declarations
        __fastcall TPlotlevels1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPlotlevels1 *Plotlevels1;
//---------------------------------------------------------------------------
#endif
