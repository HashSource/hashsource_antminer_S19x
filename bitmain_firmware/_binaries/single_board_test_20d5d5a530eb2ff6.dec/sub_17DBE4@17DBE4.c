int __fastcall sub_17DBE4(int a1, int a2, const void *a3, size_t a4, int a5)
{
  int v9; // r0
  int v10; // r6
  int v11; // r4
  int v12; // r6
  void *v13; // r0
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r4
  unsigned int v17; // r0
  char **v18; // r0
  _DWORD *v20; // [sp+Ch] [bp-4h] BYREF

  sub_17D304(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  v9 = sub_17D2F0();
  *(_DWORD *)(a1 + 4) = v9;
  if ( !v9 )
    return 0;
  v10 = v9;
  if ( a2 > 1 )
  {
    v11 = sub_B20A4();
    *(_DWORD *)(v10 + 8) = v11;
    if ( v11 )
    {
      v11 = sub_126EFC(*(size_t **)(*(_DWORD *)(a1 + 4) + 8), a2);
      if ( v11 )
      {
        v10 = *(_DWORD *)(a1 + 4);
        goto LABEL_6;
      }
      v14 = 222;
    }
    else
    {
      v14 = 218;
    }
LABEL_14:
    sub_D0048(35, 122, 65, (int)"crypto/pkcs12/p12_mutl.c", v14);
    return v11;
  }
LABEL_6:
  if ( !a4 )
    a4 = 8;
  v12 = *(_DWORD *)(v10 + 4);
  v13 = CRYPTO_malloc((void *)a4);
  v14 = 229;
  v11 = (int)v13;
  *(_DWORD *)(v12 + 8) = v13;
  if ( !v13 )
    goto LABEL_14;
  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  *(_DWORD *)v15 = a4;
  if ( a3 )
  {
    memcpy(*(void **)(v15 + 8), a3, a4);
LABEL_11:
    sub_12EF50(**(_DWORD ***)(a1 + 4), &v20, 0);
    v16 = v20;
    v17 = sub_D8C70(a5);
    v18 = sub_EAA20(v17);
    v11 = sub_B28F8(v16, (int)v18, 5, 0);
    if ( v11 )
      return 1;
    v14 = 241;
    goto LABEL_14;
  }
  if ( sub_F497C(*(_DWORD *)(v15 + 8), a4) > 0 )
    goto LABEL_11;
  return 0;
}
