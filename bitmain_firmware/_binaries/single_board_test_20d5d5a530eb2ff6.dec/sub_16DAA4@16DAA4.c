int __fastcall sub_16DAA4(int a1, signed int a2)
{
  _DWORD *v4; // r0

  if ( a2 < 0 )
  {
    sub_D0048(40, 119, 103, (int)"crypto/ui/ui_lib.c", 448);
  }
  else
  {
    if ( a2 < sub_10C010(*(_DWORD *)(a1 + 4)) )
    {
      v4 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 4), a2);
      return sub_16DA94(v4);
    }
    sub_D0048(40, 119, 102, (int)"crypto/ui/ui_lib.c", 452);
  }
  return -1;
}
