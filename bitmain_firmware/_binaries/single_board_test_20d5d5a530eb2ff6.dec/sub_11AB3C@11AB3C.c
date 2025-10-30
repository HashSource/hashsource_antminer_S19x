int *__fastcall sub_11AB3C(int a1, int a2, _DWORD *a3)
{
  signed int v3; // r6
  _DWORD *v5; // r9
  int v6; // r5
  char *v7; // r11
  size_t v8; // r0
  int v9; // r4
  size_t v10; // r7
  char *v11; // r1
  bool v12; // zf
  int v13; // t1
  bool v14; // zf
  size_t v15; // r4
  int v16; // r1
  const char *v17; // r0
  bool v18; // zf
  const char *v19; // r3
  int v20; // r2
  bool v21; // zf
  char *v22; // r0
  int v23; // r10
  char *v24; // r0
  char *v25; // r11
  size_t v27; // r3
  int v28; // r2
  int *v29; // [sp+10h] [bp-1Ch]
  int v30; // [sp+24h] [bp-8h] BYREF

  v3 = 0;
  v30 = 0;
  v29 = (int *)sub_11A96C();
  if ( v29 )
  {
    if ( sub_10C010((int)a3) > 0 )
    {
      do
      {
        v5 = (_DWORD *)sub_10C01C(a3, v3);
        v6 = sub_122A8C(v5[1], "AS");
        if ( v6 )
        {
          if ( sub_122A8C(v5[1], "RDI") )
          {
            v9 = 0;
            sub_D0048(34, 163, 115, (int)"crypto/x509v3/v3_asid.c", 543);
            sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
            goto LABEL_38;
          }
          v7 = (char *)v5[2];
          v6 = 1;
          if ( !strcmp(v7, "inherit") )
          {
LABEL_36:
            if ( !sub_11A994(v29, v6) )
            {
              v9 = 0;
              sub_D0048(34, 163, 165, (int)"crypto/x509v3/v3_asid.c", 555);
              sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
              goto LABEL_38;
            }
            goto LABEL_29;
          }
        }
        else
        {
          v7 = (char *)v5[2];
          if ( !strcmp(v7, "inherit") )
            goto LABEL_36;
        }
        v8 = strspn(v7, "0123456789");
        v9 = (unsigned __int8)v7[v8];
        v10 = v8;
        v11 = &v7[v8];
        if ( v7[v8] )
        {
          v12 = v9 == 32;
          if ( v9 != 32 )
            v12 = v9 == 9;
          if ( v12 )
          {
            do
            {
              v27 = (size_t)&v11[1 - (_DWORD)v7];
              v13 = (unsigned __int8)*++v11;
              v9 = v13;
              v14 = v13 == 9;
              if ( v13 != 9 )
                v14 = v9 == 32;
            }
            while ( v14 );
          }
          else
          {
            v27 = v8;
          }
          if ( v9 != 45 )
          {
            v9 = 0;
            sub_D0048(34, 163, 162, (int)"crypto/x509v3/v3_asid.c", 571);
            sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
            goto LABEL_38;
          }
          v15 = v27 + 1;
          v16 = (unsigned __int8)v7[v27 + 1];
          v17 = &v7[v27 + 1];
          v18 = v16 == 9;
          if ( v16 != 9 )
            v18 = v16 == 32;
          if ( v18 )
          {
            v19 = &v7[v27 + 2];
            do
            {
              v20 = *(unsigned __int8 *)v19;
              v17 = v19;
              v15 = v19 - v7;
              ++v19;
              v21 = v20 == 9;
              if ( v20 != 9 )
                v21 = v20 == 32;
            }
            while ( v21 );
          }
          v22 = &v7[strspn(v17, "0123456789")];
          v23 = (unsigned __int8)v22[v15];
          if ( v22[v15] )
          {
            v9 = 0;
            sub_D0048(34, 163, 163, (int)"crypto/x509v3/v3_asid.c", 580);
            sub_D1240(6, "section:", *v5, ",name:", v5[1], ",value:", v5[2]);
            goto LABEL_38;
          }
          v24 = sub_E9E3C(v7);
          v25 = v24;
          if ( !v24 )
          {
            v9 = 0;
            sub_D0048(34, 163, 65, (int)"crypto/x509v3/v3_asid.c", 597);
            goto LABEL_38;
          }
          v24[v10] = v23;
          v30 = sub_122498(v23, v24);
          v9 = sub_122498(v23, &v25[v15]);
          CRYPTO_free(v25);
          if ( !v30 || !v9 )
          {
            v28 = 605;
LABEL_40:
            sub_D0048(34, 163, 65, (int)"crypto/x509v3/v3_asid.c", v28);
            goto LABEL_38;
          }
          if ( sub_126528(v30, v9) > 0 )
          {
            sub_D0048(34, 163, 116, (int)"crypto/x509v3/v3_asid.c", 610);
            goto LABEL_38;
          }
        }
        else if ( !sub_1226F8(v5, &v30) )
        {
          v9 = 0;
          sub_D0048(34, 163, 65, (int)"crypto/x509v3/v3_asid.c", 591);
          goto LABEL_38;
        }
        if ( !sub_11A9D8((int)v29, v6, v30, v9) )
        {
          v28 = 615;
          goto LABEL_40;
        }
        v30 = 0;
LABEL_29:
        ++v3;
      }
      while ( v3 < sub_10C010((int)a3) );
    }
    if ( sub_11AAC4((int)v29) )
    {
      return v29;
    }
    else
    {
      v9 = 0;
LABEL_38:
      sub_11A980((int)v29);
      ASN1_INTEGER_free(v30);
      ASN1_INTEGER_free(v9);
      return 0;
    }
  }
  else
  {
    sub_D0048(34, 163, 65, (int)"crypto/x509v3/v3_asid.c", 526);
    return 0;
  }
}
