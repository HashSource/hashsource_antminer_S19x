int __fastcall sub_8CDA8(int a1)
{
  int result; // r0
  int v3; // r0

  result = sub_8B034(a1);
  if ( result )
  {
    sub_D00F0(result);
    **(_DWORD **)(a1 + 124) |= 0x800u;
    v3 = sub_8B204((_DWORD *)a1);
    **(_DWORD **)(a1 + 124) &= ~0x800u;
    if ( v3 > 0 && *(_DWORD *)(a1 + 1468) )
    {
      return 1;
    }
    else if ( *(_DWORD *)(a1 + 1100) == 1 )
    {
      return -(sub_95D8C(a1) != 0);
    }
    else
    {
      return -1;
    }
  }
  return result;
}
