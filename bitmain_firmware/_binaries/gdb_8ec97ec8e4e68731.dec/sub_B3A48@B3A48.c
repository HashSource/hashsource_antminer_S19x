int __fastcall sub_B3A48(int a1, int a2, int a3, int a4)
{
  bool v7; // zf

  if ( a1 > 255 || (a1 & 0xFFFFFF80) != 0 || !isprint(a1) )
    return sub_25A418(a3, "[\"%0*x\"]");
  v7 = a1 == a4;
  if ( a1 == a4 )
    v7 = a1 == 34;
  if ( v7 )
    return sub_25A418(a3, "\"\"");
  else
    return sub_25A418(a3, "%c");
}
