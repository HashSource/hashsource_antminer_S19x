_DWORD *__fastcall sub_CCB00(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r5

  v2 = (void *)a1[35];
  *a1 = off_37E23C;
  if ( v2 )
    free(v2);
  v3 = (void *)a1[36];
  if ( v3 )
  {
    sub_16373C(a1[36]);
    sub_33AC04(v3);
  }
  sub_CC858(a1);
  return a1;
}
