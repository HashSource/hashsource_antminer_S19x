int __fastcall sub_1BC7C(int a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_25A6BC("IVO ", a1);
  if ( (a2 & 2) != 0 )
    sub_25A6BC("DVZ ", a1);
  if ( (a2 & 4) != 0 )
    sub_25A6BC("OFL ", a1);
  if ( (a2 & 8) != 0 )
    sub_25A6BC("UFL ", a1);
  if ( (a2 & 0x10) != 0 )
    sub_25A6BC("INX ", a1);
  return sub_25A4FC(10, a1);
}
