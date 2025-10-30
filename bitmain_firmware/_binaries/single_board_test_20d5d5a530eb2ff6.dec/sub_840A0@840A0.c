int __fastcall sub_840A0(_DWORD *a1)
{
  int v1; // r2
  int result; // r0
  int v4; // r8
  void (__fastcall *v5)(int, _DWORD, int, int, int, _DWORD *, _DWORD); // r5
  void (__fastcall *v6)(_DWORD *, int, _DWORD); // r3
  int v7; // [sp+10h] [bp-8h] BYREF
  int v8; // [sp+14h] [bp-4h] BYREF

  v1 = a1[31];
  *(_DWORD *)(v1 + 232) = 0;
  v7 = 2;
  result = sub_7D934((int)a1, 21, v1 + 236, (int)&v7, 1u, 0, &v8);
  v4 = result;
  if ( result <= 0 )
  {
    *(_DWORD *)(a1[31] + 232) = 1;
  }
  else
  {
    sub_B6ECC(a1[3], 11, 0, 0);
    v5 = (void (__fastcall *)(int, _DWORD, int, int, int, _DWORD *, _DWORD))a1[33];
    if ( v5 )
      v5(1, *a1, 21, a1[31] + 236, 2, a1, a1[34]);
    v6 = (void (__fastcall *)(_DWORD *, int, _DWORD))a1[301];
    if ( v6 || (v6 = *(void (__fastcall **)(_DWORD *, int, _DWORD))(a1[308] + 160)) != 0 )
      v6(a1, 16392, (unsigned __int16)__rev16(*(unsigned __int16 *)(a1[31] + 236)));
    return v4;
  }
  return result;
}
