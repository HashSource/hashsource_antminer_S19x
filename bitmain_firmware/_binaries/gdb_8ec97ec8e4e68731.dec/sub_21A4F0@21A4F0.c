char *__fastcall sub_21A4F0(char *a1, int *a2)
{
  int v4; // r4
  void *v5; // r0
  void *ptr[2]; // [sp+0h] [bp-18h] BYREF
  _BYTE v8[16]; // [sp+8h] [bp-10h] BYREF

  v4 = sub_1008BC(a1);
  if ( v4 )
  {
    v5 = (void *)a2[6];
    a2[6] = v4;
    if ( v5 )
      free(v5);
    return (char *)v4;
  }
  sub_FFE48((int)ptr, a1);
  if ( ptr[1] )
  {
    sub_33C508(a2, ptr);
    v4 = *a2;
    if ( ptr[0] != v8 )
      sub_339E64(ptr[0]);
    return (char *)v4;
  }
  if ( ptr[0] != v8 )
    sub_339E64(ptr[0]);
  return a1;
}
