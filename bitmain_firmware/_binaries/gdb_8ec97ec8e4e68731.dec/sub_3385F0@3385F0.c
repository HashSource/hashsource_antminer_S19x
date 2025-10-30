char *__fastcall sub_3385F0(char *result, __int16 a2, unsigned int a3)
{
  _DWORD *v3; // r3
  bool v4; // zf
  int v5; // r4
  char *v6; // r12
  char *v7; // r2
  char *v8; // r3

  if ( !a3 )
    return 0;
  if ( ((unsigned __int8)result & 3) != 0 )
  {
    if ( (unsigned __int8)*result == (unsigned __int8)a2 )
      return result;
    v3 = result + 1;
    while ( 1 )
    {
      --a3;
      result = (char *)v3;
      if ( !a3 )
        return 0;
      v4 = ((unsigned __int8)v3 & 3) == 0;
      v3 = (_DWORD *)((char *)v3 + 1);
      if ( v4 )
        break;
      if ( (unsigned __int8)*result == (unsigned __int8)a2 )
        return result;
    }
  }
  v5 = (unsigned __int16)(a2 << 8) | (unsigned __int8)a2 | (((unsigned __int16)(a2 << 8) | (unsigned __int8)a2) << 16);
  if ( a3 > 3 && (((*(_DWORD *)result ^ v5) - 16843009) & ~(*(_DWORD *)result ^ v5) & 0x80808080) == 0 )
  {
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
    if ( !a3 )
      return 0;
  }
LABEL_16:
  if ( (unsigned __int8)*result != (unsigned __int8)a2 )
  {
    v7 = &result[a3];
    v8 = result + 1;
    while ( 1 )
    {
      result = v8++;
      if ( result == v7 )
        break;
      if ( (unsigned __int8)*result == (unsigned __int8)a2 )
        return result;
    }
    return 0;
  }
  return result;
}
