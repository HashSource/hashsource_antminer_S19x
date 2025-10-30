int __fastcall sub_12114(_DWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r3
  int v3; // r12
  unsigned int v4; // r2
  char *v5; // r0

  if ( *a1 == 2 )
  {
    if ( a2 <= 0x20 )
    {
      v2 = a1 + 1;
      v3 = 4;
      goto LABEL_5;
    }
    return 41;
  }
  if ( *a1 != 10 )
    return 27;
  if ( a2 > 0x80 )
    return 41;
  v2 = a1 + 1;
  v3 = 16;
LABEL_5:
  v4 = a2 >> 3;
  v5 = (char *)v2 + (a2 >> 3);
  if ( (a2 & 7) != 0 )
  {
    if ( (*((unsigned __int8 *)v2 + (a2 >> 3)) & (255 >> (a2 & 7))) != 0 )
      return 25;
    ++v4;
    v5 = (char *)v2 + v4;
  }
  if ( !memcmp(v5, &unk_1DE58, v3 - v4) )
    return 0;
  else
    return 25;
}
