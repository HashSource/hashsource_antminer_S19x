int __fastcall sub_2B72EC(int a1, int a2, int a3, _BYTE *a4)
{
  __int16 v4; // r4
  _BYTE *v5; // r5

  v4 = a3;
  v5 = a4 + 2;
  if ( (*(_DWORD *)(a2 + 8) == 1) == a1 )
  {
    sub_2AB5CC(SHIWORD(a3), a4);
    return sub_2AB5CC(v4, v5);
  }
  else
  {
    sub_2AB5DC(SHIWORD(a3), a4);
    return sub_2AB5DC(v4, v5);
  }
}
