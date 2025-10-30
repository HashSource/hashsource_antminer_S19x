int __fastcall sub_138094(int a1, int *a2)
{
  int v2; // r4
  int v4; // r6
  int v5; // r8
  void *v6; // r7
  int v7; // r4
  _DWORD **v8; // r7
  int *v9; // r6
  int v10; // r8
  int v11; // r4
  void *v12; // r9
  void *v13; // r0
  int v14; // r1
  void *v15; // r0
  int v16; // r2
  int *v17; // r0
  void *v18[61]; // [sp+Ch] [bp-F4h] BYREF

  v2 = *a2;
  switch ( *a2 )
  {
    case 0:
      v8 = (_DWORD **)a2[1];
      v9 = v8[6];
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
      if ( v9 )
      {
        v11 = sub_137898(a2, 0);
        v12 = (void *)v11;
        if ( !v11 )
          goto LABEL_19;
      }
      else
      {
        v17 = sub_DB4F8(v8[5], 0);
        v9 = v17;
        if ( !v17 )
          return v2;
        if ( sub_DAA54(v17) <= 0 )
        {
          v11 = 0;
          v12 = 0;
          goto LABEL_19;
        }
      }
      v11 = 0;
      if ( sub_DB77C((int)v9, -1, 256) <= 0 )
      {
        v12 = 0;
        sub_D0048(46, 141, 110, (int)"crypto/cms/cms_env.c", 326);
      }
      else if ( sub_DAAA0(v9, 0, (unsigned int *)v18, *(_DWORD *)(v10 + 16), *(_DWORD *)(v10 + 20)) > 0 )
      {
        v13 = CRYPTO_malloc(v18[0]);
        v12 = v13;
        if ( v13 )
        {
          if ( sub_DAAA0(v9, (int)v13, (unsigned int *)v18, *(_DWORD *)(v10 + 16), *(_DWORD *)(v10 + 20)) > 0 )
          {
            v14 = (int)v12;
            v12 = 0;
            v11 = 1;
            sub_AE174(v8[3], v14, (int)v18[0]);
          }
        }
        else
        {
          sub_D0048(46, 141, 65, (int)"crypto/cms/cms_env.c", 336);
          v11 = 0;
        }
      }
      else
      {
        v12 = 0;
      }
LABEL_19:
      sub_DB4BC((int)v9);
      v8[6] = 0;
      CRYPTO_free(v12);
      return v11;
    case 1:
      return sub_138C48();
    case 2:
      v4 = a2[1];
      v2 = *(_DWORD *)(v4 + 16);
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
      if ( !v2 )
      {
        sub_D0048(46, 136, 130, (int)"crypto/cms/cms_env.c", 644);
        return v2;
      }
      if ( sub_123194(*(unsigned __int8 **)(v4 + 16), 8 * *(_DWORD *)(v4 + 20), (int *)v18) )
      {
        v6 = 0;
        sub_D0048(46, 136, 115, (int)"crypto/cms/cms_env.c", 650);
      }
      else
      {
        v15 = CRYPTO_malloc((void *)(*(_DWORD *)(v5 + 20) + 8));
        v6 = v15;
        if ( v15 )
        {
          v16 = sub_170CCC((int)v18, 0, (int)v15, *(_DWORD *)(v5 + 16), *(_DWORD *)(v5 + 20));
          if ( v16 > 0 )
          {
            v7 = 1;
            sub_AE174(*(_DWORD **)(v4 + 12), (int)v6, v16);
            goto LABEL_8;
          }
          sub_D0048(46, 136, 159, (int)"crypto/cms/cms_env.c", 664);
        }
        else
        {
          sub_D0048(46, 136, 65, (int)"crypto/cms/cms_env.c", 657);
        }
      }
      v7 = 0;
      CRYPTO_free(v6);
LABEL_8:
      sub_E07F8(v18, 0xF4u);
      return v7;
    case 3:
      return sub_139B38(a1);
    default:
      sub_D0048(46, 169, 154, (int)"crypto/cms/cms_env.c", 792);
      return 0;
  }
}
