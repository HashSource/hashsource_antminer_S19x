void *__fastcall sub_2B3564(int a1, unsigned int a2)
{
  void *result; // r0
  int v5; // r3
  int v6; // r6

  result = (void *)sub_2B34F8(a1);
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 160);
    if ( *(_DWORD *)(v5 + 104) <= a2 )
    {
      sub_2A6BBC("elf32-arm.c", 3349);
      v5 = *(_DWORD *)(a1 + 160);
    }
    v6 = *(_DWORD *)(v5 + 2360);
    result = *(void **)(v6 + 4 * a2);
    if ( !result )
    {
      result = sub_2AD09C(a1, 0x18u);
      *(_DWORD *)(v6 + 4 * a2) = result;
    }
  }
  return result;
}
