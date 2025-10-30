int __fastcall sub_4EE88(int a1, int a2, int a3)
{
  int i; // r4
  int result; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r4

  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      result = ((int (__fastcall *)(int, int))loc_1DD900)(a1, i);
      if ( result == 1 )
        break;
      if ( ++i == 16 )
        goto LABEL_5;
    }
    v8 = a2 + 4 * i;
    v9 = i;
    result = ((int (__fastcall *)(int, int, int))loc_1DEBAC)(a1, v9, v8);
  }
LABEL_5:
  if ( a3 )
  {
    result = ((int (__fastcall *)(int, int))loc_1DD900)(a1, 25);
    if ( result == 1 )
    {
      v10 = *(_DWORD *)(a2 + 64);
      result = ((int (__fastcall *)(int, int, int))loc_1DEBAC)(a1, 25, a2 + 64);
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(a2 + 64) & 0xFF0FFFFF | v10 & 0xF00000;
    }
  }
  return result;
}
