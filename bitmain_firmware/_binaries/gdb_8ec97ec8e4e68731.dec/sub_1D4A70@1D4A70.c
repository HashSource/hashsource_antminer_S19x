int __fastcall sub_1D4A70(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[77];
  if ( v2 )
    free(v2);
  a1[77] = 0;
  return sub_1DDBE4(a1[2], a1[3], a1[4]);
}
