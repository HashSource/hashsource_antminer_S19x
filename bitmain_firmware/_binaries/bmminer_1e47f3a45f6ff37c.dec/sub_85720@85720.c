int __fastcall sub_85720(int a1, int a2)
{
  int result; // r0
  int i; // [sp+64h] [bp-28h]

  if ( !a1 )
    return sub_8CD10(2, "src/rule.c", 39, "a_rule is null or 0");
  result = sub_8CD10(
             a2,
             "src/rule.c",
             65,
             "---rule:[%p][%s%c%d]-[%d,%d][%s,%p,%d:%ld*%d~%s][%d][%d][%s:%s:%p];[%p]---",
             (const void *)a1,
             (const char *)a1,
             *(unsigned __int8 *)(a1 + 4097),
             *(_DWORD *)(a1 + 4100),
             *(_DWORD *)(a1 + 4136),
             *(_DWORD *)(a1 + 4140),
             (const char *)(a1 + 4144),
             *(const void **)(a1 + 5172),
             *(_DWORD *)(a1 + 5176),
             *(_DWORD *)(a1 + 5200),
             *(_DWORD *)(a1 + 5204),
             (const char *)(a1 + 5208),
             *(_DWORD *)(a1 + 6244),
             *(_DWORD *)(a1 + 6260),
             (const char *)(a1 + 6272),
             (const char *)(a1 + 7297),
             *(const void **)(a1 + 8324),
             *(const void **)(a1 + 6264));
  if ( *(_DWORD *)(a1 + 5172) )
  {
    for ( i = 0; *(_DWORD *)(*(_DWORD *)(a1 + 5172) + 4) > i; ++i )
      result = sub_89218(*(_DWORD *)(**(_DWORD **)(a1 + 5172) + 4 * i), a2);
  }
  return result;
}
