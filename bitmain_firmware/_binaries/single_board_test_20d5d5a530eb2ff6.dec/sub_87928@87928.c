int __fastcall sub_87928(int a1)
{
  size_t v1; // r2
  const void *v2; // r1
  int dest; // [sp+4h] [bp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 328);
  v2 = (const void *)(a1 + 332);
  if ( v1 > 3 )
    return *(_DWORD *)v2;
  dest = 0;
  return *(_DWORD *)memcpy(&dest, v2, v1);
}
