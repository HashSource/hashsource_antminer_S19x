size_t __fastcall sub_88538(int a1, void *dest, size_t a3)
{
  int v3; // r3
  size_t v4; // r4

  v3 = *(_DWORD *)(a1 + 124);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 516);
  if ( a3 >= v4 )
    a3 = *(_DWORD *)(v3 + 516);
  memcpy(dest, (const void *)(v3 + 388), a3);
  return v4;
}
