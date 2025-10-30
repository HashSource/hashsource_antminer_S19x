int __fastcall sub_15E23C(int a1, const char *a2, size_t a3, int a4, int a5, int a6)
{
  char *v10; // r0
  unsigned int v11; // r0
  char *v12; // r0
  int v13; // r8
  unsigned int v14; // r0
  char *v15; // r0
  int v16; // r4
  unsigned int v18; // [sp+14h] [bp-5Ch] BYREF
  unsigned int v19; // [sp+18h] [bp-58h] BYREF
  int (__fastcall *v20)(int, const char *, size_t, int, int, int, int); // [sp+1Ch] [bp-54h] BYREF
  _BYTE v21[80]; // [sp+20h] [bp-50h] BYREF

  v10 = sub_EAC84(a1);
  if ( !sub_15E1BC(0, (int)v10, &v18, &v19, &v20) )
  {
    sub_D0048(6, 116, 121, (int)"crypto/evp/evp_pbe.c", 95);
    if ( a1 )
      sub_127D0C(v21, 80, a1);
    else
      sub_E9F28(v21, "NULL", 0x50u);
    sub_D1240(2, "TYPE=", v21);
    return 0;
  }
  if ( a2 )
  {
    if ( a3 != -1 )
    {
      v11 = v18;
      if ( v18 != -1 )
        goto LABEL_5;
LABEL_11:
      v14 = v19;
      v13 = 0;
      if ( v19 != -1 )
        goto LABEL_7;
      goto LABEL_12;
    }
    a3 = strlen(a2);
    v11 = v18;
    if ( v18 == -1 )
      goto LABEL_11;
  }
  else
  {
    v11 = v18;
    a3 = 0;
    if ( v18 == -1 )
      goto LABEL_11;
  }
LABEL_5:
  v12 = sub_EAAB4(v11);
  v13 = sub_D99BC((int)v12);
  if ( !v13 )
  {
    v16 = 0;
    sub_D0048(6, 116, 160, (int)"crypto/evp/evp_pbe.c", 114);
    return v16;
  }
  v14 = v19;
  if ( v19 != -1 )
  {
LABEL_7:
    v15 = sub_EAAB4(v14);
    v16 = sub_D99DC((int)v15);
    if ( !v16 )
    {
      sub_D0048(6, 116, 161, (int)"crypto/evp/evp_pbe.c", 124);
      return v16;
    }
    goto LABEL_8;
  }
LABEL_12:
  v16 = 0;
LABEL_8:
  if ( v20(a5, a2, a3, a4, v13, v16, a6) )
    return 1;
  sub_D0048(6, 116, 120, (int)"crypto/evp/evp_pbe.c", 130);
  return 0;
}
