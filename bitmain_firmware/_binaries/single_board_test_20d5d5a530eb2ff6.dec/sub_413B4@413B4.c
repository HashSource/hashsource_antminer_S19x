void *__fastcall sub_413B4(void *a1, signed int a2)
{
  signed int v2; // r2

  v2 = *(_DWORD *)(dword_705300 + 148);
  if ( v2 >= a2 )
    v2 = a2;
  return j_memcpy(a1, &byte_705330, v2);
}
