int __fastcall sub_87D18(int a1, int a2)
{
  if ( !a1 )
    return sub_89984(2, "src/thread.c", 20, "a_thread is null or 0");
  sub_89984(
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
  sub_8009C(*(_DWORD **)(a1 + 4), a2);
  sub_7EF08(*(const char ***)(a1 + 8), a2);
  sub_8A2A0(*(_DWORD *)(a1 + 12), a2);
  sub_8A2A0(*(_DWORD *)(a1 + 16), a2);
  sub_8A2A0(*(_DWORD *)(a1 + 20), a2);
  sub_8A2A0(*(_DWORD *)(a1 + 24), a2);
  return sub_8A2A0(*(_DWORD *)(a1 + 28), a2);
}
