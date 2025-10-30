int __fastcall sub_B0A4C(int a1, int a2)
{
  signed int v2; // r4
  signed int v3; // r5
  size_t v4; // r2
  const void *v5; // r1
  const void *v6; // r0
  int result; // r0

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = v2;
  v5 = *(const void **)a2;
  v6 = *(const void **)a1;
  if ( v2 >= v3 )
    v4 = v3;
  result = memcmp(v6, v5, v4);
  if ( !result )
    return v3 - v2;
  return result;
}
