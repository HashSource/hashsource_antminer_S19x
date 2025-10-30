int __fastcall sub_A5334(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v13; // r4
  int v15; // r9
  int v16; // r1
  int v18; // r0
  int v19; // [sp+8h] [bp-164h] BYREF
  _BYTE v20[24]; // [sp+Ch] [bp-160h] BYREF
  _BYTE v21[328]; // [sp+24h] [bp-148h] BYREF

  v13 = sub_DB6A8(1036, 0);
  if ( !v13 )
    return 0;
  if ( a5 > 0xF9 )
  {
    if ( a10 )
      sub_95494(a1, 80, 561, 68, (int)"ssl/tls13_enc.c", 58);
    else
      sub_D0048(20, 561, 367, "ssl/tls13_enc.c", 64);
    sub_DB4BC(v13);
    return 0;
  }
  v15 = sub_D8C78(a2);
  if ( !sub_A82D4(v20, v21, 323, 0)
    || !sub_A8450(v20, v16, a9, 0, 2)
    || !sub_A8398(v20, 1)
    || !sub_A851C(v20)
    || !sub_A851C(v20)
    || !sub_A7EDC(v20) )
  {
    goto LABEL_9;
  }
  if ( !a6 )
    a7 = 0;
  if ( sub_A8544(v20, a6, a7, 1) && sub_A820C(v20, &v19) && sub_A8054(v20) )
  {
    if ( sub_DAC94(v13) <= 0
      || sub_DB77C(v13, -1, 1024, 4103, 2, 0) <= 0
      || sub_DB77C(v13, -1, 1024, 4099, 0, a2) <= 0
      || sub_DB77C(v13, -1, 1024, 4101, v15, a3) <= 0
      || sub_DB77C(v13, -1, 1024, 4102, v19, v21) <= 0
      || sub_DAE14(v13, a8, &a9) <= 0 )
    {
      sub_DB4BC(v13);
      if ( a10 )
        sub_95494(a1, 80, 561, 68, (int)"ssl/tls13_enc.c", 104);
      else
        sub_D0048(20, 561, 68, "ssl/tls13_enc.c", 106);
      v18 = 1;
    }
    else
    {
      sub_DB4BC(v13);
      v18 = 0;
    }
    return v18 ^ 1;
  }
  else
  {
LABEL_9:
    sub_DB4BC(v13);
    sub_A8640(v20);
    if ( a10 )
    {
      sub_95494(a1, 80, 561, 68, (int)"ssl/tls13_enc.c", 85);
      return 0;
    }
    else
    {
      sub_D0048(20, 561, 68, "ssl/tls13_enc.c", 87);
      return a10;
    }
  }
}
