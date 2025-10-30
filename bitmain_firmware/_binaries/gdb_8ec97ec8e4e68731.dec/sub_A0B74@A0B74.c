unsigned int __fastcall sub_A0B74(int a1, int a2, int a3)
{
  int v3; // r2
  unsigned int result; // r0
  bool v5; // zf
  unsigned int v6; // r3

  v3 = *(_DWORD *)(*(_DWORD *)(sub_A0A60(a1) + 24) + 24) + 24 * (a3 + 2 * a2) - 48;
  result = *(_DWORD *)(v3 + 8);
  v6 = result & 0xFFFFFFF0;
  v5 = (result & 0xFFFFFFF0) == 0;
  if ( (result & 0xFFFFFFF0) != 0 )
    result >>= 4;
  else
    v6 = *(_DWORD *)(v3 + 12);
  if ( v5 )
    return 8 * *(_DWORD *)(v6 + 20);
  return result;
}
