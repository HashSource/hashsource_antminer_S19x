size_t __fastcall sub_B7598(int a1, void *ptr, size_t size)
{
  int v3; // r3
  bool v4; // zf

  v3 = *(_DWORD *)(a1 + 16);
  v4 = v3 == 0;
  if ( v3 )
    v4 = ptr == 0;
  if ( v4 || !fwrite(ptr, size, 1u, *(FILE **)(a1 + 36)) )
    return 0;
  else
    return size;
}
