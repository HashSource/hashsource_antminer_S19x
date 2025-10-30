bool __fastcall sub_EDD48(
        int (__fastcall *a1)(int, char **),
        const char *a2,
        int a3,
        int a4,
        _DWORD *a5,
        char *a6,
        int a7,
        int (__fastcall *a8)(char *, int, int, char *),
        char *s)
{
  unsigned int v11; // r0
  char *v12; // r11
  __int16 v13; // r2
  size_t v14; // r4
  char *v15; // r6
  _BOOL4 v16; // r5
  int *v17; // r11
  size_t v19; // r4
  int v20; // r0
  int v21; // r0
  int v22; // r0
  void *v23; // r0
  int v24; // r0
  int *v25; // r0
  int v26; // r3
  int v27; // [sp+0h] [bp-484h]
  signed int v30; // [sp+24h] [bp-460h] BYREF
  int v31; // [sp+28h] [bp-45Ch] BYREF
  char *v32; // [sp+2Ch] [bp-458h] BYREF
  unsigned __int8 v33[16]; // [sp+30h] [bp-454h] BYREF
  _BYTE v34[64]; // [sp+40h] [bp-444h] BYREF
  char v35[1028]; // [sp+80h] [bp-404h] BYREF

  v30 = 0;
  v31 = 0;
  if ( a5 )
  {
    v11 = sub_D8AD8((int)a5);
    v12 = sub_EAAB4(v11);
    if ( !v12
      || !sub_D8940((int)a5)
      || sub_D8940((int)a5) > 16
      || (v19 = strlen(v12) + 36, v19 + 2 * sub_D8940((int)a5) > 0x400) )
    {
      v27 = 330;
      v13 = 113;
LABEL_5:
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      sub_D0048(9, 105, v13, (int)"crypto/pem/pem_lib.c", v27);
      goto LABEL_6;
    }
  }
  else
  {
    v12 = 0;
  }
  v20 = a1(a4, 0);
  if ( v20 <= 0 )
  {
    v27 = 336;
    v13 = 13;
    goto LABEL_5;
  }
  v14 = v20;
  v15 = (char *)CRYPTO_malloc((void *)(v20 + 20));
  if ( !v15 )
  {
    sub_D0048(9, 105, 65, (int)"crypto/pem/pem_lib.c", 344);
    v16 = 0;
    v17 = 0;
    goto LABEL_6;
  }
  v32 = v15;
  v21 = a1(a4, &v32);
  v30 = v21;
  if ( !a5 )
  {
    v17 = 0;
    v35[0] = 0;
LABEL_30:
    v30 = sub_EDB94(a3, a2, v35, (int)v15, v21);
    v16 = v30 > 0;
    goto LABEL_6;
  }
  if ( !a6 )
  {
    if ( a8 )
    {
      v26 = a8(v35, 1024, 1, s);
      a7 = v26;
    }
    else
    {
      a7 = sub_189AF8((int)v35, 1024, 1, s);
      v26 = a7;
    }
    if ( v26 <= 0 )
    {
      v16 = 0;
      sub_D0048(9, 105, 111, (int)"crypto/pem/pem_lib.c", 357);
      v17 = 0;
      goto LABEL_6;
    }
    a6 = v35;
  }
  v22 = sub_D8940((int)a5);
  if ( sub_F497C(v33, v22) <= 0 )
  {
    v16 = 0;
    v17 = 0;
  }
  else
  {
    v23 = sub_D902C();
    if ( sub_15DEF4(a5, v23, v33, a6, a7, 1, v34, 0) )
    {
      if ( a6 == v35 )
        sub_E07F8(v35, 0x400u);
      v35[0] = 0;
      sub_ED5C8(v35, 10);
      v24 = sub_D8940((int)a5);
      sub_ED61C(v35, v12, v24, v33);
      v25 = (int *)sub_D7A5C();
      v17 = v25;
      if ( v25
        && sub_D875C(v25, a5, 0, (int)v34, v33)
        && sub_D7C9C(v17, (int)v15, &v31, v15, v30)
        && sub_D7EC0(v17, (int)&v15[v31], &v30) )
      {
        v21 = v31 + v30;
        v30 += v31;
        goto LABEL_30;
      }
      v16 = 0;
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
  }
LABEL_6:
  sub_E07F8(v34, 0x40u);
  sub_E07F8(v33, 0x10u);
  sub_D7A6C(v17);
  sub_E07F8(v35, 0x400u);
  sub_E0758(v15, v14, (size_t)"crypto/pem/pem_lib.c");
  return v16;
}
