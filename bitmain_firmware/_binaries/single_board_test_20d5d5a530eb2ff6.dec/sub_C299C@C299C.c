int __fastcall sub_C299C(int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r4
  int v9; // r0

  v4 = sub_C59B8(*(_DWORD *)(a2 + 24));
  v5 = sub_C5A68(*(_DWORD *)(a1 + 24));
  v6 = sub_C5A68(*(_DWORD *)(a2 + 24));
  v7 = v5 == 0;
  if ( v5 )
    v7 = v4 == 0;
  v8 = v7;
  if ( !v6 )
    v8 |= 1u;
  if ( !v8 )
  {
    v9 = sub_C6EFC(v4, v5, v6, 0);
    if ( !v9 )
      return 1;
    if ( v9 == 1 )
      return 0;
  }
  return -2;
}
