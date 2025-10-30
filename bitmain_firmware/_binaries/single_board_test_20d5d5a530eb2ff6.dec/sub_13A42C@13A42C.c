int __fastcall sub_13A42C(int *a1, _DWORD *a2)
{
  signed int v4; // r7
  _DWORD *v5; // r8
  int v6; // r5
  int *v7; // r0
  int *v8; // r6
  int v9; // r4
  int v10; // r3
  int (*v11)(void); // r4
  int v12; // r0
  void *v14; // r0
  void *v15; // r0
  void *v16; // r0
  void *v17; // r10
  int v18; // r2
  int *v19; // [sp+8h] [bp-5Ch]
  void *v20; // [sp+14h] [bp-50h]
  void *v21; // [sp+18h] [bp-4Ch] BYREF
  int v22; // [sp+1Ch] [bp-48h] BYREF
  int v23[17]; // [sp+20h] [bp-44h] BYREF

  v4 = 0;
  v5 = (_DWORD *)sub_13A08C(a1);
  while ( 1 )
  {
    if ( v4 >= sub_10C010((int)v5) )
    {
      *(_DWORD *)(*(_DWORD *)(a1[1] + 8) + 8) = 0;
      return 1;
    }
    v6 = sub_10C01C(v5, v4);
    v7 = (int *)sub_D14F4();
    v8 = v7;
    if ( !v7 )
      break;
    v9 = *(_DWORD *)(v6 + 32);
    if ( !v9 )
    {
      sub_D0048(46, 150, 133, (int)"crypto/cms/cms_sd.c", 569);
      goto LABEL_14;
    }
    if ( !sub_139328(v7, a2, *(_DWORD **)(v6 + 8)) )
      goto LABEL_13;
    if ( *(_DWORD *)(v6 + 40) )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v6 + 32) + 12);
      if ( v10 )
      {
        v11 = *(int (**)(void))(v10 + 92);
        if ( v11 )
        {
          v12 = v11();
          if ( v12 == -2 )
          {
            sub_D0048(46, 170, 125, (int)"crypto/cms/cms_sd.c", 231);
LABEL_13:
            v9 = 0;
LABEL_14:
            sub_D1504(v8);
            sub_DB4BC(v9);
            return 0;
          }
          if ( v12 <= 0 )
          {
            sub_D0048(46, 170, 111, (int)"crypto/cms/cms_sd.c", 235);
            goto LABEL_13;
          }
        }
      }
    }
    if ( sub_178E08(v6) < 0 )
    {
      v19 = *(int **)(v6 + 40);
      if ( v19 )
      {
        if ( !sub_D16E4(v8, (int)v23, &v22) )
        {
          v9 = (int)v19;
          goto LABEL_14;
        }
        v21 = (void *)sub_D9AF8(*(_DWORD *)(v6 + 32));
        v14 = CRYPTO_malloc(v21);
        v20 = v14;
        if ( !v14 )
        {
          v9 = (int)v19;
          v18 = 608;
LABEL_37:
          sub_D0048(46, 150, 65, (int)"crypto/cms/cms_sd.c", v18);
          goto LABEL_14;
        }
        if ( sub_DA7C8(v19, (int)v14, (unsigned int *)&v21, (int)v23, v22) <= 0 )
        {
          v9 = (int)v19;
          CRYPTO_free(v20);
          goto LABEL_14;
        }
        sub_AE174(*(_DWORD **)(v6 + 20), (int)v20, (int)v21);
      }
      else
      {
        v15 = (void *)sub_D9AF8(*(_DWORD *)(v6 + 32));
        v16 = CRYPTO_malloc(v15);
        v17 = v16;
        if ( !v16 )
        {
          v9 = 0;
          v18 = 621;
          goto LABEL_37;
        }
        if ( !sub_15EF08(v8, v16, v23, *(_DWORD *)(v6 + 32)) )
        {
          v9 = 0;
          sub_D0048(46, 150, 139, (int)"crypto/cms/cms_sd.c", 625);
          CRYPTO_free(v17);
          goto LABEL_14;
        }
        sub_AE174(*(_DWORD **)(v6 + 20), (int)v17, v23[0]);
      }
    }
    else
    {
      if ( !sub_D16E4(v8, (int)v23, &v22)
        || !sub_178E58(v6, 51, 4, v23, v22)
        || sub_178E58(v6, 50, 6, **(_DWORD **)(a1[1] + 8), -1) <= 0
        || !sub_13A278(v6) )
      {
        goto LABEL_13;
      }
      v19 = 0;
    }
    ++v4;
    sub_D1504(v8);
    sub_DB4BC((int)v19);
  }
  sub_D0048(46, 150, 65, (int)"crypto/cms/cms_sd.c", 564);
  return 0;
}
