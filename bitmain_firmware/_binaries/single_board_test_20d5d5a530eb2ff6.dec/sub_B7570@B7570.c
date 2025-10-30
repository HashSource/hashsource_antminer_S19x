size_t __fastcall sub_B7570(int a1, char *s)
{
  size_t v4; // r0
  size_t v5; // r4

  v4 = strlen(s);
  if ( *(_DWORD *)(a1 + 16) && (v5 = v4, fwrite(s, v4, 1u, *(FILE **)(a1 + 36))) )
    return v5;
  else
    return 0;
}
