char **__fastcall sub_2CFFF0(int a1, int *a2)
{
  int v2; // r5
  char **v4; // r1
  char **result; // r0
  int v6; // r3
  char *v7; // r3

  v2 = *a2;
  if ( !*a2 )
    return 0;
  v4 = *(char ***)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 396);
  if ( !v4 || (result = sub_2CFF14((const char *)v2, v4, (*((unsigned __int8 *)a2 + 25) >> 2) & 1)) == 0 )
  {
    if ( *(_BYTE *)v2 == 46 )
    {
      v6 = *(unsigned __int8 *)(v2 + 1);
      if ( (unsigned int)(v6 - 98) <= 0x18 )
      {
        v7 = &aGetProgramHead[4 * v6 - 392];
        result = (char **)*((_DWORD *)v7 + 30);
        if ( result )
          return sub_2CFF14((const char *)v2, *((char ***)v7 + 30), (*((unsigned __int8 *)a2 + 25) >> 2) & 1);
        return result;
      }
    }
    return 0;
  }
  return result;
}
