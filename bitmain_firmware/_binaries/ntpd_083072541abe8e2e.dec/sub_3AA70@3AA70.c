int __fastcall sub_3AA70(_DWORD *a1, int a2)
{
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r2
  _DWORD *v7; // r0
  _DWORD *v8; // r1

  v4 = (_DWORD *)*a1;
  if ( *a1 && (v5 = v4[1]) != 0 )
  {
    v6 = v5 - 1;
  }
  else
  {
    v7 = (_DWORD *)sub_63BA4(0, 260, 0, 0);
    v8 = (_DWORD *)*a1;
    v6 = 62;
    v4 = v7;
    v7[1] = 63;
    *v7 = v8;
    *a1 = v7;
  }
  v4[1] = v6;
  v4[v6 + 2] = a2;
  return 1;
}
