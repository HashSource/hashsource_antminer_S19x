int __fastcall sub_10F1B4(int a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r5
  int result; // r0
  bool v7; // cc
  unsigned int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  int v11; // r5

  v4 = 0;
  v5 = *(_DWORD **)(a1 + 8);
  while ( 1 )
  {
    v7 = v4 < sub_10C010((int)v5);
    v8 = v4++;
    if ( !v7 )
      break;
    result = sub_10C01C(v5, v8);
    if ( *(_DWORD *)(result + 8) == a2 )
      return result;
  }
  v9 = sub_10EF00(a2);
  v10 = v9;
  if ( v9 )
  {
    v9[4] = a1;
    v11 = sub_10BD3C(*(int **)(a1 + 8), (int)v9);
    result = (int)v10;
    if ( !v11 )
    {
      sub_D0048(11, 157, 65, (int)"crypto/x509/x509_lu.c", 269);
      sub_10EF50(v10);
      return 0;
    }
  }
  else
  {
    sub_D0048(11, 157, 65, (int)"crypto/x509/x509_lu.c", 261);
    return 0;
  }
  return result;
}
