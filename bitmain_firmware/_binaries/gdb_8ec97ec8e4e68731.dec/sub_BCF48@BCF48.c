int __fastcall sub_BCF48(int result, unsigned int a2, int *a3, int a4)
{
  unsigned int v4; // r12
  int v5; // lr
  int v6; // r1
  int (__fastcall *v7)(int, int); // r3
  int v8; // r1
  int v9; // r3
  unsigned __int8 v10; // r2

  v4 = *(_DWORD *)(a4 + 20);
  if ( v4 < a2 )
  {
    v5 = *(_DWORD *)(a4 + 24);
    v6 = 8 * v4;
    v7 = sub_C0A74;
    if ( (*(_BYTE *)(v5 + 1) & 1) == 0 )
      v7 = sub_C0A68;
    return v7(result, v6);
  }
  if ( v4 == a2 )
  {
    v8 = *(_DWORD *)(a4 + 24);
    v9 = *a3;
    v10 = *(_BYTE *)(v8 + 1);
    if ( ((*(_BYTE *)(v9 + 1) ^ v10) & 1) == 0 )
      return result;
    v7 = sub_C0A74;
    v6 = 8 * v4;
    if ( (v10 & 1) == 0 )
      v7 = sub_C0A68;
    return v7(result, v6);
  }
  if ( v4 > a2 && (*(_BYTE *)(*(_DWORD *)(a4 + 24) + 1) & 1) != 0 )
    return sub_C0A74(result, 8 * v4);
  return result;
}
