void sub_10AC6C()
{
  _DWORD *v0; // r4
  void *v1; // r0

  v0 = (_DWORD *)sub_94700((int)"dictionary.c", 572, "dict_add_symbol: non-expandable dictionary");
  v1 = (void *)v0[3];
  if ( v1 )
    free(v1);
  free(v0);
}
