int __fastcall sub_17916C(int a1)
{
  int v1; // r7
  int *v3; // r9
  void *v4; // r0
  int v5; // r10
  _DWORD *v6; // r0
  int v7; // r6
  _DWORD *v8; // r1
  void *v9; // r5
  int v10; // r0
  unsigned int v11; // r0
  int v12; // r1
  _BYTE *src; // r11
  int v14; // r1
  int v15; // r7
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  char *v19; // r0
  char *v20; // r0
  _DWORD *v21; // r0
  void *v22; // r0
  int v23; // r2
  void *v24; // r8
  int v25; // [sp+14h] [bp-18h] BYREF
  _BYTE v26[20]; // [sp+18h] [bp-14h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  v3 = *(int **)(a1 + 4);
  v4 = sub_15C058();
  v5 = v1;
  if ( v1 )
    v5 = 1;
  v6 = sub_B655C((int)v4);
  v7 = (int)v6;
  if ( v6 )
  {
    sub_B6ECC((int)v6, 129, 0, (int)&v25);
    if ( v1 )
    {
      v8 = *(_DWORD **)(a1 + 12);
      if ( *(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 12) = 0;
      v9 = 0;
      if ( sub_D8440((int *)v25, v8, 0, 0, 0, v5) > 0 )
      {
        v10 = sub_D8920(v25);
        v11 = sub_D8ADC(v10);
        *v3 = (int)sub_EAA20(v11);
        v12 = sub_D8944((int *)v25);
        if ( v12 <= 0 )
        {
          src = 0;
        }
        else
        {
          if ( sub_F497C((int)v26, v12) <= 0 )
          {
            v24 = 0;
            goto LABEL_26;
          }
          src = v26;
        }
        v24 = 0;
        v9 = (void *)sub_D8AD4(v25);
        if ( *(_DWORD *)(a1 + 16) )
          goto LABEL_13;
        goto LABEL_31;
      }
    }
    else
    {
      v19 = sub_EAC84(*v3);
      v20 = sub_EAAB4((unsigned int)v19);
      v21 = (_DWORD *)sub_D99BC((int)v20);
      if ( !v21 )
      {
        v9 = 0;
        v24 = 0;
        sub_D0048(46, 120, 148, (int)"crypto/cms/cms_enc.c", 58);
        goto LABEL_26;
      }
      if ( sub_D8440((int *)v25, v21, 0, 0, 0, v5) > 0 )
      {
        if ( sub_D89D0((int *)v25, v3[1]) <= 0 )
        {
          v9 = 0;
          v24 = 0;
          sub_D0048(46, 120, 102, (int)"crypto/cms/cms_enc.c", 81);
          goto LABEL_26;
        }
        src = 0;
        v9 = (void *)sub_D8AD4(v25);
LABEL_31:
        v22 = CRYPTO_malloc(v9);
        v24 = v22;
        v23 = 89;
        if ( !v22 )
          goto LABEL_42;
        if ( sub_D87DC((_DWORD *)v25, (int)v22) <= 0 )
          goto LABEL_26;
        if ( !*(_DWORD *)(a1 + 16) )
        {
          *(_DWORD *)(a1 + 16) = v24;
          *(_DWORD *)(a1 + 20) = v9;
          if ( v1 )
          {
            v15 = 0;
            if ( sub_D8440((int *)v25, 0, 0, (int)v24, src, v5) > 0 )
            {
              v24 = 0;
              goto LABEL_18;
            }
            v24 = 0;
            goto LABEL_38;
          }
          v24 = 0;
          sub_D00F0();
        }
LABEL_13:
        v14 = *(_DWORD *)(a1 + 20);
        if ( (void *)v14 == v9 || sub_D8784((_DWORD *)v25, v14) > 0 )
        {
          if ( sub_D8440((int *)v25, 0, 0, *(_DWORD *)(a1 + 16), src, v5) > 0 )
          {
            if ( v1 )
            {
              v15 = 1;
LABEL_18:
              v16 = (_DWORD *)sub_B2408();
              v3[1] = (int)v16;
              if ( v16 )
              {
                if ( sub_D8BA8((int *)v25, v16) > 0 )
                {
                  v17 = (_DWORD *)v3[1];
                  if ( *v17 == -1 )
                  {
                    ASN1_TYPE_free((int)v17);
                    v3[1] = 0;
                  }
                  if ( !v15 )
                  {
                    sub_E0758(v24, (size_t)v9, (size_t)"crypto/cms/cms_enc.c");
                    return v7;
                  }
                  goto LABEL_45;
                }
                sub_D0048(46, 120, 102, (int)"crypto/cms/cms_enc.c", 142);
LABEL_26:
                sub_E0758(*(void **)(a1 + 16), *(_DWORD *)(a1 + 20), (size_t)"crypto/cms/cms_enc.c");
                *(_DWORD *)(a1 + 16) = 0;
                sub_E0758(v24, (size_t)v9, (size_t)"crypto/cms/cms_enc.c");
                BIO_vfree_0(v7);
                return 0;
              }
              v23 = 137;
LABEL_42:
              sub_D0048(46, 120, 65, (int)"crypto/cms/cms_enc.c", v23);
              goto LABEL_26;
            }
LABEL_45:
            sub_E0758(*(void **)(a1 + 16), *(_DWORD *)(a1 + 20), (size_t)"crypto/cms/cms_enc.c");
            *(_DWORD *)(a1 + 16) = 0;
            sub_E0758(v24, (size_t)v9, (size_t)"crypto/cms/cms_enc.c");
            return v7;
          }
        }
        else
        {
          if ( v1 || *(_DWORD *)(a1 + 24) )
          {
            sub_D0048(46, 120, 118, (int)"crypto/cms/cms_enc.c", 116);
            goto LABEL_26;
          }
          sub_E0758(*(void **)(a1 + 16), *(_DWORD *)(a1 + 20), (size_t)"crypto/cms/cms_enc.c");
          *(_DWORD *)(a1 + 16) = v24;
          v24 = 0;
          *(_DWORD *)(a1 + 20) = v9;
          sub_D00F0();
          if ( sub_D8440((int *)v25, 0, 0, *(_DWORD *)(a1 + 16), src, v5) > 0 )
            goto LABEL_45;
        }
LABEL_38:
        sub_D0048(46, 120, 101, (int)"crypto/cms/cms_enc.c", 131);
        goto LABEL_26;
      }
    }
    v9 = 0;
    v24 = 0;
    sub_D0048(46, 120, 101, (int)"crypto/cms/cms_enc.c", 65);
    goto LABEL_26;
  }
  sub_D0048(46, 120, 65, (int)"crypto/cms/cms_enc.c", 41);
  return 0;
}
