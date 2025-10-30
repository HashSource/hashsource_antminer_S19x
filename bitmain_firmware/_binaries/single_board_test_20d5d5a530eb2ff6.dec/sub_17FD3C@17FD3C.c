int __fastcall sub_17FD3C(int a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r7
  int v5; // r0
  int v6; // r4
  char *v7; // r5
  char *v8; // r8
  void **v9; // r6
  int v10; // r9
  signed int v11; // r4
  unsigned int v12; // r11
  int v13; // r2
  int v14; // r0
  int v15; // r7
  int v16; // r5
  const char *v17; // r9
  _DWORD *v19; // [sp+8h] [bp-2Ch]
  unsigned int v20; // [sp+10h] [bp-24h]
  unsigned int v21; // [sp+1Ch] [bp-18h]
  char *endptr; // [sp+28h] [bp-Ch] BYREF
  int v23; // [sp+2Ch] [bp-8h] BYREF

  v3 = sub_BBDB4(a1);
  v19 = (_DWORD *)sub_13B390(a2, v3);
  if ( v19 )
  {
    v4 = 0;
    if ( sub_10C010((int)v19) <= 0 )
      return 1;
    while ( 1 )
    {
      v5 = sub_10C01C(v19, v4);
      v6 = *(_DWORD *)(v5 + 4);
      v7 = *(char **)(v5 + 8);
      v23 = 0;
      v8 = sub_EAFD0(v6);
      if ( !v8 && (v8 = sub_EAF68(v6)) == 0 || (v9 = sub_122740(v7)) == 0 )
      {
        sub_D0048(13, 222, 218, (int)"crypto/asn1/asn_mstbl.c", 99);
        v9 = 0;
        sub_D1240(4, "name=", v6, ", value=", v7);
LABEL_23:
        sub_10BFDC((int)v9, (void (__fastcall *)(int))X509V3_conf_free);
        sub_D0048(13, 223, 219, (int)"crypto/asn1/asn_mstbl.c", 35);
        return 0;
      }
      v10 = 0;
      v11 = 0;
      v20 = -1;
      v12 = -1;
      v21 = v4;
      while ( v11 < sub_10C010((int)v9) )
      {
        v14 = sub_10C01C(v9, v11);
        v15 = *(_DWORD *)(v14 + 4);
        v16 = v14;
        if ( *(_BYTE *)v15 == 109 )
        {
          v13 = *(unsigned __int8 *)(v15 + 1);
          if ( v13 == 105 )
          {
            if ( *(_BYTE *)(v15 + 2) == 110 && !*(_BYTE *)(v15 + 3) )
            {
              v12 = strtoul(*(const char **)(v14 + 8), &endptr, *(unsigned __int8 *)(v15 + 3));
              if ( *endptr )
                goto LABEL_22;
              goto LABEL_10;
            }
          }
          else if ( v13 == 97 && *(_BYTE *)(v15 + 2) == 120 && !*(_BYTE *)(v15 + 3) )
          {
            v20 = strtoul(*(const char **)(v14 + 8), &endptr, *(unsigned __int8 *)(v15 + 3));
            if ( *endptr )
              goto LABEL_22;
            goto LABEL_10;
          }
        }
        if ( !strcmp(*(const char **)(v14 + 4), "mask") )
        {
          if ( !sub_12C9A0(*(char **)(v16 + 8), &v23) || !v23 )
          {
LABEL_22:
            sub_D0048(13, 222, 218, (int)"crypto/asn1/asn_mstbl.c", 99);
            sub_D1240(4, "field=", *(_DWORD *)(v16 + 4), ", value=", *(_DWORD *)(v16 + 8));
            goto LABEL_23;
          }
        }
        else
        {
          if ( strcmp((const char *)v15, "flags") )
            goto LABEL_22;
          v17 = *(const char **)(v16 + 8);
          if ( !strcmp(v17, "nomask") )
          {
            v10 = 2;
          }
          else
          {
            if ( strcmp(v17, "none") )
              goto LABEL_22;
            v10 = 1;
          }
        }
LABEL_10:
        ++v11;
      }
      if ( !sub_12A914((int)v8, v12, v20, v23, v10) )
      {
        sub_D0048(13, 222, 65, (int)"crypto/asn1/asn_mstbl.c", 109);
        goto LABEL_23;
      }
      v4 = v21 + 1;
      sub_10BFDC((int)v9, (void (__fastcall *)(int))X509V3_conf_free);
      if ( (int)(v21 + 1) >= sub_10C010((int)v19) )
        return 1;
    }
  }
  sub_D0048(13, 223, 172, (int)"crypto/asn1/asn_mstbl.c", 29);
  return 0;
}
