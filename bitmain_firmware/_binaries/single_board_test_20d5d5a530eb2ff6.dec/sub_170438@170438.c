int *__fastcall sub_170438(int a1, _DWORD *a2, _DWORD *a3)
{
  int *v4; // r8
  unsigned int v5; // r7
  _DWORD *v6; // r5
  const char *v7; // r0
  _DWORD *v8; // r0
  int v9; // r4
  const char *v10; // r0
  int v11; // r0
  int *v12; // r9
  int v13; // r6
  _DWORD *v14; // r11
  int v15; // r0
  int *v16; // r0
  int v17; // r5
  _DWORD *v18; // r0
  _DWORD *v19; // r10
  int v20; // r0
  int *v21; // r6
  int v22; // r10
  _DWORD *v23; // r0
  _DWORD *v24; // r11
  int v25; // r9
  int v26; // r11
  int *v27; // r0
  int v28; // r4
  int v29; // r5
  int v30; // r0
  int v32; // r0
  int v33; // r0
  int v35; // [sp+14h] [bp-18h]

  v35 = sub_10C010((int)a3);
  v4 = (int *)sub_10BF44(0, v35);
  if ( !v4 )
  {
    sub_D0048(34, 154, 65, (int)"crypto/x509v3/v3_alt.c", 310);
    sub_10BDB4(0);
    return v4;
  }
  if ( v35 > 0 )
  {
    v5 = 0;
    v6 = a2;
    do
    {
      v9 = sub_10C01C(a3, v5);
      if ( !sub_122A8C(*(const char **)(v9 + 4), "email")
        && (v10 = *(const char **)(v9 + 8)) != 0
        && !strcmp(v10, "copy") )
      {
        if ( !v6 )
          goto LABEL_44;
        if ( *v6 != 1 )
        {
          v11 = v6[2];
          if ( v11 )
          {
            v12 = (int *)sub_10E660(v11);
          }
          else
          {
            v32 = v6[3];
            if ( !v32 )
            {
LABEL_44:
              v29 = 0;
              sub_D0048(34, 122, 125, (int)"crypto/x509v3/v3_alt.c", 354);
              v28 = 0;
              goto LABEL_33;
            }
            v12 = (int *)sub_16EA54(v32);
          }
          v13 = -1;
          v14 = v6;
          do
          {
            v13 = sub_113C8C(v12, 0x30u, v13);
            if ( v13 < 0 )
            {
              v6 = v14;
              goto LABEL_9;
            }
            v15 = sub_113CB0(v12, v13);
            v16 = (int *)sub_114128(v15);
            v17 = sub_AE228(v16);
            if ( !v17 || (v18 = (_DWORD *)sub_11D910(), (v19 = v18) == 0) )
            {
              v28 = v17;
              goto LABEL_32;
            }
            v18[1] = v17;
            *v18 = 1;
          }
          while ( sub_10BD3C(v4, (int)v18) );
          v29 = (int)v19;
          v28 = 0;
LABEL_38:
          sub_D0048(34, 122, 65, (int)"crypto/x509v3/v3_alt.c", 381);
LABEL_33:
          GENERAL_NAME_free(v29);
          j_ASN1_STRING_free_5(v28);
LABEL_34:
          v30 = (int)v4;
          v4 = 0;
          sub_10BFDC(v30, (void (__fastcall *)(int))GENERAL_NAME_free);
          return v4;
        }
      }
      else if ( !sub_122A8C(*(const char **)(v9 + 4), "email")
             && (v7 = *(const char **)(v9 + 8)) != 0
             && !strcmp(v7, "move") )
      {
        if ( !v6 )
          goto LABEL_44;
        if ( *v6 != 1 )
        {
          v20 = v6[2];
          if ( v20 )
          {
            v21 = (int *)sub_10E660(v20);
          }
          else
          {
            v33 = v6[3];
            if ( !v33 )
              goto LABEL_44;
            v21 = (int *)sub_16EA54(v33);
          }
          v22 = -1;
          while ( 1 )
          {
            v25 = sub_113C8C(v21, 0x30u, v22);
            v22 = v25 - 1;
            if ( v25 < 0 )
              break;
            v26 = sub_113CB0(v21, v25);
            v27 = (int *)sub_114128(v26);
            v28 = sub_AE228(v27);
            sub_113CE0(v21, v25);
            X509_NAME_ENTRY_free(v26);
            if ( !v28 || (v23 = (_DWORD *)sub_11D910(), (v24 = v23) == 0) )
            {
LABEL_32:
              v29 = 0;
              sub_D0048(34, 122, 65, (int)"crypto/x509v3/v3_alt.c", 374);
              goto LABEL_33;
            }
            v23[1] = v28;
            *v23 = 1;
            if ( !sub_10BD3C(v4, (int)v23) )
            {
              v29 = (int)v24;
              v28 = 0;
              goto LABEL_38;
            }
          }
        }
      }
      else
      {
        v8 = sub_170288(a1, (int)v6, v9);
        if ( !v8 )
          goto LABEL_34;
        sub_10BD3C(v4, (int)v8);
      }
LABEL_9:
      ++v5;
    }
    while ( v35 != v5 );
  }
  return v4;
}
