int __fastcall sub_16DA34(int a1, signed int a2)
{
  _DWORD *v4; // r0

  if ( a2 < 0 )
  {
    sub_D0048(40, 107, 103, (int)"crypto/ui/ui_lib.c", 435);
  }
  else
  {
    if ( a2 < sub_10C010(*(_DWORD *)(a1 + 4)) )
    {
      v4 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 4), a2);
      return sub_16DA24(v4);
    }
    sub_D0048(40, 107, 102, (int)"crypto/ui/ui_lib.c", 439);
  }
  return 0;
}
