int __fastcall sub_2CC0A4(char *a1, int *a2)
{
  int v2; // r2
  char **v3; // r3
  int result; // r0

  if ( (a2[3] & 0x100) == 0 )
    return 0;
  v2 = *a2;
  v3 = (char **)a2[4];
  if ( *a2 && *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4) == 5 && *(_DWORD *)(v2 + 160) && a2[10] && v3 == &off_470950 )
    return 1;
  if ( a1 == v3[37] )
    return 0;
  if ( a1 != *((char **)v3[15] + 37) )
    return v3 != &off_470950;
  result = (int)v3[14];
  if ( result )
    return v3 != &off_470950;
  return result;
}
