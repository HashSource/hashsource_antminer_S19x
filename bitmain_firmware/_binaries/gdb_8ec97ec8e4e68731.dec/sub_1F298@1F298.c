unsigned int __fastcall sub_1F298(unsigned int result)
{
  unsigned int v1; // r3
  bool v2; // zf

  if ( result >> 7 > 7 )
    return ((unsigned __int8)result | 0x80) << (32 - (result >> 7));
  v1 = result >> 8;
  if ( result >> 8 == 2 )
    return (unsigned __int16)((_WORD)result << 8) | (result << 24);
  if ( v1 == 3 )
    return (unsigned __int8)result | (result << 24) | (unsigned __int16)((_WORD)result << 8) | (result << 16) & 0xFF0000;
  v2 = v1 == 1;
  if ( v1 == 1 )
    v1 = result << 16;
  else
    result = (unsigned __int8)result;
  if ( v2 )
    return v1 & 0xFF0000 | (unsigned __int8)result;
  return result;
}
