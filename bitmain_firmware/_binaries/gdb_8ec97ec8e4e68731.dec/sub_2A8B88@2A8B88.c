int __fastcall sub_2A8B88(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // [sp+50h] [bp-18h]

  if ( (*(_BYTE *)(a1 + 43) & 0x10) != 0 )
    return *(_DWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 || (*(int (**)(void))(v2 + 24))() )
    return 0;
  result = v4;
  *(_DWORD *)(a1 + 32) = v4;
  return result;
}
