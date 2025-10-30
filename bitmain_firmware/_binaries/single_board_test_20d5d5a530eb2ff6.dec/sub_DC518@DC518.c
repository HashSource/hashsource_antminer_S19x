int __fastcall sub_DC518(int a1, void *a2, size_t *a3)
{
  int v4; // r4
  unsigned int v5; // r7
  int v7; // r3
  const void *v9; // r0
  int v10; // r0

  v4 = *(_DWORD *)(a1 + 24);
  if ( !a2 )
  {
    v10 = sub_AE2A8(*(_DWORD *)(a1 + 24));
    v7 = 1;
    *a3 = v10;
    return v7;
  }
  if ( !v4 )
    return 0;
  v5 = *a3;
  if ( v5 < sub_AE2A8(*(_DWORD *)(a1 + 24)) )
    return 0;
  *a3 = sub_AE2A8(v4);
  v9 = (const void *)sub_AE2B4(v4);
  memcpy(a2, v9, *a3);
  return 1;
}
