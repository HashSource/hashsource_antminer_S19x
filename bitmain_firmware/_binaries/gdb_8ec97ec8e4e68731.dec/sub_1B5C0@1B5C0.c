int __fastcall sub_1B5C0(void *a1, int a2, size_t a3, int a4)
{
  size_t v4; // r6
  int v9; // r4
  void *v11; // r0

  v4 = a4 - a3;
  v9 = sub_93028(a4);
  memcpy((void *)(v9 + v4), a1, a3);
  free(a1);
  if ( sub_2302E8(a2 - a4, v9, v4) )
  {
    v11 = (void *)v9;
    v9 = 0;
    free(v11);
  }
  return v9;
}
