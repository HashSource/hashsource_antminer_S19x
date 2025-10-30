int __fastcall sub_179714(int a1, int a2)
{
  bool v2; // zf
  int v3; // r2
  int v4; // r0
  _DWORD v6[3]; // [sp+4h] [bp-14h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = v2;
  if ( v2 )
    return 0;
  v6[0] = a2;
  v4 = *(_DWORD *)(a1 + 8);
  v6[1] = v3;
  return sub_DFA98(v4, (int)v6);
}
