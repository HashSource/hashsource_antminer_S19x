int __fastcall sub_13A674(int a1)
{
  int v1; // r3
  char *v3; // r0
  char *v4; // r0
  int v5; // r0
  _DWORD *v6; // r2
  int *v7; // r5
  int v8; // r3
  int (*v9)(void); // r6
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r4
  int v15; // r0
  _DWORD *v16; // [sp+Ch] [bp-10h]
  _BYTE *v17; // [sp+14h] [bp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v17 = 0;
  if ( !v1 )
  {
    sub_D0048(46, 152, 134, (int)"crypto/cms/cms_sd.c", 733);
    return -1;
  }
  if ( !sub_178F18(a1) )
    return -1;
  v3 = sub_EAC84(**(_DWORD **)(a1 + 8));
  v4 = sub_EAAB4((unsigned int)v3);
  v5 = sub_D99DC((int)v4);
  v6 = (_DWORD *)v5;
  if ( !v5 )
    return -1;
  v7 = *(int **)(a1 + 36);
  if ( !v7 )
  {
    v16 = (_DWORD *)v5;
    v15 = sub_D14F4();
    v6 = v16;
    v7 = (int *)v15;
    *(_DWORD *)(a1 + 36) = v15;
    if ( !v15 )
    {
      sub_D0048(46, 152, 65, (int)"crypto/cms/cms_sd.c", 744);
      return -1;
    }
  }
  if ( sub_D954C(v7, (_DWORD *)(a1 + 40), v6, 0, *(_DWORD *)(a1 + 32)) <= 0 )
    goto LABEL_15;
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 12);
  if ( !v8 )
    goto LABEL_10;
  v9 = *(int (**)(void))(v8 + 92);
  if ( !v9 )
    goto LABEL_10;
  v10 = v9();
  if ( v10 == -2 )
  {
    sub_D0048(46, 170, 125, (int)"crypto/cms/cms_sd.c", 231);
    goto LABEL_15;
  }
  if ( v10 <= 0 )
  {
    sub_D0048(46, 170, 111, (int)"crypto/cms/cms_sd.c", 235);
  }
  else
  {
LABEL_10:
    v11 = sub_B0FDC(*(size_t **)(a1 + 12), &v17, CMS_Attributes_Verify_it);
    if ( v17 )
    {
      v12 = sub_D16D8((int)v7, (int)v17, v11);
      CRYPTO_free(v17);
      if ( v12 > 0 )
      {
        v13 = sub_D97EC(v7, *(_DWORD *)(*(_DWORD *)(a1 + 20) + 8), **(_DWORD **)(a1 + 20));
        if ( v13 <= 0 )
          sub_D0048(46, 152, 158, (int)"crypto/cms/cms_sd.c", 767);
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v13 = -1;
LABEL_16:
  sub_D1478(v7);
  return v13;
}
