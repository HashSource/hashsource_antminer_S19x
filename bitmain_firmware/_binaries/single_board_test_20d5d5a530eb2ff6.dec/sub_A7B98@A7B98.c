int __fastcall sub_A7B98(_DWORD *a1)
{
  int v1; // r5
  char v3; // lr
  char v4; // r7
  int result; // r0
  int v6; // r5
  void (__fastcall *v7)(int, _DWORD, int, int, int, _DWORD *, _DWORD); // r6
  void (__fastcall *v8)(_DWORD *, int, _DWORD); // r3
  _BYTE v9[4]; // [sp+10h] [bp-Ch] BYREF
  size_t v10[2]; // [sp+14h] [bp-8h] BYREF

  v1 = a1[31];
  v3 = *(_BYTE *)(v1 + 236);
  v4 = *(_BYTE *)(v1 + 237);
  *(_DWORD *)(v1 + 232) = 0;
  v9[0] = v3;
  v9[1] = v4;
  result = sub_7CE6C((int)a1, 21, v9, 2u, 0, v10);
  v6 = result;
  if ( result <= 0 )
  {
    *(_DWORD *)(a1[31] + 232) = 1;
  }
  else
  {
    sub_B6ECC(a1[3], 11, 0, 0);
    v7 = (void (__fastcall *)(int, _DWORD, int, int, int, _DWORD *, _DWORD))a1[33];
    if ( v7 )
      v7(1, *a1, 21, a1[31] + 236, 2, a1, a1[34]);
    v8 = (void (__fastcall *)(_DWORD *, int, _DWORD))a1[301];
    if ( v8 || (v8 = *(void (__fastcall **)(_DWORD *, int, _DWORD))(a1[308] + 160)) != 0 )
      v8(a1, 16392, (unsigned __int16)__rev16(*(unsigned __int16 *)(a1[31] + 236)));
    return v6;
  }
  return result;
}
