void __fastcall sub_36724(int a1)
{
  unsigned __int64 v1; // r0
  char v2[12]; // [sp+10h] [bp-82Ch] BYREF
  double v3; // [sp+810h] [bp-2Ch]
  double v4; // [sp+818h] [bp-24h]
  unsigned int v5; // [sp+824h] [bp-18h]
  unsigned __int8 v6; // [sp+82Bh] [bp-11h]
  int v7; // [sp+82Ch] [bp-10h]

  v6 = *(_BYTE *)(a1 + 72);
  v7 = 8 * (29 - v6);
  if ( v7 <= 7 )
    v7 = 8;
  v5 = sub_2CD98(*(_DWORD *)(a1 + 72)) & 0xFFFFFF;
  v4 = sub_68204(0xFFFF << v7, (0xFFFF << (v7 - 32)) | (0xFFFFu >> (32 - v7)));
  v3 = v4 / (double)v5;
  if ( v3 != dbl_85AE0 )
  {
    v1 = sub_682D0(LODWORD(v3), HIDWORD(v3));
    sub_31028(v1, byte_86F88, 8u, 0);
    dbl_85AE0 = v3;
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
    {
      snprintf(v2, 0x800u, "Network diff set to %s", byte_86F88);
      sub_1DB6C(5, v2, 0);
    }
  }
}
