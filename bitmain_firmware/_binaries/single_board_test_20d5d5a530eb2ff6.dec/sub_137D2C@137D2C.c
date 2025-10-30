int __fastcall sub_137D2C(int a1, int *a2)
{
  int v3; // r4
  int v5; // r8
  int *v6; // r6
  int v7; // r7
  void *v8; // r9
  int *v9; // r0
  void *v10; // r5
  int v11; // r5
  int v12; // r7
  char *v13; // r0
  int v14; // r1
  void *v15; // r8
  int v16; // r4
  void *v17; // r0
  int v18; // r5
  char *v19; // r0
  char *v20; // r0
  int v21; // r0
  bool v22; // zf
  void *v23; // r3
  int v24; // r0
  void *v25[61]; // [sp+Ch] [bp-F4h] BYREF

  v3 = *a2;
  if ( *a2 == 2 )
  {
    v11 = a2[1];
    v3 = *(_DWORD *)(v11 + 16);
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
    if ( !v3 )
    {
      sub_D0048(46, 135, 130, (int)"crypto/cms/cms_env.c", 699);
      return v3;
    }
    v13 = sub_EAC84(**(_DWORD **)(v11 + 8)) - 788;
    if ( (unsigned int)v13 <= 2 )
    {
      v14 = dword_1CD378[(_DWORD)v13];
      if ( *(_DWORD *)(v11 + 20) == v14 )
        goto LABEL_21;
    }
    else
    {
      v14 = 0;
      if ( !*(_DWORD *)(v11 + 20) )
      {
LABEL_21:
        if ( **(int **)(v11 + 12) > 15 )
        {
          if ( sub_123A94(*(unsigned __int8 **)(v11 + 16), 8 * v14, (int *)v25) )
          {
            v15 = 0;
            sub_D0048(46, 135, 115, (int)"crypto/cms/cms_env.c", 720);
          }
          else
          {
            v17 = CRYPTO_malloc((void *)(**(_DWORD **)(v11 + 12) - 8));
            v15 = v17;
            if ( v17 )
            {
              v18 = sub_170CF0(v25, 0, v17, *(_DWORD *)(*(_DWORD *)(v11 + 12) + 8), **(_DWORD **)(v11 + 12));
              if ( v18 > 0 )
              {
                v16 = 1;
                sub_E0758(*(void **)(v12 + 16), *(_DWORD *)(v12 + 20), (size_t)"crypto/cms/cms_env.c");
                *(_DWORD *)(v12 + 16) = v15;
                *(_DWORD *)(v12 + 20) = v18;
                goto LABEL_24;
              }
              sub_D0048(46, 135, 157, (int)"crypto/cms/cms_env.c", 736);
            }
            else
            {
              sub_D0048(46, 135, 65, (int)"crypto/cms/cms_env.c", 727);
            }
          }
        }
        else
        {
          v15 = 0;
          sub_D0048(46, 135, 117, (int)"crypto/cms/cms_env.c", 714);
        }
        v16 = 0;
        CRYPTO_free(v15);
LABEL_24:
        sub_E07F8(v25, 0xF4u);
        return v16;
      }
    }
    v3 = 0;
    sub_D0048(46, 135, 118, (int)"crypto/cms/cms_env.c", 706);
    return v3;
  }
  if ( v3 != 3 )
  {
    if ( v3 )
    {
      v3 = 0;
      sub_D0048(46, 134, 155, (int)"crypto/cms/cms_env.c", 770);
      return v3;
    }
    v5 = a2[1];
    v6 = *(int **)(v5 + 20);
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
    if ( !v6 )
    {
      sub_D0048(46, 140, 133, (int)"crypto/cms/cms_env.c", 371);
      return v3;
    }
    if ( *(_DWORD *)(v7 + 28) && !*(_DWORD *)(v7 + 24) )
    {
      v19 = sub_EAC84(**(_DWORD **)(v7 + 4));
      v20 = sub_EAAB4((unsigned int)v19);
      v21 = sub_D99BC((int)v20);
      if ( !v21 )
      {
        sub_D0048(46, 140, 148, (int)"crypto/cms/cms_env.c", 381);
        return v3;
      }
      v8 = (void *)sub_D8AD0(v21);
    }
    else
    {
      v8 = (void *)*a2;
    }
    v9 = sub_DB4F8(v6, 0);
    *(_DWORD *)(v5 + 24) = v9;
    if ( !v9 )
      return v3;
    if ( sub_DAB74(v9) > 0 && sub_137898(a2, 1) )
    {
      if ( sub_DB77C(*(_DWORD *)(v5 + 24), -1, 512) <= 0 )
      {
        v10 = 0;
        sub_D0048(46, 140, 110, (int)"crypto/cms/cms_env.c", 400);
        goto LABEL_14;
      }
      if ( sub_DABC0(
             *(int **)(v5 + 24),
             0,
             (unsigned int *)v25,
             *(_DWORD *)(*(_DWORD *)(v5 + 12) + 8),
             **(_DWORD **)(v5 + 12)) > 0 )
      {
        v10 = CRYPTO_malloc(v25[0]);
        if ( v10 )
        {
          if ( sub_DABC0(
                 *(int **)(v5 + 24),
                 (int)v10,
                 (unsigned int *)v25,
                 *(_DWORD *)(*(_DWORD *)(v5 + 12) + 8),
                 **(_DWORD **)(v5 + 12)) > 0
            && v25[0] )
          {
            v22 = v8 == 0;
            if ( v8 )
              v22 = v25[0] == v8;
            if ( v22 )
            {
              v3 = 1;
              sub_E0758(*(void **)(v7 + 16), *(_DWORD *)(v7 + 20), (size_t)"crypto/cms/cms_env.c");
              v23 = v25[0];
              v24 = *(_DWORD *)(v5 + 24);
              *(_DWORD *)(v7 + 16) = v10;
              *(_DWORD *)(v7 + 20) = v23;
              sub_DB4BC(v24);
              *(_DWORD *)(v5 + 24) = 0;
              return v3;
            }
          }
          sub_D0048(46, 140, 104, (int)"crypto/cms/cms_env.c", 421);
        }
        else
        {
          sub_D0048(46, 140, 65, (int)"crypto/cms/cms_env.c", 412);
        }
        goto LABEL_14;
      }
    }
    v10 = 0;
LABEL_14:
    sub_DB4BC(*(_DWORD *)(v5 + 24));
    *(_DWORD *)(v5 + 24) = 0;
    CRYPTO_free(v10);
    return 0;
  }
  return sub_139B38(a1);
}
