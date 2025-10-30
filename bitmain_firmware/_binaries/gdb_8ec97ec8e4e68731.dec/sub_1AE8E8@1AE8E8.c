bool __fastcall sub_1AE8E8(int a1, int a2)
{
  const void *v2; // r4
  _BOOL4 result; // r0
  int v4; // [sp+0h] [bp-20h] BYREF
  size_t n; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-18h] BYREF
  _BYTE s2[16]; // [sp+10h] [bp-10h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  v2 = (const void *)((int (__fastcall *)(int, int *, size_t *))loc_1690CC)(a1, &v4, &n);
  if ( !v2 )
    return 0;
  sub_22F82C(v6, 1);
  if ( sub_230020(v4, s2, n) )
    result = 0;
  else
    result = memcmp(v2, s2, n) == 0;
  if ( v6[0] )
    *(_DWORD *)v6[0] = v6[1];
  return result;
}
