void __fastcall sub_37730(int a1)
{
  unsigned __int64 v1; // d17
  unsigned __int64 v2; // r0
  unsigned __int64 v3; // r0
  char v4[4]; // [sp+10h] [bp-824h] BYREF
  double v5; // [sp+810h] [bp-24h]
  double v6; // [sp+818h] [bp-1Ch]
  unsigned int v7; // [sp+824h] [bp-10h]
  unsigned __int8 v8; // [sp+82Bh] [bp-9h]
  int v9; // [sp+82Ch] [bp-8h]

  v8 = *(_BYTE *)(a1 + 72);
  v9 = 8 * (29 - v8);
  if ( v9 <= 7 )
    v9 = 8;
  v7 = sub_2DE60(*(_DWORD *)(a1 + 72)) & 0xFFFFFF;
  LODWORD(v1) = v9;
  v2 = vshld_u64(0xFFFFu, v1);
  v6 = sub_68E74(v2, HIDWORD(v2));
  v5 = v6 / (double)v7;
  if ( dbl_86C78 != v5 )
  {
    v3 = sub_68F40(LODWORD(v5), HIDWORD(v5));
    sub_32154(v3, byte_88120, 8u, 0);
    dbl_86C78 = v5;
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(v4, 0x800u, "Network diff set to %s", byte_88120);
      sub_1E4EC(5, v4, 0);
    }
  }
}
