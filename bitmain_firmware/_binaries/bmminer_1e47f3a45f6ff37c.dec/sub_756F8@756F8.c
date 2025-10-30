int __fastcall sub_756F8(int a1, _BYTE *a2, _DWORD *a3)
{
  if ( a1 >= 0 )
  {
    if ( a1 > 127 )
    {
      if ( a1 >= 2048 )
      {
        if ( a1 >= 0x10000 )
        {
          if ( a1 >= 1114112 )
            return -1;
          *a2 = ((a1 & 0x1C0000) >> 18) - 16;
          a2[1] = ((a1 & 0x3F000) >> 12) + 0x80;
          a2[2] = ((a1 & 0xFC0) >> 6) + 0x80;
          a2[3] = (a1 & 0x3F) + 0x80;
          *a3 = 4;
        }
        else
        {
          *a2 = ((a1 & 0xF000) >> 12) - 32;
          a2[1] = ((a1 & 0xFC0) >> 6) + 0x80;
          a2[2] = (a1 & 0x3F) + 0x80;
          *a3 = 3;
        }
      }
      else
      {
        *a2 = ((a1 & 0x7C0) >> 6) - 64;
        a2[1] = (a1 & 0x3F) + 0x80;
        *a3 = 2;
      }
    }
    else
    {
      *a2 = a1;
      *a3 = 1;
    }
    return 0;
  }
  return -1;
}
