int __fastcall sub_2F67B0(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r12
  unsigned int v5; // r0

  v4 = *(_DWORD *)(a1 + 4);
  v5 = a3 + a2;
  if ( *(_DWORD *)(v4 + 4) != 5 )
  {
    if ( a4 >= v5 )
      goto LABEL_3;
    return 0;
  }
  if ( a4 < v5 )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(v4 + 444) + 465) & 1) == 0 )
  {
LABEL_3:
    if ( a2 == 4 )
      return (*(int (__fastcall **)(int))(v4 + 40))(a3);
    if ( a2 == 8 )
      return (*(int (__fastcall **)(int))(v4 + 28))(a3);
    if ( a2 != 2 )
      sub_2A6BF0((int)"./dwarf2.c", 900, (int)"read_address");
    return (*(int (__fastcall **)(int))(v4 + 52))(a3);
  }
  if ( a2 == 4 )
    return (*(int (__fastcall **)(int))(v4 + 44))(a3);
  if ( a2 == 8 )
    return (*(int (__fastcall **)(int))(v4 + 32))(a3);
  if ( a2 != 2 )
    sub_2A6BF0((int)"./dwarf2.c", 886, (int)"read_address");
  return (*(int (__fastcall **)(int))(v4 + 56))(a3);
}
