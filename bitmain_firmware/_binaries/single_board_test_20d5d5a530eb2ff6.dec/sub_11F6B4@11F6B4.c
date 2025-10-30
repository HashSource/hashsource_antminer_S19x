int __fastcall sub_11F6B4(int a1, _DWORD *a2, int a3, int a4)
{
  sub_B550C(a3, (unsigned __int8 *)"%*s", a4, &byte_1A4198);
  if ( *a2 )
  {
    sub_B69CC(a3, (int)"Not Before: ", 12);
    sub_12614C(a3, *a2);
    if ( !a2[1] )
      return 1;
    sub_B69CC(a3, (int)", ", 2);
  }
  if ( a2[1] )
  {
    sub_B69CC(a3, (int)"Not After: ", 11);
    sub_12614C(a3, a2[1]);
  }
  return 1;
}
