_BYTE *__fastcall sub_1C3D00(_BYTE *result)
{
  int v1; // r2
  int v2; // r12
  int v3; // lr
  unsigned int v4; // r3
  _BYTE *v5; // r1
  bool v6; // cc
  char v7; // r4
  char v8; // r0

  if ( result )
  {
    if ( *result != 60 )
      return 0;
    v1 = 0;
    v2 = 0;
    v3 = 1;
    while ( 1 )
    {
      v4 = (unsigned __int8)result[1];
      v5 = result + 1;
      if ( !result[1] )
        return 0;
      if ( v4 == 58 )
      {
        if ( v1 > 1 )
          return 0;
        ++v1;
        v2 = 0;
        goto LABEL_9;
      }
      if ( v4 <= 0x3A )
        break;
      if ( v4 != 62 )
      {
        if ( v4 > 0x3E )
        {
          if ( v4 == 123 || v4 == 125 )
            return 0;
        }
        else if ( v4 == 60 )
        {
          v2 |= v1;
          ++v3;
          if ( v2 )
            return 0;
          v1 = 0;
          goto LABEL_9;
        }
        goto LABEL_17;
      }
      v1 |= v2;
      if ( v1 )
        return 0;
      if ( !--v3 )
      {
        result += 2;
        return result;
      }
      v2 = 1;
LABEL_9:
      result = v5;
    }
    if ( v4 == 34 || v4 == 39 )
      return 0;
    if ( v4 == 32 )
    {
      v1 = 0;
      v2 = 0;
      goto LABEL_9;
    }
LABEL_17:
    if ( v4 - 97 > 0x19 && v4 - 65 > 0x1A )
    {
      v6 = v4 > 0x2C;
      if ( v4 != 44 )
        v6 = v4 - 48 > 9;
      v7 = v6;
      if ( v4 == 38 )
        v7 = 0;
      v8 = v4 - 40 > 2 ? v7 : 0;
      if ( (v4 & 0xFD) != 0x5D && v8 & 1 )
        return 0;
    }
    v2 = 0;
    v1 = 0;
    goto LABEL_9;
  }
  return result;
}
