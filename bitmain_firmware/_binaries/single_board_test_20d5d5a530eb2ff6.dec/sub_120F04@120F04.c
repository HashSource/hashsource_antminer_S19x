_DWORD *__fastcall sub_120F04(int a1, _DWORD *a2, char *s1)
{
  int v6; // r4
  int v7; // r3
  int v8; // r2
  int v9; // r6
  int v10; // r7
  _DWORD *v11; // r0
  int v13; // r2
  int v14; // r3
  int v15; // [sp+Ch] [bp-50h] BYREF
  int v16; // [sp+10h] [bp-4Ch] BYREF
  size_t n; // [sp+14h] [bp-48h] BYREF
  char v18[68]; // [sp+18h] [bp-44h] BYREF

  if ( strcmp(s1, "hash") )
    return sub_120EB8(a1, (int)a2, s1);
  v6 = sub_B2068();
  if ( !v6 )
  {
    sub_D0048(34, 115, 65, (int)"crypto/x509v3/v3_skey.c", 69);
    return 0;
  }
  if ( !a2 )
    goto LABEL_19;
  if ( *a2 != 1 )
  {
    v7 = a2[3];
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 20);
LABEL_7:
      if ( v8 )
      {
        sub_116488(0, &v15, &v16, 0, v8);
        v9 = v15;
        v10 = v16;
        v11 = sub_D93D8();
        if ( sub_D18F0(v9, v10, (int)v18, &n, v11, 0) )
        {
          if ( sub_1280A4(v6, v18, n) )
            return (_DWORD *)v6;
          sub_D0048(34, 115, 65, (int)"crypto/x509v3/v3_skey.c", 97);
        }
LABEL_15:
        j_ASN1_STRING_free(v6);
        return 0;
      }
      v13 = 87;
LABEL_14:
      sub_D0048(34, 115, 114, (int)"crypto/x509v3/v3_skey.c", v13);
      goto LABEL_15;
    }
    v14 = a2[2];
    if ( v14 )
    {
      v8 = *(_DWORD *)(v14 + 44);
      goto LABEL_7;
    }
LABEL_19:
    v13 = 77;
    goto LABEL_14;
  }
  return (_DWORD *)v6;
}
