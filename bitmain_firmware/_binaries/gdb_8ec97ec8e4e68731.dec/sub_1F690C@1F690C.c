int __fastcall sub_1F690C(const char *a1)
{
  int v2; // r0
  char v3[4]; // [sp+0h] [bp-84h] BYREF
  const char *v4; // [sp+4h] [bp-80h] BYREF
  int v5; // [sp+8h] [bp-7Ch] BYREF
  int v6; // [sp+Ch] [bp-78h] BYREF
  _BYTE v7[16]; // [sp+10h] [bp-74h] BYREF
  int v8; // [sp+20h] [bp-64h]

  v4 = a1;
  if ( sub_1F6110(&v4, &v5, &v6) || sub_230020(v5, v3, v6) )
    return sub_1F61A4(-1, 5);
  if ( !_xstat64(3, v3, v7) && (((v8 & 0xF000) - 0x4000) & 0xFFFFBFFF) != 0 )
    return sub_1F61A4(-1, 19);
  v2 = unlink(v3);
  if ( v2 == -1 )
    return sub_1F6474();
  else
    return sub_1F61A4(v2, 0);
}
