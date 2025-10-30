int __fastcall sub_AD174(_DWORD *a1, int a2, int a3, int a4)
{
  int v9; // r10
  int v10; // r4
  int v11; // r0
  int v12; // r11
  int v13; // [sp+8h] [bp-54h]
  size_t v14; // [sp+Ch] [bp-50h]
  size_t n; // [sp+10h] [bp-4Ch] BYREF
  int v16; // [sp+14h] [bp-48h] BYREF
  _BYTE v17[68]; // [sp+18h] [bp-44h] BYREF

  if ( sub_A9244(a1, 0) && sub_8B6E8((int)a1, (int)v17, 0x40u, &n) )
  {
    v9 = a1[285];
    v16 = 12;
    v14 = n;
    v13 = *(_DWORD *)(v9 + 4);
    v10 = sub_86518((int)a1);
    if ( !v10 )
    {
      sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 36);
      return 0;
    }
    v11 = sub_DB6A8(1021, 0);
    v12 = v11;
    if ( v11
      && sub_DAC94(v11) > 0
      && sub_DB77C(v12, -1, 1024, 4096, 0, v10) > 0
      && sub_DB77C(v12, -1, 1024, 4097, v13, v9 + 72) > 0
      && sub_DB77C(v12, -1, 1024, 4098, a3, a2) > 0
      && sub_DB77C(v12, -1, 1024, 4098, v14, v17) > 0
      && sub_DB77C(v12, -1, 1024, 4098, 0, 0) > 0
      && sub_DB77C(v12, -1, 1024, 4098, 0, 0) > 0
      && sub_DB77C(v12, -1, 1024, 4098, 0, 0) > 0
      && sub_DAE14(v12, a4, &v16) > 0 )
    {
      sub_DB4BC(v12);
      sub_E07F8((int)v17, n);
      return 12;
    }
    sub_95494(a1, 80, 284, 68, (int)"ssl/t1_enc.c", 53);
    sub_DB4BC(v12);
  }
  return 0;
}
