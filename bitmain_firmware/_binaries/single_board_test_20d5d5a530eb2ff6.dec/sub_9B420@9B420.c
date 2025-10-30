int __fastcall sub_9B420(_DWORD *a1, int a2)
{
  int v2; // r3
  int v5; // r2
  int v6; // r5
  unsigned int v7; // r3
  int v8; // r2
  int result; // r0
  int *v10; // r3
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r3
  bool v14; // cc
  void (__fastcall *v15)(int, _DWORD, int, _DWORD, int, _DWORD *, _DWORD); // r7
  unsigned int v16; // [sp+14h] [bp-8h] BYREF

  v2 = a1[27];
  v5 = a1[30];
  v16 = 0;
  if ( sub_7E3D8((int)a1, a2, v5 + *(_DWORD *)(v2 + 4), a1[29], &v16) < 0 )
    return -1;
  if ( a2 == 22 )
  {
    v10 = (int *)a1[1];
    if ( (*(_DWORD *)(v10[25] + 48) & 8) != 0 )
      goto LABEL_20;
    v11 = *v10;
    v12 = *v10 < 772;
    if ( v11 == 0x10000 )
      v12 |= 1u;
    if ( v12 )
      goto LABEL_20;
    v13 = a1[16];
    v14 = v13 > 0x21;
    if ( v13 != 33 )
      v14 = v13 - 42 > 1;
    if ( v14 )
    {
LABEL_20:
      if ( !sub_A91B0(a1, *(_DWORD *)(a1[27] + 4) + a1[30], v16) )
        return -1;
    }
  }
  v6 = a1[29];
  v7 = v16;
  if ( v6 == v16 )
  {
    v15 = (void (__fastcall *)(int, _DWORD, int, _DWORD, int, _DWORD *, _DWORD))a1[33];
    result = 1;
    if ( v15 )
    {
      v15(1, *a1, a2, *(_DWORD *)(a1[27] + 4), v6 + a1[30], a1, a1[34]);
      return 1;
    }
  }
  else
  {
    v8 = a1[30];
    result = 0;
    a1[29] = v6 - v16;
    a1[30] = v7 + v8;
  }
  return result;
}
