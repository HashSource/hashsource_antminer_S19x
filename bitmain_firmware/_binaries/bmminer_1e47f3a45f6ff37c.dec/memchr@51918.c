char *__fastcall memchr(char *result, unsigned __int8 a2, unsigned int a3)
{
  _DWORD *v3; // r3
  bool v4; // zf
  int v5; // r5
  char *v6; // r4
  char *v7; // r2
  char *v8; // r3

  if ( !a3 )
    return (char *)a3;
  if ( ((unsigned __int8)result & 3) == 0 )
  {
LABEL_10:
    v5 = a2 | (a2 << 8) | ((a2 | (a2 << 8)) << 16);
    if ( a3 <= 3 || (((*(_DWORD *)result ^ v5) - 16843009) & ~(*(_DWORD *)result ^ v5) & 0x80808080) != 0 )
      goto LABEL_16;
    v6 = result + 4;
    while ( 1 )
    {
      a3 -= 4;
      result = v6;
      v6 += 4;
      if ( a3 <= 3 )
        break;
      if ( (((*(_DWORD *)result ^ v5) - 16843009) & ~(*(_DWORD *)result ^ v5) & 0x80808080) != 0 )
        goto LABEL_16;
    }
    if ( a3 )
    {
LABEL_16:
      if ( (unsigned __int8)*result != a2 )
      {
        v7 = &result[a3];
        v8 = result + 1;
        while ( 1 )
        {
          v4 = v8 == v7;
          result = v8++;
          if ( v4 )
            break;
          if ( (unsigned __int8)*result == a2 )
            return result;
        }
        return 0;
      }
      return result;
    }
    return (char *)a3;
  }
  if ( (unsigned __int8)*result != a2 )
  {
    v3 = result + 1;
    while ( 1 )
    {
      --a3;
      result = (char *)v3;
      if ( !a3 )
        return (char *)a3;
      v4 = ((unsigned __int8)v3 & 3) == 0;
      v3 = (_DWORD *)((char *)v3 + 1);
      if ( v4 )
        goto LABEL_10;
      if ( (unsigned __int8)*result == a2 )
        return result;
    }
  }
  return result;
}
