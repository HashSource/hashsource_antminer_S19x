int __fastcall sub_E8D70(int a1, void *a2, size_t a3)
{
  __int64 v6; // r2
  __int64 v7; // r6
  __int64 v8; // r6
  __int64 v9; // r4
  __int64 v11; // [sp+0h] [bp-40h]
  __int64 v12; // [sp+8h] [bp-38h] BYREF
  __int64 v13; // [sp+10h] [bp-30h]

  if ( a3 - 1 > 0xF )
    return -1;
  v11 = *(_QWORD *)(a1 + 136);
  v13 = *(_QWORD *)(a1 + 144) ^ *(_QWORD *)(a1 + 128) ^ *(_QWORD *)(a1 + 56);
  v6 = v11 ^ *(_QWORD *)(a1 + 120);
  v7 = *(_QWORD *)(a1 + 48);
  HIDWORD(v6) ^= HIDWORD(v7);
  v12 = v6 ^ (unsigned int)v7;
  (*(void (__fastcall **)(__int64 *, __int64 *, _DWORD, _DWORD, _DWORD, _DWORD))a1)(
    &v12,
    &v12,
    *(_DWORD *)(a1 + 8),
    *(_DWORD *)a1,
    v11,
    HIDWORD(v11));
  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(_QWORD *)(a1 + 112);
  v12 ^= v8;
  v13 ^= v9;
  memcpy(a2, &v12, a3);
  return 1;
}
