int __fastcall sub_DC8A4(int **a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int *v3; // r6
  int result; // r0
  _DWORD *v6; // r4
  int v7; // r2

  v2 = a2;
  v3 = *a1;
  while ( 1 )
  {
    v6 = (_DWORD *)v2[27];
    v7 = *v3;
    if ( v2 == v6 )
      break;
    result = sub_DC658(v2, 2, v7);
    v2 = v6;
    if ( a2 == v6 )
      return result;
  }
  return sub_DC658(v2, 2, v7);
}
