int __fastcall sub_2095C(int a1, const void *a2, size_t *a3)
{
  size_t v4; // r4
  void *v5; // r0

  v4 = *a3;
  v5 = (void *)(*(_DWORD *)(a1 + 300) + 53);
  if ( *a3 >= 4 )
    v4 = 4;
  memcpy(v5, a2, v4);
  *a3 = v4;
  return 0;
}
