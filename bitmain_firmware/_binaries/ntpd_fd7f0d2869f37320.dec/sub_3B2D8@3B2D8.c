int __fastcall sub_3B2D8(_DWORD *a1, int a2)
{
  _DWORD *v3; // r3
  int v5; // r2
  int v6; // r2
  _DWORD *v7; // r0

  v3 = (_DWORD *)*a1;
  if ( *a1 && (v5 = v3[1]) != 0 )
  {
    v6 = v5 - 1;
  }
  else
  {
    v7 = (_DWORD *)sub_64B04(0, 260, 0, 0);
    v6 = 62;
    v3 = v7;
    *v7 = *a1;
    v7[1] = 63;
    *a1 = v7;
  }
  v3[1] = v6;
  v3[v6 + 2] = a2;
  return 1;
}
