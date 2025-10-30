int __fastcall sub_12B7E0(_BYTE *a1, int a2, unsigned int a3)
{
  int v3; // r3

  if ( !a1 )
  {
    if ( a3 <= 0x7F )
      return 1;
    if ( a3 < 0x800 )
      return 2;
    if ( a3 < 0x10000 )
      return 3;
    a2 = 6;
    goto LABEL_11;
  }
  if ( a2 <= 0 )
    return -1;
  if ( a3 <= 0x7F )
  {
    *a1 = a3;
    return 1;
  }
  if ( a3 < 0x800 )
  {
    if ( a2 != 1 )
    {
      a1[1] = a3 & 0x3F | 0x80;
      *a1 = (a3 >> 6) | 0xC0;
      return 2;
    }
    return -1;
  }
  if ( a3 >= 0x10000 )
  {
LABEL_11:
    if ( a3 >= 0x200000 )
    {
      if ( a3 >= 0x4000000 )
      {
        if ( a2 > 5 )
        {
          v3 = 6;
          if ( a1 )
          {
            *a1 = ((a3 & 0x40000000) != 0) | 0xFC;
            v3 = 6;
            a1[1] = HIBYTE(a3) & 0x3F | 0x80;
            a1[2] = (a3 >> 18) & 0x3F | 0x80;
            a1[3] = (a3 >> 12) & 0x3F | 0x80;
            a1[4] = (a3 >> 6) & 0x3F | 0x80;
            a1[5] = a3 & 0x3F | 0x80;
          }
          return v3;
        }
      }
      else if ( a2 > 4 )
      {
        v3 = 5;
        if ( a1 )
        {
          a1[1] = (a3 >> 18) & 0x3F | 0x80;
          *a1 = HIBYTE(a3) | 0xF8;
          v3 = 5;
          a1[2] = (a3 >> 12) & 0x3F | 0x80;
          a1[3] = (a3 >> 6) & 0x3F | 0x80;
          a1[4] = a3 & 0x3F | 0x80;
        }
        return v3;
      }
    }
    else if ( a2 > 3 )
    {
      v3 = 4;
      if ( a1 )
      {
        a1[1] = (a3 >> 12) & 0x3F | 0x80;
        *a1 = (a3 >> 18) | 0xF0;
        v3 = 4;
        a1[2] = (a3 >> 6) & 0x3F | 0x80;
        a1[3] = a3 & 0x3F | 0x80;
      }
      return v3;
    }
    return -1;
  }
  if ( a2 <= 2 )
    return -1;
  a1[1] = (a3 >> 6) & 0x3F | 0x80;
  *a1 = (a3 >> 12) | 0xE0;
  a1[2] = a3 & 0x3F | 0x80;
  return 3;
}
