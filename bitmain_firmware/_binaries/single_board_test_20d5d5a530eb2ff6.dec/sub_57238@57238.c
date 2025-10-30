void *__fastcall sub_57238(size_t size, int (__fastcall *a2)(int, size_t), int (__fastcall *a3)(int, size_t), int a4)
{
  void *v6; // r0
  void *v7; // r6

  if ( a3 )
    return (void *)a3(a4, size);
  if ( !a2 )
    return j_calloc(1u, size);
  v6 = (void *)a2(a4, size);
  v7 = v6;
  if ( v6 )
    memset(v6, 0, size);
  return v7;
}
