int __fastcall sub_2FF728(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  bool v4; // zf
  char v5; // r3
  int v6; // r3
  char *v9; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8);
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 48) + 4) + 8);
  v4 = v2 == v3;
  if ( v2 != v3 )
    v4 = v3 == 2;
  v5 = !v4;
  if ( v2 == 2 )
    v6 = 0;
  else
    v6 = v5 & 1;
  if ( !v6 )
    return 1;
  if ( v2 )
    LOWORD(v9) = -9116;
  else
    LOWORD(v9) = -9184;
  HIWORD(v9) = 65;
  sub_2A6A5C(v9, a1);
  ((void (__fastcall *)(int))loc_2A6C48)(3);
  return 0;
}
