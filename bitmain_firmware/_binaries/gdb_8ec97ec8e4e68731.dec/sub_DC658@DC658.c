int __fastcall sub_DC658(_DWORD *a1, int a2, int a3)
{
  int v4; // r5
  void *v7; // r5
  int v8; // r1
  int v9; // r2
  _DWORD *i; // r6
  int v12; // r0
  int v13; // r0

  v4 = a1[3];
  if ( v4 == 2 )
  {
    v12 = sub_C6A54();
    v13 = off_489A04(&dword_4899A0, 2, v12 + 1, 0);
    if ( !v13 )
      sub_946E0("No hardware breakpoint support in the target.");
    if ( v13 < 0 )
      sub_946E0("Hardware breakpoints used exceeds limit.");
    v4 = a1[3];
  }
  if ( (unsigned int)(v4 - 6) <= 3 )
  {
    v7 = sub_92E28();
    a1[4] = 1;
    sub_C96DC((int)a1, 1);
    sub_92E40((int)v7);
  }
  a1[4] = 1;
  sub_CA274((int)(a1 + 3), a1 + 7);
  if ( off_489B54(&dword_4899A0) )
  {
    if ( *(_DWORD *)(sub_249744() + 8) )
    {
      if ( (unsigned int)(a1[3] - 27) <= 2 )
      {
        for ( i = (_DWORD *)a1[7]; i; i = (_DWORD *)*i )
          off_489BA4(&dword_4899A0, i);
      }
    }
  }
  a1[5] = a2;
  a1[10] = a3;
  sub_D72EC(1, v8, v9);
  return sub_1B9D50(a1);
}
