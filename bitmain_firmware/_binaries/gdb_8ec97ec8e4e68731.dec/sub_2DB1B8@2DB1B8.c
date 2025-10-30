int __fastcall sub_2DB1B8(int a1, void *dest)
{
  int v2; // r3
  int v3; // r4

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) == 5 )
  {
    v2 = *(_DWORD *)(a1 + 160);
    v3 = *(_DWORD *)(v2 + 48);
    memcpy(dest, *(const void **)(v2 + 68), 32 * v3);
  }
  else
  {
    v3 = -1;
    ((void (__fastcall *)(int, void *))loc_2A6C48)(3, dest);
  }
  return v3;
}
