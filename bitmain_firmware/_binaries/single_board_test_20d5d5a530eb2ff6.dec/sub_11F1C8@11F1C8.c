int *__fastcall sub_11F1C8(int a1, int a2, int a3)
{
  signed int v3; // r6
  _DWORD *v5; // r10
  _DWORD *v6; // r0
  _BYTE *v7; // r1
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  int v10; // r4
  bool v11; // cc
  unsigned int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int *v17; // r5
  int *v19; // r0
  char ***v20; // r2
  char **v21; // r4
  int v22; // r1
  char **v23; // [sp+1Ch] [bp-Ch] BYREF
  int v24; // [sp+20h] [bp-8h] BYREF
  _DWORD v25[2]; // [sp+24h] [bp-4h] BYREF

  v3 = 0;
  v23 = 0;
  v24 = 0;
  v25[0] = 0;
  v5 = (_DWORD *)sub_122740(a3);
  while ( v3 < sub_10C010((int)v5) )
  {
    v6 = (_DWORD *)sub_10C01C(v5, v3);
    v7 = (_BYTE *)v6[1];
    v8 = v6;
    if ( !v7 )
    {
LABEL_16:
      sub_D0048(34, 155, 153, (int)"crypto/x509v3/v3_pci.c", 259);
      sub_D1240(6, "section:", *v8, ",name:", v8[1], ",value:", v8[2]);
LABEL_13:
      ASN1_OBJECT_free(v23, v14, v15, v16);
      v17 = 0;
      ASN1_INTEGER_free(v24);
      v24 = 0;
      j_ASN1_STRING_free(v25[0]);
      v25[0] = 0;
      sub_11F538(0);
      goto LABEL_14;
    }
    if ( *v7 == 64 )
    {
      v9 = (_DWORD *)sub_11BB1C(a2);
      if ( !v9 )
      {
        sub_D0048(34, 155, 135, (int)"crypto/x509v3/v3_pci.c", 269);
        sub_D1240(6, "section:", *v8, ",name:", v8[1], ",value:", v8[2]);
        goto LABEL_13;
      }
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_10C010((int)v9) <= v10;
        v12 = v10++;
        if ( v11 )
          break;
        v13 = (_DWORD *)sub_10C01C(v9, v12);
        if ( !sub_11EBA8(v13, &v23, &v24, v25) )
        {
          sub_11BB68(a2, (int)v9);
          goto LABEL_13;
        }
      }
      sub_11BB68(a2, (int)v9);
    }
    else
    {
      if ( !v6[2] )
        goto LABEL_16;
      if ( !sub_11EBA8(v6, &v23, &v24, v25) )
      {
        sub_D1240(6, "section:", *v8, ",name:", v8[1], ",value:", v8[2]);
        goto LABEL_13;
      }
    }
    ++v3;
  }
  if ( !v23 )
  {
    sub_D0048(34, 155, 154, (int)"crypto/x509v3/v3_pci.c", 292);
    goto LABEL_13;
  }
  if ( ((unsigned int)sub_EAC84((int)v23) & 0xFFFFFFFD) == 0x299 && v25[0] )
  {
    sub_D0048(34, 155, 159, (int)"crypto/x509v3/v3_pci.c", 298);
    goto LABEL_13;
  }
  v19 = (int *)sub_11F524();
  v17 = v19;
  if ( !v19 )
  {
    sub_D0048(34, 155, 65, (int)"crypto/x509v3/v3_pci.c", 304);
    goto LABEL_13;
  }
  v20 = (char ***)v19[1];
  v21 = v23;
  v22 = v24;
  v20[1] = (char **)v25[0];
  *v20 = v21;
  v23 = 0;
  v25[0] = 0;
  *v19 = v22;
  v24 = 0;
LABEL_14:
  sub_10BFDC((int)v5, (void (__fastcall *)(int))X509V3_conf_free);
  return v17;
}
