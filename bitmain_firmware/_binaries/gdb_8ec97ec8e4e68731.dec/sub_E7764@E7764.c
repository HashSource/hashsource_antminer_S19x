void *__fastcall sub_E7764(int a1, int a2, struct obstack *a3)
{
  char *next_free; // r0
  unsigned int v6; // r5
  void *result; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  sub_26D9E8(savedregs, a1, a2, 0);
  next_free = a3->next_free;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 > a3->chunk_limit - next_free )
  {
    obstack_newchunk(a3, v6);
    next_free = a3->next_free;
  }
  result = memcpy(next_free, savedregs, v6);
  a3->next_free += v6;
  return result;
}
