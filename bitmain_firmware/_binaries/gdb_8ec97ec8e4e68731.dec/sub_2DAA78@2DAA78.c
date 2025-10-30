char *__fastcall sub_2DAA78(int a1, void *a2, _DWORD *a3, void *src, size_t a5)
{
  const char *v5; // r3

  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 12) == 9 )
    v5 = "FreeBSD";
  else
    v5 = "LINUX";
  return sub_2DA3B0(a1, a2, a3, v5, 514, src, a5);
}
