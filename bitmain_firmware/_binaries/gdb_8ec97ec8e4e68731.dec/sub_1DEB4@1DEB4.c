int __fastcall sub_1DEB4(_DWORD *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  void *v4; // r0
  int v5; // r2
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  if ( (a1[3] & 0x2000000) != 0 )
    JUMPOUT(0x1D7B8);
  v1 = a1[3];
  v2 = v1 >> 20;
  if ( (BYTE1(v1) & 0xE) != 0xA )
  {
    if ( (v2 & 0x3A) != 0 && ((v1 >> 20) & 0x3F) == 5 )
    {
      a1[8] = 2;
      v7[0] = (unsigned __int16)v1 >> 12;
      v7[1] = HIWORD(v1) & 0xF;
      v4 = (void *)sub_93028(8);
      v5 = a1[8];
      a1[9] = v4;
      memcpy(v4, v7, 4 * v5);
      return 0;
    }
    return sub_1AB90(a1);
  }
  if ( (v2 & 0x20) != 0 && ((v1 >> 20) & 0x3E) != 4 )
    return sub_1AB90(a1);
  return sub_1DAB8(a1);
}
