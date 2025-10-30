bool __fastcall sub_30BBB0(_DWORD *a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r4
  unsigned int v5; // r1
  _DWORD *v6; // r2
  int v7; // r2

  v3 = a1[1448];
  v4 = a1[1446];
  *(_WORD *)(a1[1449] + 2 * v3) = a2;
  a1[1448] = v3 + 1;
  *(_BYTE *)(v4 + v3) = a3;
  if ( a2 )
  {
    v5 = a2 - 1;
    ++a1[1452];
    v6 = &a1[length_code[a3]];
    ++*((_WORD *)v6 + 588);
    if ( v5 > 0xFF )
      v7 = (unsigned __int8)dist_code[(v5 >> 7) + 256];
    else
      v7 = (unsigned __int8)dist_code[v5];
    ++LOWORD(a1[v7 + 610]);
  }
  else
  {
    ++LOWORD(a1[a3 + 37]);
  }
  return a1[1447] - 1 == a1[1448];
}
