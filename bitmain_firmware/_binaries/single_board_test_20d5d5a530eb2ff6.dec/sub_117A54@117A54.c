int __fastcall sub_117A54(signed int ***a1, int **a2)
{
  signed int *v2; // r2
  int v3; // r3
  signed int v4; // r5
  const void *v5; // r0
  size_t v6; // r4
  size_t v7; // r2
  int result; // r0

  v2 = **a1;
  v3 = **a2;
  v4 = *v2;
  v5 = (const void *)v2[2];
  v6 = *(_DWORD *)v3;
  v7 = v4;
  if ( v4 >= *(_DWORD *)v3 )
    v7 = *(_DWORD *)v3;
  result = memcmp(v5, *(const void **)(v3 + 8), v7);
  if ( !result )
    return v4 - v6;
  return result;
}
