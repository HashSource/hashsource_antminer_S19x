_BYTE *__fastcall sub_2C5CA8(_BYTE *result)
{
  _BYTE *v1; // r5
  unsigned int v2; // r4
  bool v3; // zf
  const char *v4; // r0
  char *v5; // r0

  if ( (*result & 3) != 2 )
  {
    v1 = result;
    v2 = 1;
    do
    {
      while ( 1 )
      {
        v3 = v2 == 17;
        result = (_BYTE *)v2++;
        if ( !v3 )
          break;
        while ( 1 )
        {
          v4 = sub_2B6768((unsigned int)result);
          v5 = sub_2AD7AC(*((_DWORD *)v1 + 12), v4);
          if ( !v5 )
            break;
          v3 = v2 == 17;
          *((_DWORD *)v5 + 5) |= 0x200000u;
          result = (_BYTE *)v2++;
          if ( !v3 )
            goto LABEL_7;
        }
      }
LABEL_7:
      ;
    }
    while ( v2 <= 0x17 );
  }
  return result;
}
