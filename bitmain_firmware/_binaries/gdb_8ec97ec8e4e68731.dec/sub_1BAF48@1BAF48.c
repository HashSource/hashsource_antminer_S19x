void sub_1BAF48()
{
  _DWORD *v0; // r0
  _DWORD *v2; // r4
  void *v3; // r0

  v0 = (_DWORD *)((int (*)(void))loc_26C048)();
  if ( (*v0)-- == 1 )
  {
    v2 = v0;
    ((void (__fastcall *)(_DWORD))loc_26C200)(v0[3]);
    v3 = (void *)v2[2];
    if ( v3 )
      free(v3);
    free(v2);
  }
}
