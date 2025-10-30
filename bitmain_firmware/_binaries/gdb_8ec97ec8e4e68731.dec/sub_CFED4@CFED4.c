bool __fastcall sub_CFED4(int a1, int a2)
{
  const void *v3; // r4
  _BOOL4 result; // r0
  size_t n; // [sp+0h] [bp-24h] BYREF
  int v6; // [sp+4h] [bp-20h] BYREF
  _DWORD v7[3]; // [sp+8h] [bp-1Ch] BYREF

  v6 = a2;
  v3 = (const void *)((int (__fastcall *)(int, int *, size_t *))loc_1690CC)(a1, &v6, &n);
  if ( !v3 )
    return 0;
  sub_22F82C(v7, 0);
  if ( sub_230020(a2, &n, n) )
    result = 0;
  else
    result = memcmp(&n, v3, n) == 0;
  if ( v7[0] )
    *(_DWORD *)v7[0] = v7[1];
  return result;
}
