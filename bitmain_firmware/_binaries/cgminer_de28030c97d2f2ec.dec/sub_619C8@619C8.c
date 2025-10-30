int __fastcall sub_619C8(int a1, int *a2, const char *a3, int a4)
{
  int i; // [sp+14h] [bp-8h]

  if ( sub_618DC(a1, a2) )
    return 0;
  for ( i = *a2; ; i = *(_DWORD *)(i + 4) )
  {
    if ( *(_DWORD *)(i + 16) == a4 && !strcmp((const char *)(i + 24), a3) )
      return i;
    if ( a2[1] == i )
      break;
  }
  return 0;
}
