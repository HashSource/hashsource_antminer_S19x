bool __fastcall sub_158688(int *a1, int a2, int a3, int a4)
{
  if ( a2 && !sub_B89E4(a2, a1[10]) || a3 && !sub_B89E4(a3, a1[17]) )
    return 0;
  if ( a4 )
    return sub_B89E4(a4, a1[18]) != 0;
  return 1;
}
