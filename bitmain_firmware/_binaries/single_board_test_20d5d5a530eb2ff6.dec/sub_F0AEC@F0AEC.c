int __fastcall sub_F0AEC(_DWORD *a1, int a2, int a3, int a4)
{
  int *v8; // r6
  char *v9; // r5
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r11
  int v15; // r4
  int v16; // r1
  int v17; // r2
  size_t *v18; // r10
  _DWORD *v19; // r4
  int v20; // r0
  int v21; // r0
  char *v22; // r0
  _DWORD *v23; // r0
  int v24; // r2
  int *v25; // [sp+Ch] [bp-50h] BYREF
  _BYTE *v26; // [sp+10h] [bp-4Ch] BYREF
  int v27; // [sp+14h] [bp-48h] BYREF
  _BYTE v28[68]; // [sp+18h] [bp-44h] BYREF

  v8 = (int *)sub_D14F4();
  if ( v8 )
  {
    if ( sub_EAC84(*(_DWORD *)(a2 + 16)) == (char *)22 || sub_EAC84(*(_DWORD *)(a2 + 16)) == (char *)24 )
    {
      v9 = sub_EAC84(**(_DWORD **)(a3 + 8));
      if ( !a1 )
      {
LABEL_11:
        sub_D0048(33, 113, 108, (int)"crypto/pkcs7/pk7_doit.c", 968);
        sub_D1504(v8);
        return 0;
      }
      while ( 1 )
      {
        v12 = sub_B7144(a1, 520);
        v13 = (int)v12;
        if ( !v12 )
          goto LABEL_11;
        sub_B6ECC((int)v12, 120, 0, (int)&v25);
        if ( !v25 )
        {
          sub_D0048(33, 113, 68, (int)"crypto/pkcs7/pk7_doit.c", 973);
          sub_D1504(v8);
          return 0;
        }
        v10 = sub_D8D8C((int)v25);
        if ( v9 == (char *)sub_D8C70(v10) )
          break;
        v11 = sub_D8D8C((int)v25);
        if ( v9 == (char *)sub_D8C74(v11) )
          break;
        a1 = (_DWORD *)sub_B7170(v13);
        if ( !a1 )
          goto LABEL_11;
      }
      v15 = sub_D17B4(v8, v25);
      if ( !v15 )
        goto LABEL_13;
      v18 = *(size_t **)(a3 + 12);
      if ( !v18 || !sub_10C010(*(_DWORD *)(a3 + 12), v16, v17) )
        goto LABEL_17;
      v26 = 0;
      if ( !sub_D16E4(v8, (int)v28, &v27) )
      {
LABEL_24:
        v15 = 0;
        goto LABEL_13;
      }
      v21 = sub_F0AC8((int)v18);
      v15 = v21;
      if ( v21 )
      {
        if ( *(_DWORD *)v21 == v27 && !memcmp(*(const void **)(v21 + 8), v28, *(_DWORD *)v21) )
        {
          v22 = sub_EAAB4((unsigned int)v9);
          v23 = (_DWORD *)sub_D99DC((int)v22);
          if ( !sub_D1520(v8, v23, 0) )
            goto LABEL_24;
          v24 = sub_B0FDC(v18, &v26, PKCS7_ATTR_VERIFY_it);
          if ( v24 > 0 )
          {
            if ( sub_D16D8((int)v8, (int)v26, v24) )
            {
              CRYPTO_free(v26);
LABEL_17:
              v19 = *(_DWORD **)(a3 + 20);
              v20 = sub_10E89C(a4);
              if ( v20 )
              {
                if ( sub_15EFFC(v8, v19[2], *v19, v20) <= 0 )
                {
                  v15 = -1;
                  sub_D0048(33, 113, 105, (int)"crypto/pkcs7/pk7_doit.c", 1041);
                }
                else
                {
                  v15 = 1;
                }
              }
              else
              {
                v15 = -1;
              }
              goto LABEL_13;
            }
            goto LABEL_24;
          }
          v15 = -1;
          sub_D0048(33, 113, 13, (int)"crypto/pkcs7/pk7_doit.c", 1022);
        }
        else
        {
          v15 = -1;
          sub_D0048(33, 113, 101, (int)"crypto/pkcs7/pk7_doit.c", 1011);
        }
      }
      else
      {
        sub_D0048(33, 113, 108, (int)"crypto/pkcs7/pk7_doit.c", 1006);
      }
    }
    else
    {
      v15 = 0;
      sub_D0048(33, 113, 114, (int)"crypto/pkcs7/pk7_doit.c", 957);
    }
LABEL_13:
    sub_D1504(v8);
    return v15;
  }
  sub_D0048(33, 113, 65, (int)"crypto/pkcs7/pk7_doit.c", 952);
  sub_D1504(0);
  return 0;
}
