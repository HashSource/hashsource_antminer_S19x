int __fastcall sub_138C48(int a1, _DWORD *a2)
{
  int v2; // r5
  int v5; // r4
  _DWORD *v6; // r11
  int *v7; // r8
  _DWORD *v8; // r10
  int v9; // r9
  int v10; // r0
  _DWORD *v11; // r1
  _DWORD *v12; // r8
  signed int v13; // r8
  int v14; // r5
  char *v15; // r7
  int v16; // r0
  void *v17; // r1
  int v18; // r7
  int v19; // [sp+Ch] [bp-68h]
  void *v20; // [sp+Ch] [bp-68h]
  signed int v21; // [sp+10h] [bp-64h]
  size_t n; // [sp+28h] [bp-4Ch] BYREF
  void *v23; // [sp+2Ch] [bp-48h] BYREF
  _BYTE v24[68]; // [sp+30h] [bp-44h] BYREF

  if ( *a2 != 1 )
  {
    v2 = 0;
    sub_D0048(46, 178, 181, (int)"crypto/cms/cms_kari.c", 376);
    return v2;
  }
  v5 = a2[1];
  v6 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 12);
  v7 = *(int **)(v5 + 24);
  v8 = *(_DWORD **)(v5 + 16);
  v9 = v6[3];
  v19 = sub_D8AD0(v9);
  if ( sub_D8920((int)v7) )
  {
    v10 = sub_D8920((int)v7);
    if ( (int *)(((unsigned int)&loc_F0004 + 3) & sub_D8928(v10)) != (int *)((char *)&dword_10000 + 2) )
      return 0;
  }
  else
  {
    if ( sub_D8ADC(v9) == 44 )
    {
      v11 = sub_D6CC4();
    }
    else if ( v19 <= 16 )
    {
      v11 = sub_D3330();
    }
    else if ( v19 > 24 )
    {
      v11 = sub_D3350();
    }
    else
    {
      v11 = sub_D3340();
    }
    if ( !sub_D875C(v7, v11, 0, 0, 0) )
      return 0;
  }
  v12 = *(_DWORD **)(v5 + 4);
  if ( *v12 != -1 || (*v12 = 2, v16 = sub_B2018((int)&CMS_OriginatorPublicKey_it), (v12[1] = v16) != 0) )
  {
    if ( sub_137898(a2, 0) )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= sub_10C010((int)v8) )
          return 1;
        v14 = sub_10C01C(v8, v13);
        if ( sub_DACE0(*(_DWORD **)(v5 + 20), *(_DWORD **)(v14 + 8)) <= 0 )
          return 0;
        v15 = (char *)v6[4];
        v21 = v6[5];
        n = sub_D8AD4(*(_DWORD *)(v5 + 24));
        if ( n > 0x40 )
          return 0;
        if ( sub_DAE14(*(int **)(v5 + 20), (int)v24, &n) <= 0 )
          break;
        if ( !sub_D8440(*(int **)(v5 + 24), 0, 0, (int)v24, 0, 1) )
          break;
        if ( !sub_D8188(*(_DWORD **)(v5 + 24), 0, (int *)&v23, v15, v21) )
          break;
        v17 = CRYPTO_malloc(v23);
        v20 = v17;
        if ( !v17 )
          break;
        ++v13;
        if ( !sub_D8188(*(_DWORD **)(v5 + 24), (int)v17, (int *)&v23, v15, v21) )
          goto LABEL_22;
        v18 = (int)v23;
        sub_E07F8(v24, n);
        sub_D7A10(*(int **)(v5 + 24));
        sub_DB4BC(*(_DWORD *)(v5 + 20));
        *(_DWORD *)(v5 + 20) = 0;
        sub_AE174(*(_DWORD **)(v14 + 4), (int)v20, v18);
      }
      v20 = 0;
LABEL_22:
      v2 = 0;
      sub_E07F8(v24, n);
      CRYPTO_free(v20);
      sub_D7A10(*(int **)(v5 + 24));
      sub_DB4BC(*(_DWORD *)(v5 + 20));
      *(_DWORD *)(v5 + 20) = 0;
      return v2;
    }
  }
  return 0;
}
