//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "ChildWin.h"
#include "Main.h"
#include "PtLevels.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPlotlevels1 *Plotlevels1;
//---------------------------------------------------------------------------
__fastcall TPlotlevels1::TPlotlevels1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPlotlevels1::PGLOkClick(TObject *Sender)
{
TMDIChild *Uno=(TMDIChild*)MainForm->ActiveMDIChild;
Screen->Cursor = crHourGlass;
if(Uno!=NULL){
        Graphics::TBitmap *Original = new Graphics::TBitmap;
        Graphics::TBitmap *Bitmap = new Graphics::TBitmap;
        Original->Assign(Uno->ActiveBitmap());
         if(R->Checked==true){
         Bitmap->Assign(Original);
         MainForm->Pdi->CanalRojoDet(Bitmap,StrToInt(first->Text),StrToInt(last->Text));
         String name=ExtractFilePath(Uno->FileName)+"\Detection Red Level:"+first->Text+"="+ExtractFileName(Uno->FileName);
         MainForm->CreateMDIChild(name ,Bitmap);
         }
         if(G->Checked==true){
         Bitmap->Assign(Original);
         MainForm->Pdi->CanalVerdeDet(Bitmap,StrToInt(first->Text),StrToInt(last->Text));
         String name=ExtractFilePath(Uno->FileName)+"\Detection Green Level:"+first->Text+"="+ExtractFileName(Uno->FileName);
         MainForm->CreateMDIChild(name ,Bitmap);
         }
         if(B->Checked==true){
         Bitmap->Assign(Original);
         MainForm->Pdi->CanalAzulDet(Bitmap,StrToInt(first->Text),StrToInt(last->Text));
         String name=ExtractFilePath(Uno->FileName)+"\Detection Blue Level:"+first->Text+"="+ExtractFileName(Uno->FileName);
         MainForm->CreateMDIChild(name ,Bitmap);
         }
         if(Gray->Checked==true){
         Bitmap->Assign(Original);
         MainForm->Pdi->CanalGrayDet(Bitmap,StrToInt(first->Text),StrToInt(last->Text));
         String name=ExtractFilePath(Uno->FileName)+"\Detection Gray Level :"+first->Text+"="+ExtractFileName(Uno->FileName);
         MainForm->CreateMDIChild(name ,Bitmap);
         }
    Bitmap->FreeImage();
    delete Bitmap;
    Original->FreeImage();
    delete Original;
}
Screen->Cursor = crDefault;
}
//---------------------------------------------------------------------------
void __fastcall TPlotlevels1::UpDown1Click(TObject *Sender,
      TUDBtnType Button)
{
if(UpDown1->Position>256){
UpDown1->Position=2;
}
if(UpDown1->Position<1){
UpDown1->Position=256;
}        
}
//---------------------------------------------------------------------------
void __fastcall TPlotlevels1::UpDown2Click(TObject *Sender,
      TUDBtnType Button)
{
if(UpDown2->Position>256){
UpDown2->Position=2;
}
if(UpDown2->Position<1){
UpDown2->Position=256;
}
}
//---------------------------------------------------------------------------
