int __fastcall sub_D83BC(int a1, int a2)
{
  int v2; // r3
  unsigned int v3; // r3

  v2 = *(_DWORD *)(a1 + 92);
  if ( a2 )
    v3 = v2 & 0xFFFFFEFF;
  else
    v3 = v2 | 0x100;
  *(_DWORD *)(a1 + 92) = v3;
  return 1;
}
