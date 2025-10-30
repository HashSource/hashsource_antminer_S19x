size_t __fastcall sub_22AE4(int a1, int a2)
{
  size_t result; // r0
  size_t v5; // [sp+10h] [bp-Ch]
  size_t v6; // [sp+14h] [bp-8h]

  result = strlen(*(const char **)(a1 + 592));
  v6 = result;
  if ( result + a2 + 1 >= *(_DWORD *)(a1 + 596) )
  {
    v5 = ((result + a2 + 1) & 0xFFFFE000) + 0x2000;
    *(_DWORD *)(a1 + 592) = sub_1FAC4(*(void **)(a1 + 592), v5, "util.c", "recalloc_sock", 1826);
    result = (size_t)memset((void *)(*(_DWORD *)(a1 + 592) + v6), 0, v5 - v6);
    *(_DWORD *)(a1 + 596) = v5;
  }
  return result;
}
