//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HistogramWin.h"
#include "ChildWin.h"
#include "Main.h"
#include "GLvlTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TGrayLevelsTable *GrayLevelsTable;
//---------------------------------------------------------------------------
__fastcall TGrayLevelsTable::TGrayLevelsTable(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGrayLevelsTable::OnDestroy(TObject *Sender)
{
MainForm->grayTable = false;
}
//---------------------------------------------------------------------------
void TGrayLevelsTable::NuevaTabla()
{
//Dibuja la imagen activa en el histograma
   TMDIChild *Child =(TMDIChild *)MainForm->ActiveMDIChild;
    String name="GrayLevelsTable="+ExtractFileName(Child->FileName);
    GrayLevelsTable->Caption=name;
    ClearButtons();
    drawButtons();
    for(int i=0; i<256; i++)
  {
   if(pChild->Histo.L[0]!=0)
        CheckBox0->Checked=true;
  }
}
void TGrayLevelsTable::drawButtons()
{
   for(int i=0; i<256; i++)
  {
   if(pChild->Histo.L[0]!=0)
CheckBox0->Checked=true;
if(pChild->Histo.L[1]!=0)
CheckBox1->Checked=true;
if(pChild->Histo.L[2]!=0)
CheckBox2->Checked=true;
if(pChild->Histo.L[3]!=0)
CheckBox3->Checked=true;
if(pChild->Histo.L[4]!=0)
CheckBox4->Checked=true;
if(pChild->Histo.L[5]!=0)
CheckBox5->Checked=true;
if(pChild->Histo.L[6]!=0)
CheckBox6->Checked=true;
if(pChild->Histo.L[7]!=0)
CheckBox7->Checked=true;
if(pChild->Histo.L[8]!=0)
CheckBox8->Checked=true;
if(pChild->Histo.L[9]!=0)
CheckBox9->Checked=true;
if(pChild->Histo.L[10]!=0)
CheckBox10->Checked=true;
if(pChild->Histo.L[11]!=0)
CheckBox11->Checked=true;
if(pChild->Histo.L[12]!=0)
CheckBox12->Checked=true;
if(pChild->Histo.L[13]!=0)
CheckBox13->Checked=true;
if(pChild->Histo.L[14]!=0)
CheckBox14->Checked=true;
if(pChild->Histo.L[15]!=0)
CheckBox15->Checked=true;
if(pChild->Histo.L[16]!=0)
CheckBox16->Checked=true;
if(pChild->Histo.L[17]!=0)
CheckBox17->Checked=true;
if(pChild->Histo.L[18]!=0)
CheckBox18->Checked=true;
if(pChild->Histo.L[19]!=0)
CheckBox19->Checked=true;
if(pChild->Histo.L[20]!=0)
CheckBox20->Checked=true;
if(pChild->Histo.L[21]!=0)
CheckBox21->Checked=true;
if(pChild->Histo.L[22]!=0)
CheckBox22->Checked=true;
if(pChild->Histo.L[23]!=0)
CheckBox23->Checked=true;
if(pChild->Histo.L[24]!=0)
CheckBox24->Checked=true;
if(pChild->Histo.L[25]!=0)
CheckBox25->Checked=true;
if(pChild->Histo.L[26]!=0)
CheckBox26->Checked=true;
if(pChild->Histo.L[27]!=0)
CheckBox27->Checked=true;
if(pChild->Histo.L[28]!=0)
CheckBox28->Checked=true;
if(pChild->Histo.L[29]!=0)
CheckBox29->Checked=true;
if(pChild->Histo.L[30]!=0)
CheckBox30->Checked=true;
if(pChild->Histo.L[31]!=0)
CheckBox31->Checked=true;
if(pChild->Histo.L[32]!=0)
CheckBox32->Checked=true;
if(pChild->Histo.L[33]!=0)
CheckBox33->Checked=true;
if(pChild->Histo.L[34]!=0)
CheckBox34->Checked=true;
if(pChild->Histo.L[35]!=0)
CheckBox35->Checked=true;
if(pChild->Histo.L[36]!=0)
CheckBox36->Checked=true;
if(pChild->Histo.L[37]!=0)
CheckBox37->Checked=true;
if(pChild->Histo.L[38]!=0)
CheckBox38->Checked=true;
if(pChild->Histo.L[39]!=0)
CheckBox39->Checked=true;
if(pChild->Histo.L[40]!=0)
CheckBox40->Checked=true;
if(pChild->Histo.L[41]!=0)
CheckBox41->Checked=true;
if(pChild->Histo.L[42]!=0)
CheckBox42->Checked=true;
if(pChild->Histo.L[43]!=0)
CheckBox43->Checked=true;
if(pChild->Histo.L[44]!=0)
CheckBox44->Checked=true;
if(pChild->Histo.L[45]!=0)
CheckBox45->Checked=true;
if(pChild->Histo.L[46]!=0)
CheckBox46->Checked=true;
if(pChild->Histo.L[47]!=0)
CheckBox47->Checked=true;
if(pChild->Histo.L[48]!=0)
CheckBox48->Checked=true;
if(pChild->Histo.L[49]!=0)
CheckBox49->Checked=true;
if(pChild->Histo.L[50]!=0)
CheckBox50->Checked=true;
if(pChild->Histo.L[51]!=0)
CheckBox51->Checked=true;
if(pChild->Histo.L[52]!=0)
CheckBox52->Checked=true;
if(pChild->Histo.L[53]!=0)
CheckBox53->Checked=true;
if(pChild->Histo.L[54]!=0)
CheckBox54->Checked=true;
if(pChild->Histo.L[55]!=0)
CheckBox55->Checked=true;
if(pChild->Histo.L[56]!=0)
CheckBox56->Checked=true;
if(pChild->Histo.L[57]!=0)
CheckBox57->Checked=true;
if(pChild->Histo.L[58]!=0)
CheckBox58->Checked=true;
if(pChild->Histo.L[59]!=0)
CheckBox59->Checked=true;
if(pChild->Histo.L[60]!=0)
CheckBox60->Checked=true;
if(pChild->Histo.L[61]!=0)
CheckBox61->Checked=true;
if(pChild->Histo.L[62]!=0)
CheckBox62->Checked=true;
if(pChild->Histo.L[63]!=0)
CheckBox63->Checked=true;
if(pChild->Histo.L[64]!=0)
CheckBox64->Checked=true;
if(pChild->Histo.L[65]!=0)
CheckBox65->Checked=true;
if(pChild->Histo.L[66]!=0)
CheckBox66->Checked=true;
if(pChild->Histo.L[67]!=0)
CheckBox67->Checked=true;
if(pChild->Histo.L[68]!=0)
CheckBox68->Checked=true;
if(pChild->Histo.L[69]!=0)
CheckBox69->Checked=true;
if(pChild->Histo.L[70]!=0)
CheckBox70->Checked=true;
if(pChild->Histo.L[71]!=0)
CheckBox71->Checked=true;
if(pChild->Histo.L[72]!=0)
CheckBox72->Checked=true;
if(pChild->Histo.L[73]!=0)
CheckBox73->Checked=true;
if(pChild->Histo.L[74]!=0)
CheckBox74->Checked=true;
if(pChild->Histo.L[75]!=0)
CheckBox75->Checked=true;
if(pChild->Histo.L[76]!=0)
CheckBox76->Checked=true;
if(pChild->Histo.L[77]!=0)
CheckBox77->Checked=true;
if(pChild->Histo.L[78]!=0)
CheckBox78->Checked=true;
if(pChild->Histo.L[79]!=0)
CheckBox79->Checked=true;
if(pChild->Histo.L[80]!=0)
CheckBox80->Checked=true;
if(pChild->Histo.L[81]!=0)
CheckBox81->Checked=true;
if(pChild->Histo.L[82]!=0)
CheckBox82->Checked=true;
if(pChild->Histo.L[83]!=0)
CheckBox83->Checked=true;
if(pChild->Histo.L[84]!=0)
CheckBox84->Checked=true;
if(pChild->Histo.L[85]!=0)
CheckBox85->Checked=true;
if(pChild->Histo.L[86]!=0)
CheckBox86->Checked=true;
if(pChild->Histo.L[87]!=0)
CheckBox87->Checked=true;
if(pChild->Histo.L[88]!=0)
CheckBox88->Checked=true;
if(pChild->Histo.L[89]!=0)
CheckBox89->Checked=true;
if(pChild->Histo.L[90]!=0)
CheckBox90->Checked=true;
if(pChild->Histo.L[91]!=0)
CheckBox91->Checked=true;
if(pChild->Histo.L[92]!=0)
CheckBox92->Checked=true;
if(pChild->Histo.L[93]!=0)
CheckBox93->Checked=true;
if(pChild->Histo.L[94]!=0)
CheckBox94->Checked=true;
if(pChild->Histo.L[95]!=0)
CheckBox95->Checked=true;
if(pChild->Histo.L[96]!=0)
CheckBox96->Checked=true;
if(pChild->Histo.L[97]!=0)
CheckBox97->Checked=true;
if(pChild->Histo.L[98]!=0)
CheckBox98->Checked=true;
if(pChild->Histo.L[99]!=0)
CheckBox99->Checked=true;
if(pChild->Histo.L[100]!=0)
CheckBox100->Checked=true;
if(pChild->Histo.L[101]!=0)
CheckBox101->Checked=true;
if(pChild->Histo.L[102]!=0)
CheckBox102->Checked=true;
if(pChild->Histo.L[103]!=0)
CheckBox103->Checked=true;
if(pChild->Histo.L[104]!=0)
CheckBox104->Checked=true;
if(pChild->Histo.L[105]!=0)
CheckBox105->Checked=true;
if(pChild->Histo.L[106]!=0)
CheckBox106->Checked=true;
if(pChild->Histo.L[107]!=0)
CheckBox107->Checked=true;
if(pChild->Histo.L[108]!=0)
CheckBox108->Checked=true;
if(pChild->Histo.L[109]!=0)
CheckBox109->Checked=true;
if(pChild->Histo.L[110]!=0)
CheckBox110->Checked=true;
if(pChild->Histo.L[111]!=0)
CheckBox111->Checked=true;
if(pChild->Histo.L[112]!=0)
CheckBox112->Checked=true;
if(pChild->Histo.L[113]!=0)
CheckBox113->Checked=true;
if(pChild->Histo.L[114]!=0)
CheckBox114->Checked=true;
if(pChild->Histo.L[115]!=0)
CheckBox115->Checked=true;
if(pChild->Histo.L[116]!=0)
CheckBox116->Checked=true;
if(pChild->Histo.L[117]!=0)
CheckBox117->Checked=true;
if(pChild->Histo.L[118]!=0)
CheckBox118->Checked=true;
if(pChild->Histo.L[119]!=0)
CheckBox119->Checked=true;
if(pChild->Histo.L[120]!=0)
CheckBox120->Checked=true;
if(pChild->Histo.L[121]!=0)
CheckBox121->Checked=true;
if(pChild->Histo.L[122]!=0)
CheckBox122->Checked=true;
if(pChild->Histo.L[123]!=0)
CheckBox123->Checked=true;
if(pChild->Histo.L[124]!=0)
CheckBox124->Checked=true;
if(pChild->Histo.L[125]!=0)
CheckBox125->Checked=true;
if(pChild->Histo.L[126]!=0)
CheckBox126->Checked=true;
if(pChild->Histo.L[127]!=0)
CheckBox127->Checked=true;
if(pChild->Histo.L[128]!=0)
CheckBox128->Checked=true;
if(pChild->Histo.L[129]!=0)
CheckBox129->Checked=true;
if(pChild->Histo.L[130]!=0)
CheckBox130->Checked=true;
if(pChild->Histo.L[131]!=0)
CheckBox131->Checked=true;
if(pChild->Histo.L[132]!=0)
CheckBox132->Checked=true;
if(pChild->Histo.L[133]!=0)
CheckBox133->Checked=true;
if(pChild->Histo.L[134]!=0)
CheckBox134->Checked=true;
if(pChild->Histo.L[135]!=0)
CheckBox135->Checked=true;
if(pChild->Histo.L[136]!=0)
CheckBox136->Checked=true;
if(pChild->Histo.L[137]!=0)
CheckBox137->Checked=true;
if(pChild->Histo.L[138]!=0)
CheckBox138->Checked=true;
if(pChild->Histo.L[139]!=0)
CheckBox139->Checked=true;
if(pChild->Histo.L[140]!=0)
CheckBox140->Checked=true;
if(pChild->Histo.L[141]!=0)
CheckBox141->Checked=true;
if(pChild->Histo.L[142]!=0)
CheckBox142->Checked=true;
if(pChild->Histo.L[143]!=0)
CheckBox143->Checked=true;
if(pChild->Histo.L[144]!=0)
CheckBox144->Checked=true;
if(pChild->Histo.L[145]!=0)
CheckBox145->Checked=true;
if(pChild->Histo.L[146]!=0)
CheckBox146->Checked=true;
if(pChild->Histo.L[147]!=0)
CheckBox147->Checked=true;
if(pChild->Histo.L[148]!=0)
CheckBox148->Checked=true;
if(pChild->Histo.L[149]!=0)
CheckBox149->Checked=true;
if(pChild->Histo.L[150]!=0)
CheckBox150->Checked=true;
if(pChild->Histo.L[151]!=0)
CheckBox151->Checked=true;
if(pChild->Histo.L[152]!=0)
CheckBox152->Checked=true;
if(pChild->Histo.L[153]!=0)
CheckBox153->Checked=true;
if(pChild->Histo.L[154]!=0)
CheckBox154->Checked=true;
if(pChild->Histo.L[155]!=0)
CheckBox155->Checked=true;
if(pChild->Histo.L[156]!=0)
CheckBox156->Checked=true;
if(pChild->Histo.L[157]!=0)
CheckBox157->Checked=true;
if(pChild->Histo.L[158]!=0)
CheckBox158->Checked=true;
if(pChild->Histo.L[159]!=0)
CheckBox159->Checked=true;
if(pChild->Histo.L[160]!=0)
CheckBox160->Checked=true;
if(pChild->Histo.L[161]!=0)
CheckBox161->Checked=true;
if(pChild->Histo.L[162]!=0)
CheckBox162->Checked=true;
if(pChild->Histo.L[163]!=0)
CheckBox163->Checked=true;
if(pChild->Histo.L[164]!=0)
CheckBox164->Checked=true;
if(pChild->Histo.L[165]!=0)
CheckBox165->Checked=true;
if(pChild->Histo.L[166]!=0)
CheckBox166->Checked=true;
if(pChild->Histo.L[167]!=0)
CheckBox167->Checked=true;
if(pChild->Histo.L[168]!=0)
CheckBox168->Checked=true;
if(pChild->Histo.L[169]!=0)
CheckBox169->Checked=true;
if(pChild->Histo.L[170]!=0)
CheckBox170->Checked=true;
if(pChild->Histo.L[171]!=0)
CheckBox171->Checked=true;
if(pChild->Histo.L[172]!=0)
CheckBox172->Checked=true;
if(pChild->Histo.L[173]!=0)
CheckBox173->Checked=true;
if(pChild->Histo.L[174]!=0)
CheckBox174->Checked=true;
if(pChild->Histo.L[175]!=0)
CheckBox175->Checked=true;
if(pChild->Histo.L[176]!=0)
CheckBox176->Checked=true;
if(pChild->Histo.L[177]!=0)
CheckBox177->Checked=true;
if(pChild->Histo.L[178]!=0)
CheckBox178->Checked=true;
if(pChild->Histo.L[179]!=0)
CheckBox179->Checked=true;
if(pChild->Histo.L[180]!=0)
CheckBox180->Checked=true;
if(pChild->Histo.L[181]!=0)
CheckBox181->Checked=true;
if(pChild->Histo.L[182]!=0)
CheckBox182->Checked=true;
if(pChild->Histo.L[183]!=0)
CheckBox183->Checked=true;
if(pChild->Histo.L[184]!=0)
CheckBox184->Checked=true;
if(pChild->Histo.L[185]!=0)
CheckBox185->Checked=true;
if(pChild->Histo.L[186]!=0)
CheckBox186->Checked=true;
if(pChild->Histo.L[187]!=0)
CheckBox187->Checked=true;
if(pChild->Histo.L[188]!=0)
CheckBox188->Checked=true;
if(pChild->Histo.L[189]!=0)
CheckBox189->Checked=true;
if(pChild->Histo.L[190]!=0)
CheckBox190->Checked=true;
if(pChild->Histo.L[191]!=0)
CheckBox191->Checked=true;
if(pChild->Histo.L[192]!=0)
CheckBox192->Checked=true;
if(pChild->Histo.L[193]!=0)
CheckBox193->Checked=true;
if(pChild->Histo.L[194]!=0)
CheckBox194->Checked=true;
if(pChild->Histo.L[195]!=0)
CheckBox195->Checked=true;
if(pChild->Histo.L[196]!=0)
CheckBox196->Checked=true;
if(pChild->Histo.L[197]!=0)
CheckBox197->Checked=true;
if(pChild->Histo.L[198]!=0)
CheckBox198->Checked=true;
if(pChild->Histo.L[199]!=0)
CheckBox199->Checked=true;
if(pChild->Histo.L[200]!=0)
CheckBox200->Checked=true;
if(pChild->Histo.L[201]!=0)
CheckBox201->Checked=true;
if(pChild->Histo.L[202]!=0)
CheckBox202->Checked=true;
if(pChild->Histo.L[203]!=0)
CheckBox203->Checked=true;
if(pChild->Histo.L[204]!=0)
CheckBox204->Checked=true;
if(pChild->Histo.L[205]!=0)
CheckBox205->Checked=true;
if(pChild->Histo.L[206]!=0)
CheckBox206->Checked=true;
if(pChild->Histo.L[207]!=0)
CheckBox207->Checked=true;
if(pChild->Histo.L[208]!=0)
CheckBox208->Checked=true;
if(pChild->Histo.L[209]!=0)
CheckBox209->Checked=true;
if(pChild->Histo.L[210]!=0)
CheckBox210->Checked=true;
if(pChild->Histo.L[211]!=0)
CheckBox211->Checked=true;
if(pChild->Histo.L[212]!=0)
CheckBox212->Checked=true;
if(pChild->Histo.L[213]!=0)
CheckBox213->Checked=true;
if(pChild->Histo.L[214]!=0)
CheckBox214->Checked=true;
if(pChild->Histo.L[215]!=0)
CheckBox215->Checked=true;
if(pChild->Histo.L[216]!=0)
CheckBox216->Checked=true;
if(pChild->Histo.L[217]!=0)
CheckBox217->Checked=true;
if(pChild->Histo.L[218]!=0)
CheckBox218->Checked=true;
if(pChild->Histo.L[219]!=0)
CheckBox219->Checked=true;
if(pChild->Histo.L[220]!=0)
CheckBox220->Checked=true;
if(pChild->Histo.L[221]!=0)
CheckBox221->Checked=true;
if(pChild->Histo.L[222]!=0)
CheckBox222->Checked=true;
if(pChild->Histo.L[223]!=0)
CheckBox223->Checked=true;
if(pChild->Histo.L[224]!=0)
CheckBox224->Checked=true;
if(pChild->Histo.L[225]!=0)
CheckBox225->Checked=true;
if(pChild->Histo.L[226]!=0)
CheckBox226->Checked=true;
if(pChild->Histo.L[227]!=0)
CheckBox227->Checked=true;
if(pChild->Histo.L[228]!=0)
CheckBox228->Checked=true;
if(pChild->Histo.L[229]!=0)
CheckBox229->Checked=true;
if(pChild->Histo.L[230]!=0)
CheckBox230->Checked=true;
if(pChild->Histo.L[231]!=0)
CheckBox231->Checked=true;
if(pChild->Histo.L[232]!=0)
CheckBox232->Checked=true;
if(pChild->Histo.L[233]!=0)
CheckBox233->Checked=true;
if(pChild->Histo.L[234]!=0)
CheckBox234->Checked=true;
if(pChild->Histo.L[235]!=0)
CheckBox235->Checked=true;
if(pChild->Histo.L[236]!=0)
CheckBox236->Checked=true;
if(pChild->Histo.L[237]!=0)
CheckBox237->Checked=true;
if(pChild->Histo.L[238]!=0)
CheckBox238->Checked=true;
if(pChild->Histo.L[239]!=0)
CheckBox239->Checked=true;
if(pChild->Histo.L[240]!=0)
CheckBox240->Checked=true;
if(pChild->Histo.L[241]!=0)
CheckBox241->Checked=true;
if(pChild->Histo.L[242]!=0)
CheckBox242->Checked=true;
if(pChild->Histo.L[243]!=0)
CheckBox243->Checked=true;
if(pChild->Histo.L[244]!=0)
CheckBox244->Checked=true;
if(pChild->Histo.L[245]!=0)
CheckBox245->Checked=true;
if(pChild->Histo.L[246]!=0)
CheckBox246->Checked=true;
if(pChild->Histo.L[247]!=0)
CheckBox247->Checked=true;
if(pChild->Histo.L[248]!=0)
CheckBox248->Checked=true;
if(pChild->Histo.L[249]!=0)
CheckBox249->Checked=true;
if(pChild->Histo.L[250]!=0)
CheckBox250->Checked=true;
if(pChild->Histo.L[251]!=0)
CheckBox251->Checked=true;
if(pChild->Histo.L[252]!=0)
CheckBox252->Checked=true;
if(pChild->Histo.L[253]!=0)
CheckBox253->Checked=true;
if(pChild->Histo.L[254]!=0)
CheckBox254->Checked=true;
if(pChild->Histo.L[255]!=0)
CheckBox255->Checked=true;
  }
}
void TGrayLevelsTable::ClearButtons()
{
CheckBox0->Checked=false;
CheckBox1->Checked=false;
CheckBox2->Checked=false;
CheckBox3->Checked=false;
CheckBox4->Checked=false;
CheckBox5->Checked=false;
CheckBox6->Checked=false;
CheckBox7->Checked=false;
CheckBox8->Checked=false;
CheckBox9->Checked=false;
CheckBox10->Checked=false;
CheckBox11->Checked=false;
CheckBox12->Checked=false;
CheckBox13->Checked=false;
CheckBox14->Checked=false;
CheckBox15->Checked=false;
CheckBox16->Checked=false;
CheckBox17->Checked=false;
CheckBox18->Checked=false;
CheckBox19->Checked=false;
CheckBox20->Checked=false;
CheckBox21->Checked=false;
CheckBox22->Checked=false;
CheckBox23->Checked=false;
CheckBox24->Checked=false;
CheckBox25->Checked=false;
CheckBox26->Checked=false;
CheckBox27->Checked=false;
CheckBox28->Checked=false;
CheckBox29->Checked=false;
CheckBox30->Checked=false;
CheckBox31->Checked=false;
CheckBox32->Checked=false;
CheckBox33->Checked=false;
CheckBox34->Checked=false;
CheckBox35->Checked=false;
CheckBox36->Checked=false;
CheckBox37->Checked=false;
CheckBox38->Checked=false;
CheckBox39->Checked=false;
CheckBox40->Checked=false;
CheckBox41->Checked=false;
CheckBox42->Checked=false;
CheckBox43->Checked=false;
CheckBox44->Checked=false;
CheckBox45->Checked=false;
CheckBox46->Checked=false;
CheckBox47->Checked=false;
CheckBox48->Checked=false;
CheckBox49->Checked=false;
CheckBox50->Checked=false;
CheckBox51->Checked=false;
CheckBox52->Checked=false;
CheckBox53->Checked=false;
CheckBox54->Checked=false;
CheckBox55->Checked=false;
CheckBox56->Checked=false;
CheckBox57->Checked=false;
CheckBox58->Checked=false;
CheckBox59->Checked=false;
CheckBox60->Checked=false;
CheckBox61->Checked=false;
CheckBox62->Checked=false;
CheckBox63->Checked=false;
CheckBox64->Checked=false;
CheckBox65->Checked=false;
CheckBox66->Checked=false;
CheckBox67->Checked=false;
CheckBox68->Checked=false;
CheckBox69->Checked=false;
CheckBox70->Checked=false;
CheckBox71->Checked=false;
CheckBox72->Checked=false;
CheckBox73->Checked=false;
CheckBox74->Checked=false;
CheckBox75->Checked=false;
CheckBox76->Checked=false;
CheckBox77->Checked=false;
CheckBox78->Checked=false;
CheckBox79->Checked=false;
CheckBox80->Checked=false;
CheckBox81->Checked=false;
CheckBox82->Checked=false;
CheckBox83->Checked=false;
CheckBox84->Checked=false;
CheckBox85->Checked=false;
CheckBox86->Checked=false;
CheckBox87->Checked=false;
CheckBox88->Checked=false;
CheckBox89->Checked=false;
CheckBox90->Checked=false;
CheckBox91->Checked=false;
CheckBox92->Checked=false;
CheckBox93->Checked=false;
CheckBox94->Checked=false;
CheckBox95->Checked=false;
CheckBox96->Checked=false;
CheckBox97->Checked=false;
CheckBox98->Checked=false;
CheckBox99->Checked=false;
CheckBox100->Checked=false;
CheckBox101->Checked=false;
CheckBox102->Checked=false;
CheckBox103->Checked=false;
CheckBox104->Checked=false;
CheckBox105->Checked=false;
CheckBox106->Checked=false;
CheckBox107->Checked=false;
CheckBox108->Checked=false;
CheckBox109->Checked=false;
CheckBox110->Checked=false;
CheckBox111->Checked=false;
CheckBox112->Checked=false;
CheckBox113->Checked=false;
CheckBox114->Checked=false;
CheckBox115->Checked=false;
CheckBox116->Checked=false;
CheckBox117->Checked=false;
CheckBox118->Checked=false;
CheckBox119->Checked=false;
CheckBox120->Checked=false;
CheckBox121->Checked=false;
CheckBox122->Checked=false;
CheckBox123->Checked=false;
CheckBox124->Checked=false;
CheckBox125->Checked=false;
CheckBox126->Checked=false;
CheckBox127->Checked=false;
CheckBox128->Checked=false;
CheckBox129->Checked=false;
CheckBox130->Checked=false;
CheckBox131->Checked=false;
CheckBox132->Checked=false;
CheckBox133->Checked=false;
CheckBox134->Checked=false;
CheckBox135->Checked=false;
CheckBox136->Checked=false;
CheckBox137->Checked=false;
CheckBox138->Checked=false;
CheckBox139->Checked=false;
CheckBox140->Checked=false;
CheckBox141->Checked=false;
CheckBox142->Checked=false;
CheckBox143->Checked=false;
CheckBox144->Checked=false;
CheckBox145->Checked=false;
CheckBox146->Checked=false;
CheckBox147->Checked=false;
CheckBox148->Checked=false;
CheckBox149->Checked=false;
CheckBox150->Checked=false;
CheckBox151->Checked=false;
CheckBox152->Checked=false;
CheckBox153->Checked=false;
CheckBox154->Checked=false;
CheckBox155->Checked=false;
CheckBox156->Checked=false;
CheckBox157->Checked=false;
CheckBox158->Checked=false;
CheckBox159->Checked=false;
CheckBox160->Checked=false;
CheckBox161->Checked=false;
CheckBox162->Checked=false;
CheckBox163->Checked=false;
CheckBox164->Checked=false;
CheckBox165->Checked=false;
CheckBox166->Checked=false;
CheckBox167->Checked=false;
CheckBox168->Checked=false;
CheckBox169->Checked=false;
CheckBox170->Checked=false;
CheckBox171->Checked=false;
CheckBox172->Checked=false;
CheckBox173->Checked=false;
CheckBox174->Checked=false;
CheckBox175->Checked=false;
CheckBox176->Checked=false;
CheckBox177->Checked=false;
CheckBox178->Checked=false;
CheckBox179->Checked=false;
CheckBox180->Checked=false;
CheckBox181->Checked=false;
CheckBox182->Checked=false;
CheckBox183->Checked=false;
CheckBox184->Checked=false;
CheckBox185->Checked=false;
CheckBox186->Checked=false;
CheckBox187->Checked=false;
CheckBox188->Checked=false;
CheckBox189->Checked=false;
CheckBox190->Checked=false;
CheckBox191->Checked=false;
CheckBox192->Checked=false;
CheckBox193->Checked=false;
CheckBox194->Checked=false;
CheckBox195->Checked=false;
CheckBox196->Checked=false;
CheckBox197->Checked=false;
CheckBox198->Checked=false;
CheckBox199->Checked=false;
CheckBox200->Checked=false;
CheckBox201->Checked=false;
CheckBox202->Checked=false;
CheckBox203->Checked=false;
CheckBox204->Checked=false;
CheckBox205->Checked=false;
CheckBox206->Checked=false;
CheckBox207->Checked=false;
CheckBox208->Checked=false;
CheckBox209->Checked=false;
CheckBox210->Checked=false;
CheckBox211->Checked=false;
CheckBox212->Checked=false;
CheckBox213->Checked=false;
CheckBox214->Checked=false;
CheckBox215->Checked=false;
CheckBox216->Checked=false;
CheckBox217->Checked=false;
CheckBox218->Checked=false;
CheckBox219->Checked=false;
CheckBox220->Checked=false;
CheckBox221->Checked=false;
CheckBox222->Checked=false;
CheckBox223->Checked=false;
CheckBox224->Checked=false;
CheckBox225->Checked=false;
CheckBox226->Checked=false;
CheckBox227->Checked=false;
CheckBox228->Checked=false;
CheckBox229->Checked=false;
CheckBox230->Checked=false;
CheckBox231->Checked=false;
CheckBox232->Checked=false;
CheckBox233->Checked=false;
CheckBox234->Checked=false;
CheckBox235->Checked=false;
CheckBox236->Checked=false;
CheckBox237->Checked=false;
CheckBox238->Checked=false;
CheckBox239->Checked=false;
CheckBox240->Checked=false;
CheckBox241->Checked=false;
CheckBox242->Checked=false;
CheckBox243->Checked=false;
CheckBox244->Checked=false;
CheckBox245->Checked=false;
CheckBox246->Checked=false;
CheckBox247->Checked=false;
CheckBox248->Checked=false;
CheckBox249->Checked=false;
CheckBox250->Checked=false;
CheckBox251->Checked=false;
CheckBox252->Checked=false;
CheckBox253->Checked=false;
CheckBox254->Checked=false;
CheckBox255->Checked=false;
}




