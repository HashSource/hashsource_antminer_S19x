int __fastcall sub_1735BC(int a1, int a2, int a3)
{
  int result; // r0

  result = ((int (__fastcall *)(int, int, int))loc_1734E0)(a1, 21, a2);
  if ( a3 )
    *(_BYTE *)(*(_DWORD *)(result + 24) + 1) |= 1u;
  return result;
}
