int __fastcall sub_809F8(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+38h] [bp-24h]
  int i; // [sp+3Ch] [bp-20h]

  if ( !a1 )
    return sub_89984(2, "src/rotater.c", 34, "a_rotater is null or 0");
  result = sub_89984(
             a2,
             "src/rotater.c",
             50,
             "--rotater[%p][%p,%s,%d][%s,%s,%s,%ld,%ld,%d,%d,%d]--",
             (const void *)a1,
             (const void *)a1,
             *(const char **)(a1 + 24),
             *(_DWORD *)(a1 + 28),
             *(const char **)(a1 + 32),
             *(const char **)(a1 + 36),
             (const char *)(a1 + 40),
             *(_DWORD *)(a1 + 1068),
             *(_DWORD *)(a1 + 1072),
             *(_DWORD *)(a1 + 1076),
             *(_DWORD *)(a1 + 1080),
             *(_DWORD *)(a1 + 1084));
  if ( *(_DWORD *)(a1 + 1088) )
  {
    for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4); ++i )
    {
      v5 = *(_DWORD *)(**(_DWORD **)(a1 + 1088) + 4 * i);
      result = sub_89984(a2, "src/rotater.c", 55, "[%s,%d]->", (const char *)(v5 + 4), *(_DWORD *)v5);
    }
  }
  return result;
}
