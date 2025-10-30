_BYTE *__fastcall sub_568A0(_BYTE *a1, unsigned __int8 a2, unsigned int a3)
{
  int v6; // [sp+14h] [bp-18h]
  _DWORD *i; // [sp+20h] [bp-Ch]
  _BYTE *v9; // [sp+24h] [bp-8h]

  while ( a3 && ((unsigned __int8)a1 & 3) != 0 )
  {
    if ( a2 == (unsigned __int8)*a1 )
      return a1;
    --a3;
    ++a1;
  }
  for ( i = a1; a3 > 3; ++i )
  {
    v6 = a2 | (a2 << 8) | ((a2 | (a2 << 8)) << 16);
    if ( (((*i ^ v6) - 16843009) & ~(*i ^ v6) & 0x80808080) != 0 )
      break;
    a3 -= 4;
  }
  v9 = i;
  while ( a3 )
  {
    if ( a2 == (unsigned __int8)*v9 )
      return v9;
    --a3;
    ++v9;
  }
  return 0;
}
