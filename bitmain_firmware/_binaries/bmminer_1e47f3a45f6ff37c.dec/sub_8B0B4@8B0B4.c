int __fastcall sub_8B0B4(int a1, int a2)
{
  if ( !a1 )
    return sub_8CD10(2, "src/thread.c", 20, "a_thread is null or 0");
  sub_8CD10(
    a2,
    "src/thread.c",
    29,
    "--thread[%p][%p][%p][%p,%p,%p,%p,%p]--",
    (const void *)a1,
    *(const void **)(a1 + 4),
    *(const void **)(a1 + 8),
    *(const void **)(a1 + 12),
    *(const void **)(a1 + 16),
    *(const void **)(a1 + 20),
    *(const void **)(a1 + 24),
    *(const void **)(a1 + 28));
  sub_83458(*(_DWORD **)(a1 + 4), a2);
  sub_822C0(*(const char ***)(a1 + 8), a2);
  sub_8D634(*(_DWORD *)(a1 + 12), a2);
  sub_8D634(*(_DWORD *)(a1 + 16), a2);
  sub_8D634(*(_DWORD *)(a1 + 20), a2);
  sub_8D634(*(_DWORD *)(a1 + 24), a2);
  return sub_8D634(*(_DWORD *)(a1 + 28), a2);
}
