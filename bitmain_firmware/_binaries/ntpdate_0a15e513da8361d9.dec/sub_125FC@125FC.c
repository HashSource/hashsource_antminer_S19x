int __fastcall sub_125FC(_DWORD *a1, unsigned int a2)
{
  _DWORD *v3; // r0
  int v4; // r2
  char v5; // r12
  unsigned int v6; // r3

  if ( *a1 == 2 )
  {
    if ( a2 > 0x20 )
      return 41;
    v3 = a1 + 1;
    v4 = 4;
    v5 = a2 & 7;
    v6 = a2 >> 3;
    if ( (a2 & 7) == 0 )
      goto LABEL_13;
  }
  else
  {
    if ( *a1 != 10 )
      return 27;
    if ( a2 > 0x80 )
      return 41;
    v5 = a2 & 7;
    v3 = a1 + 1;
    v4 = 16;
    v6 = a2 >> 3;
    if ( (a2 & 7) == 0 )
      goto LABEL_13;
  }
  if ( (*((unsigned __int8 *)v3 + (a2 >> 3)) & (255 >> v5)) != 0 )
    return 25;
  ++v6;
LABEL_13:
  if ( !memcmp((char *)v3 + v6, &unk_1E3FC, v4 - v6) )
    return 0;
  else
    return 25;
}
