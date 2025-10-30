int __fastcall sub_6AC04(int a1, _DWORD *a2)
{
  size_t v3; // r5
  void *v5; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v5 = malloc(v3);
  *a2 = v5;
  if ( !v5 )
    return 3;
  memcpy(v5, *(const void **)a1, v3);
  return 0;
}
