int __fastcall sub_2E8E14(int result, int a2, int a3)
{
  int v3; // r12
  int v4; // r2

  if ( *(_BYTE *)(a2 + 48) != 10 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(result + 28) + 72);
    *(_BYTE *)(a2 + 51) &= ~0x80u;
    *(_DWORD *)(a2 + 40) = v3;
  }
  if ( a3 )
  {
    v4 = *(_DWORD *)(a2 + 32);
    *(_BYTE *)(a2 + 52) |= 8u;
    if ( v4 != -1 )
    {
      result = sub_2F02DC(*(_DWORD *)(*(_DWORD *)(result + 28) + 84), *(_DWORD *)(a2 + 56));
      *(_DWORD *)(a2 + 32) = -1;
      *(_DWORD *)(a2 + 56) = 0;
    }
  }
  return result;
}
