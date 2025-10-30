size_t __fastcall sub_23350(int a1, int a2)
{
  size_t result; // r0
  size_t v5; // [sp+10h] [bp-Ch]
  size_t v6; // [sp+14h] [bp-8h]

  result = strlen(*(const char **)(a1 + 608));
  v6 = result;
  if ( *(_DWORD *)(a1 + 612) <= result + a2 + 1 )
  {
    v5 = ((result + a2 + 1) & 0xFFFFE000) + 0x2000;
    *(_DWORD *)(a1 + 608) = sub_203A0(*(void **)(a1 + 608), v5, "util.c", "recalloc_sock", 1826);
    result = (size_t)memset((void *)(*(_DWORD *)(a1 + 608) + v6), 0, v5 - v6);
    *(_DWORD *)(a1 + 612) = v5;
  }
  return result;
}
