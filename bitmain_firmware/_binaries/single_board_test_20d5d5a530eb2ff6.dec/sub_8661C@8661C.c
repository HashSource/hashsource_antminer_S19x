int __fastcall sub_8661C(int a1, int a2, int *a3, int *a4, char *s1, int a6)
{
  bool v6; // zf
  int v7; // r7
  int v9; // r0
  int v10; // r2
  int v11; // r8
  int v12; // r4
  int v13; // r9
  _DWORD *v14; // r0
  _DWORD *v15; // r2
  int *v16; // r1
  int v17; // r0
  int v18; // r3
  int v19; // r3
  int *v20; // r0
  int *v21; // r4
  int *i; // r3
  _DWORD *v23; // r3
  int v24; // r2
  int v25; // r2
  int v26; // r2
  int v27; // r2
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r4
  int v32; // r6
  int v33; // r0
  bool v34; // cc
  int v35; // r1
  int *v36; // r5
  int v38; // r5
  int v39; // r2
  _DWORD *v40; // r3
  int v41; // r0
  char *v42; // r3
  int v43; // r6
  int v45; // [sp+20h] [bp-2Ch]
  int v46; // [sp+24h] [bp-28h]
  int v47; // [sp+28h] [bp-24h]
  int v48; // [sp+2Ch] [bp-20h]
  int v49; // [sp+30h] [bp-1Ch]
  int *v52; // [sp+40h] [bp-Ch] BYREF
  _DWORD *v53[2]; // [sp+44h] [bp-8h] BYREF

  v52 = 0;
  v6 = a4 == 0;
  if ( a4 )
    v6 = s1 == 0;
  v7 = v6;
  if ( !a3 )
    v7 |= 1u;
  v53[0] = 0;
  if ( v7 )
    return 0;
  v9 = strncmp(s1, "SUITEB128ONLY", 0xDu);
  if ( !v9 )
  {
    v10 = 0x10000;
LABEL_11:
    *(_DWORD *)(a6 + 16) = *(_DWORD *)(a6 + 16) & 0xFFFCFFFF | v10;
    goto LABEL_12;
  }
  if ( !strncmp(s1, "SUITEB128C2", 0xBu) )
  {
    v9 = 1;
    v10 = 196608;
    goto LABEL_11;
  }
  v9 = strncmp(s1, "SUITEB128", 9u);
  if ( !v9 )
  {
    v10 = 196608;
    goto LABEL_11;
  }
  v9 = strncmp(s1, "SUITEB192", 9u);
  if ( !v9 )
  {
    v10 = 0x20000;
    goto LABEL_11;
  }
  v10 = *(_DWORD *)(a6 + 16) & 0x30000;
  if ( !v10 )
  {
LABEL_17:
    v47 = dword_6DF33C;
    v48 = dword_6DF340;
    v46 = dword_6DF27C;
    v49 = dword_6DF2D8;
    v11 = (*(int (**)(void))(a1 + 88))();
    v45 = CRYPTO_malloc(20 * v11, "ssl/ssl_ciph.c", 1442);
    if ( !v45 )
    {
      sub_D0048(20, 166, 65, "ssl/ssl_ciph.c", 1444);
      return 0;
    }
    if ( v11 <= 0 )
      goto LABEL_37;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (_DWORD *)(*(int (__fastcall **)(int))(a1 + 92))(v13);
        if ( !v14 || !*v14 || (v47 & v14[4]) != 0 || (v48 & v14[5]) != 0 || (v46 & v14[6]) != 0 || (v49 & v14[7]) != 0 )
          goto LABEL_28;
        if ( (*(_DWORD *)(*(_DWORD *)(a1 + 100) + 48) & 8) != 0 )
          break;
        if ( !v14[8] )
          goto LABEL_28;
LABEL_76:
        v39 = 5 * v12;
        ++v13;
        ++v12;
        *(_DWORD *)(v45 + 4 * v39) = v14;
        v40 = (_DWORD *)(v45 + 4 * v39);
        v40[3] = 0;
        v40[4] = 0;
        v40[1] = 0;
        if ( v11 == v13 )
        {
LABEL_29:
          if ( v12 )
          {
            v15 = (_DWORD *)v45;
            *(_DWORD *)(v45 + 16) = 0;
            if ( v12 == 1 )
            {
              v16 = (int *)v45;
            }
            else
            {
              *(_DWORD *)(v45 + 12) = v45 + 20;
              if ( v12 == 2 )
              {
                v17 = 8;
              }
              else
              {
                v17 = 4 * v12;
                v18 = v45 + 40;
                do
                {
                  *(_DWORD *)(v18 - 8) = v18;
                  *(_DWORD *)(v18 - 4) = v18 - 40;
                  v18 += 20;
                }
                while ( v18 != v45 + 20 * v12 );
              }
              v19 = 4 * (v17 + v12);
              v16 = (int *)v45;
              v15 = (_DWORD *)(v19 - 20 + v45);
              v15[4] = v19 - 40 + v45;
            }
            v52 = v16;
            v53[0] = v15;
            v15[3] = 0;
          }
LABEL_37:
          sub_8570C((_DWORD *)4, 8, 0, 0, 0, 1, -1, &v52, v53);
          sub_8570C((_DWORD *)4, 0, 0, 0, 0, 1, -1, &v52, v53);
          sub_8570C((_DWORD *)4, 0, 0, 0, 0, 3, -1, &v52, v53);
          sub_8570C(0, 0, 12288, 0, 0, 1, -1, &v52, v53);
          sub_8570C(0, 0, 0x80000, 0, 0, 1, -1, &v52, v53);
          sub_8570C(0, 0, (int)&loc_3C0C0, 0, 0, 1, -1, &v52, v53);
          sub_8570C(0, 0, 0, 0, 0, 1, -1, &v52, v53);
          sub_8570C(0, 0, 0, 1, 0, 4, -1, &v52, v53);
          sub_8570C(0, 4, 0, 0, 0, 4, -1, &v52, v53);
          sub_8570C((_DWORD *)1, 0, 0, 0, 0, 4, -1, &v52, v53);
          sub_8570C((_DWORD *)8, 0, 0, 0, 0, 4, -1, &v52, v53);
          sub_8570C(0, 0, 4, 0, 0, 4, -1, &v52, v53);
          if ( sub_85978(&v52, v53) )
          {
            sub_8570C(0, 0, 0, 0, 771, 6, -1, &v52, v53);
            sub_8570C(0, 0, 0, 64, 0, 6, -1, &v52, v53);
            sub_8570C((_DWORD *)6, 0, 0, 0, 0, 6, -1, &v52, v53);
            sub_8570C((_DWORD *)6, 0, 0, 64, 0, 6, -1, &v52, v53);
            sub_8570C(0, 0, 0, 0, 0, 3, -1, &v52, v53);
            v20 = (int *)CRYPTO_malloc(4 * (v11 + 77), "ssl/ssl_ciph.c", 1555);
            v21 = v20;
            if ( v20 )
            {
              for ( i = v52; i; i = (int *)i[3] )
                *v20++ = *i;
              v23 = &unk_201778;
              do
              {
                v24 = v23[4];
                __pld(v23 + 116);
                if ( !v24 || (~v47 & v24) != 0 )
                {
                  v25 = v23[5];
                  if ( !v25 || (~v48 & v25) != 0 )
                  {
                    v26 = v23[6];
                    if ( !v26 || (~v46 & v26) != 0 )
                    {
                      v27 = v23[7];
                      if ( !v27 || (~v49 & v27) != 0 )
                        *v20++ = (int)v23;
                    }
                  }
                }
                v23 += 16;
              }
              while ( v23 != (_DWORD *)&GOST_KX_MESSAGE_it );
              *v20 = 0;
              if ( !strncmp(s1, "DEFAULT", 7u) )
              {
                v41 = sub_85A84(
                        "ALL:!COMPLEMENTOFDEFAULT:!eNULL",
                        &v52,
                        (int *)v53,
                        (_DWORD **)v21,
                        (unsigned int *)(a6 + 252));
                v42 = s1[7] == 58 ? s1 + 8 : s1 + 7;
                s1 = v42;
                if ( !v41 )
                {
                  CRYPTO_free(v21, "ssl/ssl_ciph.c", 1582);
                  goto LABEL_85;
                }
              }
              if ( !*s1 )
              {
                v28 = CRYPTO_free(v21, "ssl/ssl_ciph.c", 1582);
                goto LABEL_55;
              }
              v43 = sub_85A84((unsigned __int8 *)s1, &v52, (int *)v53, (_DWORD **)v21, (unsigned int *)(a6 + 252));
              v28 = CRYPTO_free(v21, "ssl/ssl_ciph.c", 1582);
              if ( !v43 )
              {
LABEL_85:
                CRYPTO_free(v45, "ssl/ssl_ciph.c", 1585);
                return 0;
              }
LABEL_55:
              v31 = sub_10BFCC(v28);
              if ( v31 )
              {
                v32 = 0;
                while ( 1 )
                {
                  v34 = v32 < sub_10C010(a2, v29, v30);
                  v35 = v32++;
                  if ( !v34 )
                    break;
                  v33 = sub_10C01C(a2, v35);
                  if ( !sub_10BD3C(v31, v33) )
                  {
                    CRYPTO_free(v45, "ssl/ssl_ciph.c", 1602);
                    sub_10BDB4(v31);
                    return 0;
                  }
                }
                v36 = v52;
                if ( v52 )
                {
                  while ( !v36[1] || sub_10BD3C(v31, *v36) )
                  {
                    v36 = (int *)v36[3];
                    if ( !v36 )
                      goto LABEL_72;
                  }
                  CRYPTO_free(v45, "ssl/ssl_ciph.c", 1615);
                  sub_10BDB4(v31);
                }
                else
                {
LABEL_72:
                  CRYPTO_free(v45, "ssl/ssl_ciph.c", 1624);
                  v38 = sub_10BDE0(v31);
                  if ( v38 )
                  {
                    sub_10BDB4(*a4);
                    *a4 = v38;
                    sub_10B9F0(v38, ssl_cipher_ptr_id_cmp);
                    sub_10C070(*a4);
                    sub_10BDB4(*a3);
                    *a3 = v31;
                    return v31;
                  }
                  sub_10BDB4(v31);
                }
              }
              else
              {
                CRYPTO_free(v45, "ssl/ssl_ciph.c", 1594);
              }
            }
            else
            {
              CRYPTO_free(v45, "ssl/ssl_ciph.c", 1557);
              sub_D0048(20, 166, 65, "ssl/ssl_ciph.c", 1558);
            }
          }
          else
          {
            CRYPTO_free(v45, "ssl/ssl_ciph.c", 1511);
          }
          return 0;
        }
      }
      if ( v14[10] )
        goto LABEL_76;
LABEL_28:
      if ( v11 == ++v13 )
        goto LABEL_29;
    }
  }
  v9 = 0;
LABEL_12:
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 100) + 48) & 0x10) != 0 )
  {
    switch ( v10 )
    {
      case 131072:
        s1 = "ECDHE-ECDSA-AES256-GCM-SHA384";
        break;
      case 196608:
        if ( v9 )
          s1 = "ECDHE-ECDSA-AES256-GCM-SHA384";
        else
          s1 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
        break;
      case 65536:
        s1 = "ECDHE-ECDSA-AES128-GCM-SHA256";
        break;
    }
    goto LABEL_17;
  }
  sub_D0048(20, 331, 158, "ssl/ssl_ciph.c", 1248);
  return 0;
}
