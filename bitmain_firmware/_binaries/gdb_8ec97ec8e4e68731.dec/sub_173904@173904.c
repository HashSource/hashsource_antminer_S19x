int __fastcall sub_173904(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  const char *v5; // r1

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 == v3 )
    return 1;
  result = *(_DWORD *)(v2 + 8);
  if ( result )
  {
    v5 = *(const char **)(v3 + 8);
    return v5 && strcmp((const char *)result, v5) == 0;
  }
  return result;
}
