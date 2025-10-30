int __fastcall sub_2AA874(int a1, int a2)
{
  char v2; // r3
  int v3; // r2
  int result; // r0
  char v6; // r3
  bool v7; // zf

  v2 = *(_BYTE *)(a1 + 40);
  if ( (v2 & 8) != 0 || (v2 & 7u) > 3 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else if ( (*(_BYTE *)(a1 + 40) & 7) != 0 )
  {
    return (v2 & 7) == a2;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 40) = v2 & 0xF8 | a2 & 7;
    result = (*(int (**)(void))(v3 + 4 * (a2 & 7) + 116))();
    v7 = result == 0;
    if ( result )
      result = 1;
    else
      v6 = *(_BYTE *)(a1 + 40);
    if ( v7 )
      *(_BYTE *)(a1 + 40) = v6 & 0xF8 | result & 7;
  }
  return result;
}
