int __fastcall sub_AD30C(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v10; // r11
  int v11; // r4
  int v12; // r0
  int v13; // r10
  size_t n; // [sp+2Ch] [bp-88h] BYREF
  _DWORD v15[33]; // [sp+30h] [bp-84h] BYREF

  if ( (*(_DWORD *)(a1[285] + 508) & 1) != 0 )
  {
    if ( sub_A9244(a1, 1)
      && sub_8B6E8((int)a1, (int)v15, 0x80u, &n)
      && sub_AC868(a1, (int)"extended master secret", 22, (int)v15, n, 0, 0, 0, 0, a3, a4, a2, 48, 1) )
    {
      sub_E07F8((int)v15, n);
      goto LABEL_16;
    }
    return 0;
  }
  v10 = a1[31];
  v15[0] = 48;
  v11 = sub_86518((int)a1);
  if ( v11 )
  {
    v12 = sub_DB6A8(1021, 0);
    v13 = v12;
    if ( v12
      && sub_DAC94(v12) > 0
      && sub_DB77C(v13, -1, 1024, 4096, 0, v11) > 0
      && sub_DB77C(v13, -1, 1024, 4097, a4, a3) > 0
      && sub_DB77C(v13, -1, 1024, 4098, 13, "master secret") > 0
      && sub_DB77C(v13, -1, 1024, 4098, 32, v10 + 172) > 0
      && sub_DB77C(v13, -1, 1024, 4098, 0, 0) > 0
      && sub_DB77C(v13, -1, 1024, 4098, 32, v10 + 140) > 0
      && sub_DB77C(v13, -1, 1024, 4098, 0, 0) > 0
      && sub_DAE14(v13, a2, v15) > 0 )
    {
      sub_DB4BC(v13);
LABEL_16:
      *a5 = 48;
      return 1;
    }
    sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 53);
    sub_DB4BC(v13);
    return 0;
  }
  sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 36);
  return 0;
}
