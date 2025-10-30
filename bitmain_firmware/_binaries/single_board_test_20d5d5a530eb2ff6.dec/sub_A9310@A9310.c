int __fastcall sub_A9310(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r9
  int v13; // r4
  int v14; // r0
  int v15; // r3

  v8 = sub_A9244(a1, 0);
  if ( !v8 )
    return v8;
  v10 = sub_D8D8C(*(_DWORD *)(a1[31] + 216));
  if ( sub_D8C70(v10) != 114 )
  {
    sub_95494(a1, 80, 285, 324, (int)"ssl/s3_enc.c", 426);
    return 0;
  }
  v11 = sub_D14F4(114);
  v12 = v11;
  if ( !v11 )
  {
    v8 = 0;
    sub_95494(a1, 80, 285, 65, (int)"ssl/s3_enc.c", 433);
    return v8;
  }
  v13 = sub_D17B4(v11, *(_DWORD *)(a1[31] + 216));
  if ( v13 )
  {
    v14 = sub_D8D8C(v12);
    v13 = sub_D8C78(v14);
    if ( v13 < 0 )
    {
      v15 = 446;
    }
    else
    {
      if ( (!a2 || sub_D16D8(v12, a2, a3) > 0)
        && sub_D1948(v12, 29, *(_DWORD *)(a1[285] + 4), a1[285] + 72) > 0
        && sub_D16E4(v12, a4, 0) > 0 )
      {
        goto LABEL_8;
      }
      v15 = 457;
    }
    sub_95494(a1, 80, 285, 68, (int)"ssl/s3_enc.c", v15);
    v13 = 0;
  }
  else
  {
    sub_95494(a1, 80, 285, 68, (int)"ssl/s3_enc.c", 438);
  }
LABEL_8:
  sub_D1504(v12);
  return v13;
}
