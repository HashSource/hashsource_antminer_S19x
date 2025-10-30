bool __fastcall sub_113EC0(int a1, int a2, char *s, signed int n)
{
  _BOOL4 v5; // r3
  int v9; // r3
  char *v11; // r0
  int v12; // r4
  int v13; // r0

  if ( a1 )
  {
    v5 = s == 0;
    if ( !n )
      v5 = 0;
    if ( !v5 )
    {
      if ( a2 > 0 && (a2 & 0x1000) != 0 )
      {
        v11 = sub_EAC84(*(_DWORD *)a1);
        return sub_12A898(a1 + 4, s, n, a2, v11) != 0;
      }
      if ( n < 0 )
        n = strlen(s);
      if ( sub_AE088(*(size_t **)(a1 + 4), s, n) )
      {
        if ( a2 == -1 )
          return 1;
        if ( a2 != -2 )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = a2;
          return 1;
        }
        v12 = *(_DWORD *)(a1 + 4);
        v13 = sub_1280A8(s, n, -1, 0);
        v9 = 1;
        *(_DWORD *)(v12 + 4) = v13;
        return v9;
      }
    }
    return 0;
  }
  return 0;
}
