size_t __fastcall sub_B750C(int a1, void *ptr, size_t a3)
{
  int v3; // r3
  bool v4; // zf
  size_t v6; // r4
  int *v8; // r0

  v3 = *(_DWORD *)(a1 + 16);
  v4 = v3 == 0;
  if ( v3 )
    v4 = ptr == 0;
  if ( v4 )
    return 0;
  v6 = fread(ptr, 1u, a3, *(FILE **)(a1 + 36));
  if ( ferror(*(FILE **)(a1 + 36)) )
  {
    v6 = -1;
    v8 = _errno_location();
    sub_D0048(2, 11, *v8, "crypto/bio/bss_file.c", 149);
    sub_D0048(32, 130, 2, "crypto/bio/bss_file.c", 150);
  }
  return v6;
}
