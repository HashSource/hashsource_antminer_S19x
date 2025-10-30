int __fastcall sub_1619A8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int (__fastcall *a8)(_BYTE *, int, int, char *),
        char *s)
{
  int v12; // r0
  int v13; // r4
  bool v14; // zf
  int v15; // r5
  int v16; // r4
  int v18; // r5
  int v19; // r9
  _BYTE v20[1028]; // [sp+10h] [bp-404h] BYREF

  v12 = sub_D8EE4(a2);
  v13 = v12;
  if ( !v12 )
  {
    sub_D0048(9, 126, 115, (int)"crypto/pem/pem_pk8.c", 73);
    return 0;
  }
  v14 = a4 == -1;
  if ( a4 == -1 )
    v14 = a5 == 0;
  if ( v14 )
  {
    if ( a3 )
      v18 = sub_114CC0(a1, v12);
    else
      v18 = sub_161970(a1, v12);
    sub_AE5FC(v13);
    return v18;
  }
  else
  {
    if ( a6 )
    {
      v15 = sub_162510(a4, a5, a6, a7, 0, 0, 0, v12);
    }
    else
    {
      if ( a8 )
        v19 = a8(v20, 1024, 1, s);
      else
        v19 = sub_ED544(v20, 1024, 1, s);
      if ( v19 <= 0 )
      {
        sub_D0048(9, 126, 111, (int)"crypto/pem/pem_pk8.c", 83);
        sub_AE5FC(v13);
        return 0;
      }
      v15 = sub_162510(a4, a5, v20, v19, 0, 0, 0, v13);
      sub_E07F8(v20, v19);
    }
    sub_AE5FC(v13);
    if ( v15 )
    {
      if ( a3 )
        v16 = sub_114B7C(a1, v15);
      else
        v16 = sub_1618A0(a1, v15);
      sub_12EF2C(v15);
      return v16;
    }
    else
    {
      return 0;
    }
  }
}
