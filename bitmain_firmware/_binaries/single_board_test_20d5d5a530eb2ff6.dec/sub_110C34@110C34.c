bool __fastcall sub_110C34(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r7
  void *v6; // r0
  unsigned int v7; // r4
  void *v8; // r0
  void *v9; // r1
  int v10; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1

  v2 = *(_DWORD **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = v2[9];
  if ( v4 )
  {
    v5 = sub_10C010(v4);
    v6 = (void *)v2[11];
    if ( v6 )
    {
      CRYPTO_free(v6);
      v2[11] = 0;
    }
    if ( v5 <= 0 )
    {
      if ( v5 )
      {
LABEL_18:
        v13 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 92) = 0;
        if ( !v13 )
          v13 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
        *(_DWORD *)(a1 + 100) = v13;
        *(_DWORD *)(a1 + 96) = 62;
        if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
          return 0;
      }
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (void *)sub_10C01C((_DWORD *)v2[9], v7++);
        if ( sub_122DC8(v3, v8, 0, v2[10], (int)(v2 + 11)) > 0 )
          break;
        if ( v5 == v7 )
          goto LABEL_18;
      }
    }
  }
  v9 = (void *)v2[12];
  if ( v9 && sub_122E40(v3, v9) <= 0 )
  {
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 92) = 0;
    if ( !v14 )
      v14 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
    *(_DWORD *)(a1 + 100) = v14;
    *(_DWORD *)(a1 + 96) = 63;
    if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      return 0;
  }
  v10 = v2[14];
  if ( !v10 || sub_122EB8(v3, v10, v2[15], 0) > 0 )
    return 1;
  v12 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 92) = 0;
  if ( !v12 )
    v12 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
  *(_DWORD *)(a1 + 100) = v12;
  *(_DWORD *)(a1 + 96) = 64;
  return (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) != 0;
}
