int __fastcall sub_26F9C4(int a1)
{
  int v2; // r0
  int v3; // r5
  unsigned int v4; // r0
  unsigned int *v5; // r3

  v2 = sub_15FE8C(
         *(_DWORD *)(*(_DWORD *)a1 + 8),
         *(_DWORD *)(*(_DWORD *)a1 + 12),
         *(_DWORD *)(*(_DWORD *)a1 + 16),
         *(_DWORD *)(*(_DWORD *)a1 + 20),
         *(_DWORD *)(*(_DWORD *)a1 + 24));
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = sub_15DDFC(v2);
  v5 = *(unsigned int **)(*(_DWORD *)a1 + 4);
  if ( v4 < *v5 || v4 >= v5[1] )
    return 0;
  sub_15E10C(v3);
  return 1;
}
