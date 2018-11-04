help=''
for(i=0;i<256;i++)
	help+="if(pChild->Histo.L["+i+"]!=0)\nCheckBox"+i+"->Checked=true;\n";
console.log(help);