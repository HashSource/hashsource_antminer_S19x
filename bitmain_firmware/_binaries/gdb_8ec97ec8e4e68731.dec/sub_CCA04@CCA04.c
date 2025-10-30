_DWORD *__fastcall sub_CCA04(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = (void *)a1[34];
  *a1 = off_37E21C;
  if ( v2 )
    free(v2);
  v3 = (void *)a1[35];
  if ( v3 )
    free(v3);
  ((void (__fastcall *)(_DWORD))loc_26C200)(a1[40]);
  v4 = (void *)a1[38];
  if ( v4 )
    free(v4);
  v5 = (void *)a1[36];
  if ( v5 )
    free(v5);
  sub_CC858(a1);
  return a1;
}
