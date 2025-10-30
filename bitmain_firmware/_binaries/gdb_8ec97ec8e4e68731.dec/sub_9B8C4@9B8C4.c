_DWORD *__fastcall sub_9B8C4(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[34];
  *a1 = off_374020;
  if ( v2 )
    free(v2);
  sub_CC858(a1);
  return a1;
}
