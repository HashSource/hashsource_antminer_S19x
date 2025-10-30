int __fastcall sub_13A278(int a1)
{
  int *v1; // r7
  int v3; // r0
  char *v4; // r0
  char *v5; // r0
  _DWORD *v6; // r5
  int v7; // r6
  int v8; // r2
  _BYTE *v9; // r0
  int v11; // r0
  int v12; // r6
  int v13; // r2
  int v14; // [sp+Ch] [bp-Ch] BYREF
  _BYTE *v15; // [sp+10h] [bp-8h] BYREF
  void *v16; // [sp+14h] [bp-4h] BYREF

  v1 = *(int **)(a1 + 36);
  v3 = **(_DWORD **)(a1 + 8);
  v14 = 0;
  v15 = 0;
  v4 = sub_EAC84(v3);
  v5 = sub_EAAB4((unsigned int)v4);
  v6 = (_DWORD *)sub_D99DC((int)v5);
  if ( !v6 )
    return 0;
  if ( sub_178E10(a1, 52, -1) < 0 )
  {
    v11 = sub_111914(0, 0);
    v12 = v11;
    if ( !v11 || sub_178E58(a1, 52, *(_DWORD *)(v11 + 4), v11, -1) <= 0 )
    {
      sub_12AA8C(v12);
      sub_D0048(46, 103, 65, (int)"crypto/cms/cms_sd.c", 419);
      v9 = v15;
      goto LABEL_15;
    }
    sub_12AA8C(v12);
  }
  if ( !sub_178F18(a1) )
    goto LABEL_14;
  v7 = *(_DWORD *)(a1 + 40);
  if ( v7 )
  {
    v14 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    sub_D1478(v1);
    if ( sub_D9454(v1, &v14, v6, 0, *(_DWORD *)(a1 + 32)) <= 0 )
      goto LABEL_14;
    v7 = v14;
    *(_DWORD *)(a1 + 40) = v14;
  }
  if ( sub_DB77C(v7, -1, 8) <= 0 )
  {
    v13 = 688;
LABEL_23:
    sub_D0048(46, 151, 110, (int)"crypto/cms/cms_sd.c", v13);
    v9 = v15;
    goto LABEL_15;
  }
  v8 = sub_B0FDC(*(size_t **)(a1 + 12), &v15, CMS_Attributes_Sign_it);
  v9 = v15;
  if ( !v15 )
    goto LABEL_15;
  if ( sub_D16D8((int)v1, (int)v15, v8) <= 0 || sub_D9644(v1, 0, (int)&v16) <= 0 )
  {
LABEL_14:
    v9 = v15;
    goto LABEL_15;
  }
  CRYPTO_free(v15);
  v9 = CRYPTO_malloc(v16);
  v15 = v9;
  if ( v9 )
  {
    if ( sub_D9644(v1, (int)v9, (int)&v16) > 0 )
    {
      if ( sub_DB77C(v14, -1, 8) > 0 )
      {
        sub_D1478(v1);
        sub_AE174(*(_DWORD **)(a1 + 20), (int)v15, (int)v16);
        return 1;
      }
      v13 = 709;
      goto LABEL_23;
    }
    goto LABEL_14;
  }
LABEL_15:
  CRYPTO_free(v9);
  sub_D1478(v1);
  return 0;
}
