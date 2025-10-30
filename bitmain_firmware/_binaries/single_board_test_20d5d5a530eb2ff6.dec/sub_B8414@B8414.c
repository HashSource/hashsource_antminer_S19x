int __fastcall sub_B8414(int a1, int a2, int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r3
  int v5; // r3
  unsigned int v6; // r5
  unsigned int v7; // r4
  int v8; // r2
  int v9; // r0
  int v10; // r1
  unsigned int v11; // t1
  unsigned int v12; // t1

  if ( !a3 )
    return 0;
  v3 = *(_DWORD *)(a1 + 4 * (a3 + 0x3FFFFFFF));
  v4 = *(_DWORD *)(a2 + 4 * (a3 + 0x3FFFFFFF));
  if ( v3 != v4 )
  {
    if ( v3 > v4 )
      return 1;
    else
      return -1;
  }
  v5 = a3 - 2;
  if ( a3 - 2 < 0 )
    return 0;
  v6 = *(_DWORD *)(a1 + 4 * v5);
  v7 = *(_DWORD *)(a2 + 4 * v5);
  if ( v7 == v6 )
  {
    v8 = 4 * (a3 + 1073741822);
    v9 = a1 + v8;
    v10 = a2 + v8;
    while ( v5-- != 0 )
    {
      v11 = *(_DWORD *)(v9 - 4);
      v9 -= 4;
      v6 = v11;
      v12 = *(_DWORD *)(v10 - 4);
      v10 -= 4;
      v7 = v12;
      if ( v6 != v12 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  if ( v6 > v7 )
    return 1;
  else
    return -1;
}
