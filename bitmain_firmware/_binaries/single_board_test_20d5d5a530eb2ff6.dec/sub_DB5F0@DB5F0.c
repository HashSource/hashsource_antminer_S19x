_DWORD *__fastcall sub_DB5F0(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r3
  _DWORD *v7; // r2
  int v8; // r7
  int (__fastcall *v9)(_DWORD *, int); // r3

  v1 = *(_DWORD **)a1;
  if ( !*(_DWORD *)a1 )
    return v1;
  v1 = (_DWORD *)v1[3];
  if ( !v1 )
    return v1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 && !sub_CDD6C(v3) )
  {
    sub_D0048(6, 156, 38, (int)"crypto/evp/pmeth_lib.c", 261);
    return 0;
  }
  else
  {
    v1 = (_DWORD *)CRYPTO_malloc(40, "crypto/evp/pmeth_lib.c", 265);
    if ( v1 )
    {
      v4 = *(_DWORD *)(a1 + 8);
      v5 = *(_DWORD *)(a1 + 4);
      *v1 = *(_DWORD *)a1;
      v1[1] = v5;
      if ( v4 )
      {
        sub_D9C08(v4);
        v4 = *(_DWORD *)(a1 + 8);
      }
      v6 = *(_DWORD *)(a1 + 12);
      v1[2] = v4;
      if ( v6 )
      {
        sub_D9C08(v6);
        v6 = *(_DWORD *)(a1 + 12);
      }
      v7 = *(_DWORD **)a1;
      v8 = *(_DWORD *)(a1 + 16);
      v1[3] = v6;
      v9 = (int (__fastcall *)(_DWORD *, int))v7[3];
      v1[4] = v8;
      v1[5] = 0;
      v1[6] = 0;
      if ( v9(v1, a1) > 0 )
        return v1;
      *v1 = 0;
      sub_DB4BC((int)v1);
      return 0;
    }
    else
    {
      sub_D0048(6, 156, 65, (int)"crypto/evp/pmeth_lib.c", 267);
      return 0;
    }
  }
}
