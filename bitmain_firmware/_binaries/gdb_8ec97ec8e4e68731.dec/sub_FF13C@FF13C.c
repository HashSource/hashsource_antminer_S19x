void __fastcall sub_FF13C(const char *a1, char *a2)
{
  int i; // r5
  int j; // r4

  for ( i = sub_20F388(0); i; i = *(_DWORD *)(i + 12) )
  {
    for ( j = sub_C2618(i); j; j = *(_DWORD *)(j + 16) )
    {
      if ( !*(_DWORD *)(j + 20) && !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 12) && !strcmp(a2, *(const char **)(j + 4)) )
      {
        *(_DWORD *)(j + 20) = 1;
        sub_FF13C(a1, *(_DWORD *)j);
        *(_DWORD *)(j + 20) = 0;
      }
    }
  }
  sub_FF074(a1, a2);
}
