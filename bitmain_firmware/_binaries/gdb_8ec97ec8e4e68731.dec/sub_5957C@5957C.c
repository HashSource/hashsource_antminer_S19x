void __fastcall sub_5957C(int a1)
{
  int v1; // r2

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 12) & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 12) |= 0x10u;
      sub_5933C(v1, 0);
      *(_BYTE *)(a1 + 12) &= ~0x10u;
    }
  }
}
