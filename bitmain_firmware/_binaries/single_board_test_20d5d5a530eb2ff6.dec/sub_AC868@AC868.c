int __fastcall sub_AC868(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13,
        int a14)
{
  int v18; // r4
  int v19; // r5
  int v20; // r0
  int v21; // r6

  v18 = a14;
  v19 = sub_86518((int)a1);
  if ( v19 )
  {
    v20 = sub_DB6A8(1021, 0);
    v21 = v20;
    if ( v20
      && sub_DAC94(v20) > 0
      && sub_DB77C(v21, -1, 1024, 4096, 0, v19) > 0
      && sub_DB77C(v21, -1, 1024, 4097, a11, a10) > 0
      && sub_DB77C(v21, -1, 1024, 4098, a3, a2) > 0
      && sub_DB77C(v21, -1, 1024, 4098, a5, a4) > 0
      && sub_DB77C(v21, -1, 1024, 4098, a7, a6) > 0
      && sub_DB77C(v21, -1, 1024, 4098, a9, a8) > 0
      && sub_DB77C(v21, -1, 1024, 4098, 0, 0) > 0
      && sub_DAE14(v21, a12, &a13) > 0 )
    {
      v18 = 1;
    }
    else if ( v18 )
    {
      v18 = 0;
      sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 53);
    }
    else
    {
      sub_D0048(20, 284, 68, "ssl/t1_enc.c", 55);
    }
    sub_DB4BC(v21);
    return v18;
  }
  else
  {
    if ( v18 )
      sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 36);
    else
      sub_D0048(20, 284, 68, "ssl/t1_enc.c", 38);
    return 0;
  }
}
