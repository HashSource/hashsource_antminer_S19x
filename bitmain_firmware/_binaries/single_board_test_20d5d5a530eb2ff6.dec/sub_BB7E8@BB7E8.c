int __fastcall sub_BB7E8(int a1, int a2, char a3)
{
  int v4; // r0
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r11
  int v9; // r7
  int v10; // r0
  const char *v11; // r6
  char *v12; // r0
  int v13; // r1
  int v14; // r2
  size_t v15; // r8
  int v16; // r9
  int *v17; // r4
  bool v18; // cc
  int v19; // r2
  int v20; // r1
  int v21; // r9
  int v22; // r0
  int v23; // r8
  int v24; // r0
  int *v25; // r0
  int v26; // r0
  int **v27; // r0
  int **v28; // r8
  int v29; // r0
  int *v30; // r3
  bool v31; // zf
  char v32; // r9
  int (__fastcall *v33)(int **, int); // r3
  int v34; // r0
  int v35; // r2
  void (__fastcall *v36)(int **); // r2
  int v37; // r3
  int v38; // r4
  int v39; // [sp+0h] [bp-70h]
  const char *v40; // [sp+4h] [bp-6Ch]
  _BYTE *v41; // [sp+8h] [bp-68h]
  int v42; // [sp+14h] [bp-5Ch]
  int v43; // [sp+18h] [bp-58h]
  int v44; // [sp+1Ch] [bp-54h]
  int v45; // [sp+20h] [bp-50h]
  int v47; // [sp+2Ch] [bp-44h]
  int v48; // [sp+30h] [bp-40h]
  int v49; // [sp+34h] [bp-3Ch]
  _BYTE v50[56]; // [sp+38h] [bp-38h] BYREF

  if ( !a1 )
    return 1;
  if ( a2 )
  {
    v4 = ((int (*)(void))sub_13B3F8)();
    if ( v4 )
      goto LABEL_4;
    if ( (a3 & 0x20) == 0 )
      goto LABEL_55;
  }
  v4 = sub_13B3F8(a1, 0, "openssl_conf");
  if ( !v4 )
  {
LABEL_55:
    sub_D00F0(0);
    return 1;
  }
LABEL_4:
  result = sub_13B390(a1, v4);
  v8 = result;
  if ( result )
  {
    v9 = 0;
    v45 = a3 & 8;
    v43 = a3 & 4;
    v44 = a3 & 1;
    if ( sub_10C010(result, v6, v7) > 0 )
    {
      while ( 2 )
      {
        v10 = sub_10C01C(v8, v9);
        v11 = *(const char **)(v10 + 4);
        v42 = *(_DWORD *)(v10 + 8);
        v12 = strrchr(v11, 46);
        v15 = v12 - v11;
        if ( !v12 )
          v15 = strlen(v11);
        v16 = 0;
        while ( 1 )
        {
          v18 = v16 < sub_10C010(dword_6DF3E0, v13, v14);
          v20 = v16++;
          if ( !v18 )
            break;
          v17 = (int *)sub_10C01C(dword_6DF3E0, v20);
          if ( !strncmp((const char *)v17[1], v11, v15) )
            goto LABEL_25;
        }
        if ( v45 )
          goto LABEL_12;
        v21 = sub_13B3F8(a1, v42, "path");
        if ( !v21 )
        {
          v21 = (int)v11;
          sub_D00F0(0);
        }
        v22 = sub_C1AF4(0, v21, 0, 0, v39, v40, v41);
        v23 = v22;
        v47 = v22;
        if ( !v22 )
        {
          v38 = 110;
          goto LABEL_60;
        }
        v48 = sub_C1958(v22, "OPENSSL_init");
        if ( !v48 )
        {
          v38 = 112;
          v22 = v47;
          goto LABEL_60;
        }
        v24 = sub_C1958(v23, "OPENSSL_finish");
        v49 = v24;
        if ( !dword_6DF3E0 )
        {
          dword_6DF3E0 = sub_10BFCC(v24);
          if ( !dword_6DF3E0 )
          {
LABEL_59:
            v22 = v47;
            v38 = 0;
LABEL_60:
            sub_C1788(v22);
            sub_D0048(14, 117, v38, "crypto/conf/conf_mod.c", 224);
            v39 = v21;
            sub_D1240(4, "module=", v11);
LABEL_12:
            if ( !v43 )
            {
              sub_D0048(14, 118, 113, "crypto/conf/conf_mod.c", 165);
              sub_D1240(2, "module=", v11);
            }
LABEL_14:
            if ( v44 )
              goto LABEL_15;
            return -1;
          }
        }
        v25 = (int *)sub_E0740(24, "crypto/conf/conf_mod.c", 238);
        v17 = v25;
        if ( !v25 )
        {
          sub_D0048(14, 122, 65, "crypto/conf/conf_mod.c", 239);
          goto LABEL_59;
        }
        *v25 = v47;
        v26 = sub_E9E3C(v11, "crypto/conf/conf_mod.c", 244);
        v17[1] = v26;
        v17[2] = v48;
        v17[3] = v49;
        if ( !v26 )
        {
          CRYPTO_free(v17, "crypto/conf/conf_mod.c", 248);
          goto LABEL_59;
        }
        if ( !sub_10BD3C(dword_6DF3E0, v17) )
        {
          CRYPTO_free(v17[1], "crypto/conf/conf_mod.c", 253);
          CRYPTO_free(v17, "crypto/conf/conf_mod.c", 254);
          goto LABEL_59;
        }
LABEL_25:
        v27 = (int **)CRYPTO_malloc(20, "crypto/conf/conf_mod.c", 298);
        v28 = v27;
        if ( !v27 )
          goto LABEL_46;
        *v27 = v17;
        v27[1] = (int *)sub_E9E3C(v11, "crypto/conf/conf_mod.c", 303);
        v29 = sub_E9E3C(v42, "crypto/conf/conf_mod.c", 304);
        v30 = v28[1];
        v28[2] = (int *)v29;
        v28[4] = 0;
        v31 = v29 == 0;
        if ( v29 )
          v31 = v30 == 0;
        v32 = v31;
        if ( v31 )
        {
LABEL_45:
          CRYPTO_free(v30, "crypto/conf/conf_mod.c", 344);
          CRYPTO_free(v28[2], "crypto/conf/conf_mod.c", 345);
          CRYPTO_free(v28, "crypto/conf/conf_mod.c", 346);
LABEL_46:
          if ( v43 )
            goto LABEL_14;
          sub_D0048(14, 118, 109, "crypto/conf/conf_mod.c", 177);
          sub_B5560(v50, 0xDu, "%-8d", -1);
          v41 = v50;
          v39 = v42;
          v40 = ", retcode=";
          sub_D1240(6, "module=", v11);
          if ( !v44 )
            return -1;
LABEL_15:
          if ( ++v9 < sub_10C010(v8, v20, v19) )
            continue;
          return 1;
        }
        break;
      }
      v33 = (int (__fastcall *)(int **, int))v17[2];
      if ( v33 )
      {
        if ( v33(v28, a1) <= 0 )
        {
          v36 = (void (__fastcall *)(int **))v17[3];
          if ( !v36 )
            goto LABEL_44;
          goto LABEL_43;
        }
        v32 = 1;
      }
      v34 = dword_6DF3E4;
      if ( dword_6DF3E4 || (v34 = sub_10BFCC(0), (dword_6DF3E4 = v34) != 0) )
      {
        if ( sub_10BD3C(v34, v28) )
        {
          ++v17[4];
          goto LABEL_15;
        }
        v35 = 328;
      }
      else
      {
        v35 = 322;
      }
      sub_D0048(14, 115, 65, "crypto/conf/conf_mod.c", v35);
      v36 = (void (__fastcall *)(int **))v17[3];
      if ( v36 )
        v37 = v32 & 1;
      else
        v37 = 0;
      if ( !v37 )
        goto LABEL_44;
LABEL_43:
      v36(v28);
LABEL_44:
      v30 = v28[1];
      goto LABEL_45;
    }
    return 1;
  }
  return result;
}
