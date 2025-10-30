int __fastcall sub_A55FC(_DWORD *a1, int a2, int a3, void *a4, signed int a5, int a6)
{
  int v10; // r4
  signed int v11; // r0
  int v12; // r0
  int v13; // r9
  _BYTE *v14; // r10
  int v15; // r6
  size_t v17; // [sp+1Ch] [bp-90h]
  size_t n; // [sp+24h] [bp-88h] BYREF
  _BYTE v19[64]; // [sp+28h] [bp-84h] BYREF
  _BYTE v20[68]; // [sp+68h] [bp-44h] BYREF

  v10 = sub_DB6A8(1036, 0);
  if ( v10 )
  {
    v11 = sub_D8C78(a2);
    if ( v11 < 0 )
    {
      v15 = 0;
      sub_95494(a1, 80, 591, 68, (int)"ssl/tls13_enc.c", 192);
      sub_DB4BC(v10);
      return v15;
    }
    n = v11;
    if ( a4 )
    {
      if ( a3 )
        goto LABEL_5;
    }
    else
    {
      a5 = v11;
      a4 = &unk_6DF364;
      if ( a3 )
      {
LABEL_5:
        v12 = sub_D14F4(v11);
        v13 = v12;
        if ( v12 && sub_D1520(v12, a2, 0) > 0 && sub_D16E4(v13, v20, 0) > 0 )
        {
          sub_D1504(v13);
          if ( sub_A5334(a1, a2, a3, (int)"derived", 7u, (int)v20, n, (int)v19, n, 1) )
          {
            v14 = v19;
            v17 = n;
            goto LABEL_10;
          }
          sub_DB4BC(v10);
        }
        else
        {
          sub_95494(a1, 80, 591, 68, (int)"ssl/tls13_enc.c", 214);
          sub_D1504(v13);
          sub_DB4BC(v10);
        }
        return 0;
      }
    }
    v17 = a3;
    v14 = &unk_6DF364;
LABEL_10:
    if ( sub_DAC94(v10) <= 0
      || (v15 = 1, sub_DB77C(v10, -1, 1024, 4103, 1, 0) <= 0)
      || sub_DB77C(v10, -1, 1024, 4099, 0, a2) <= 0
      || sub_DB77C(v10, -1, 1024, 4101, a5, a4) <= 0
      || sub_DB77C(v10, -1, 1024, 4100, v17, v14) <= 0
      || sub_DAE14(v10, a6, &n) <= 0 )
    {
      v15 = 0;
      sub_95494(a1, 80, 591, 68, (int)"ssl/tls13_enc.c", 247);
    }
    sub_DB4BC(v10);
    if ( v14 == v19 )
      sub_E07F8((int)v14, n);
    return v15;
  }
  sub_95494(a1, 80, 591, 68, (int)"ssl/tls13_enc.c", 184);
  return 0;
}
