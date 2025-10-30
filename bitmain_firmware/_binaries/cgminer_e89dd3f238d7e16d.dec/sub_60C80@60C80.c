int __fastcall sub_60C80(int a1, int *a2, const char *a3, int a4)
{
  int i; // [sp+14h] [bp-8h]

  if ( sub_60B90(a1, a2) )
    return 0;
  for ( i = *a2; ; i = *(_DWORD *)(i + 4) )
  {
    if ( a4 == *(_DWORD *)(i + 16) && !strcmp((const char *)(i + 24), a3) )
      return i;
    if ( i == a2[1] )
      break;
  }
  return 0;
}
