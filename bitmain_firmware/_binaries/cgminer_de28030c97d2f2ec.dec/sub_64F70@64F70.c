int __fastcall sub_64F70(void **a1)
{
  a1[2] = (void *)16;
  a1[1] = 0;
  *a1 = sub_64DA4((size_t)a1[2]);
  if ( !*a1 )
    return -1;
  *(_BYTE *)*a1 = 0;
  return 0;
}
