bool __fastcall sub_C31B4(int a1)
{
  unsigned __int8 *v1; // r2
  __int16 *v3; // r1

  v1 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 24) + 24);
  if ( (unsigned int)*v1 - 3 > 1 )
    return 1;
  if ( *((_WORD *)v1 + 2) )
    return 1;
  if ( (*((_WORD *)v1 + 1) & 0x380) == 0x80 && (v3 = (__int16 *)*((_DWORD *)v1 + 7), v3 != &word_3B4A2C) && v3[2] )
    return 1;
  else
    return (*(_DWORD *)v1 & 0x20400) == 0x20000;
}
