int __fastcall sub_1F69D8(const char *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r4
  int *v5; // r6
  int v6; // r0
  int v7; // [sp+0h] [bp-D4h] BYREF
  const char *v8; // [sp+4h] [bp-D0h] BYREF
  int v9; // [sp+8h] [bp-CCh] BYREF
  int v10; // [sp+Ch] [bp-C8h] BYREF
  __int64 v11; // [sp+10h] [bp-C4h] BYREF
  _DWORD v12[16]; // [sp+18h] [bp-BCh] BYREF
  int v13[4]; // [sp+58h] [bp-7Ch] BYREF
  int v14; // [sp+68h] [bp-6Ch]

  v8 = a1;
  if ( sub_1F6110(&v8, &v9, &v10) )
    return sub_1F61A4(-1, 5);
  if ( sub_1F5F94(&v8, &v11) )
    return sub_1F61A4(-1, 5);
  v2 = v11;
  if ( sub_230020(v9, &v7, v10) )
    return sub_1F61A4(-1, 5);
  v3 = _xstat64(3, &v7, v13);
  v4 = v3;
  if ( v3 == -1 )
    return sub_1F6474();
  if ( !v3 && (((v14 & 0xF000) - 0x4000) & 0xFFFFBFFF) != 0 )
    return sub_1F61A4(-1, 13);
  if ( v2 && (sub_96184(v13, v12), v12[0] = 0, v5 = _errno_location(), v6 = sub_230484(v2, v12, 64), (*v5 = v6) != 0) )
    return sub_1F6474();
  else
    return sub_1F61A4(v4, 0);
}
