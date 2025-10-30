int __fastcall sub_D6FAC(int a1, int a2)
{
  unsigned int v4; // r4
  int v5; // r8
  int v6; // r5
  int v8; // [sp+Ch] [bp-14h] BYREF
  _BYTE src[16]; // [sp+10h] [bp-10h] BYREF

  v8 = 0;
  if ( !a2 )
    return 0;
  v4 = sub_D8944(a1);
  if ( v4 > 0x10 )
    sub_BC328("assertion failed: l <= sizeof(iv)", "crypto/evp/e_rc2.c", 131);
  if ( v4 == sub_12D318(a2, &v8, src, v4) )
  {
    switch ( v8 )
    {
      case 58:
        v5 = 16;
        v6 = 128;
        break;
      case 120:
        v5 = 8;
        v6 = 64;
        break;
      case 160:
        v5 = 5;
        v6 = 40;
        break;
      default:
        v4 = -1;
        sub_D0048(6, 109, 108, (int)"crypto/evp/e_rc2.c", 116);
        return v4;
    }
    if ( (!v4 || sub_D8440(a1, 0, 0, 0, src, -1)) && sub_D83D4(a1, 3, v6, 0) > 0 && sub_D8784(a1, v5) > 0 )
      return v4;
  }
  return -1;
}
