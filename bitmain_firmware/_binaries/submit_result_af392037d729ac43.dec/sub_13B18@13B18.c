int __fastcall sub_13B18(int a1, _BYTE *a2, _DWORD *a3)
{
  int v3; // r7
  int v4; // r6
  int v5; // r5
  char v6; // r4
  char v8; // r4

  if ( a1 >= 0 )
  {
    if ( a1 <= 127 )
    {
      *a2 = a1;
      *a3 = 1;
      return 0;
    }
    if ( a1 < 2048 )
    {
      a2[1] = (a1 & 0x3F) + 0x80;
      *a2 = (((unsigned int)a1 >> 6) & 0x1F) - 64;
      *a3 = 2;
      return 0;
    }
    if ( a1 < 0x10000 )
    {
      v8 = (a1 & 0x3F) + 0x80;
      *a2 = ((unsigned __int16)a1 >> 12) - 32;
      a2[1] = (((unsigned int)a1 >> 6) & 0x3F) + 0x80;
      a2[2] = v8;
      *a3 = 3;
      return 0;
    }
    if ( a1 < 1114112 )
    {
      v3 = ((unsigned int)a1 >> 18) & 7;
      v4 = ((unsigned int)a1 >> 12) & 0x3F;
      v5 = ((unsigned int)a1 >> 6) & 0x3F;
      v6 = (a1 & 0x3F) + 0x80;
      *a2 = v3 - 16;
      a2[1] = v4 + 0x80;
      a2[2] = v5 + 0x80;
      a2[3] = v6;
      *a3 = 4;
      return 0;
    }
  }
  return -1;
}
