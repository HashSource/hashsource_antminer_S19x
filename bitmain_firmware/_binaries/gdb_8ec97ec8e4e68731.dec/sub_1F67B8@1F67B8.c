int __fastcall sub_1F67B8(const char *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  int *v5; // r0
  char v6[4]; // [sp+0h] [bp-FCh] BYREF
  const char *v7; // [sp+4h] [bp-F8h] BYREF
  int v8; // [sp+8h] [bp-F4h] BYREF
  int v9; // [sp+Ch] [bp-F0h] BYREF
  int v10; // [sp+10h] [bp-ECh] BYREF
  int v11; // [sp+14h] [bp-E8h] BYREF
  _BYTE v12[16]; // [sp+18h] [bp-E4h] BYREF
  int v13; // [sp+28h] [bp-D4h]
  _BYTE v14[16]; // [sp+80h] [bp-7Ch] BYREF
  int v15; // [sp+90h] [bp-6Ch]

  v7 = a1;
  if ( sub_1F6110(&v7, &v8, &v10) || sub_1F6110(&v7, &v9, &v11) || sub_230020(v8, v6, v10) || sub_230020(v9, v6, v11) )
    return sub_1F61A4(-1, 5);
  v2 = _xstat64(3, v6, v12);
  v3 = _xstat64(3, v6, v14);
  if ( !v2 && (((v13 & 0xF000) - 0x4000) & 0xFFFFBFFF) != 0 || !v3 && (((v15 & 0xF000) - 0x4000) & 0xFFFFBFFF) != 0 )
    return sub_1F61A4(-1, 13);
  v4 = rename(v6, v6);
  if ( v4 != -1 )
    return sub_1F61A4(v4, 0);
  v5 = _errno_location();
  if ( *v5 == 39 )
    *v5 = 17;
  return sub_1F6474();
}
