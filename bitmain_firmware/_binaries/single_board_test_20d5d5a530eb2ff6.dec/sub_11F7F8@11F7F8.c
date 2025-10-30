int *__fastcall sub_11F7F8(int a1, int a2, _DWORD *a3)
{
  int v4; // r8
  int *v5; // r7
  unsigned int v6; // r4
  char *v7; // r0
  char **v8; // r6
  char **v9; // r0
  bool v10; // zf
  char **v11; // r5
  char ***v12; // r0
  int v13; // r0
  _DWORD *v14; // r11
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3

  v4 = sub_10C010((int)a3);
  v5 = (int *)sub_10BF44(0, v4);
  if ( !v5 )
  {
    sub_D0048(34, 145, 65, (int)"crypto/x509v3/v3_pmaps.c", 76);
    return v5;
  }
  if ( v4 <= 0 )
    return v5;
  v6 = 0;
  while ( 1 )
  {
    v13 = sub_10C01C(a3, v6);
    v14 = (_DWORD *)v13;
    ++v6;
    if ( !*(_DWORD *)(v13 + 8) || (v7 = *(char **)(v13 + 4)) == 0 )
    {
      v11 = 0;
      sub_D0048(34, 145, 110, (int)"crypto/x509v3/v3_pmaps.c", 84);
      v8 = 0;
      sub_D1240(6, "section:", *v14, ",name:", v14[1], ",value:", v14[2]);
      goto LABEL_13;
    }
    v8 = sub_EB03C(v7, 0);
    v9 = sub_EB03C((char *)v14[2], 0);
    v10 = v9 == 0;
    if ( v9 )
      v10 = v8 == 0;
    v11 = v9;
    if ( v10 )
    {
      sub_D0048(34, 145, 110, (int)"crypto/x509v3/v3_pmaps.c", 92);
      sub_D1240(6, "section:", *v14, ",name:", v14[1], ",value:", v14[2]);
      goto LABEL_13;
    }
    v12 = (char ***)sub_11F7E4();
    if ( !v12 )
      break;
    *v12 = v8;
    v12[1] = v11;
    sub_10BD3C(v5, (int)v12);
    if ( v4 == v6 )
      return v5;
  }
  sub_D0048(34, 145, 65, (int)"crypto/x509v3/v3_pmaps.c", 98);
LABEL_13:
  ASN1_OBJECT_free(v8, v15, v16, v17);
  ASN1_OBJECT_free(v11, v18, v19, v20);
  sub_10BFDC((int)v5, (void (__fastcall *)(int))POLICY_MAPPING_free);
  return 0;
}
