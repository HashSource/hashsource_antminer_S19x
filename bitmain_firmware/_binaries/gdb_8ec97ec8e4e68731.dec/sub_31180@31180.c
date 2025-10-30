void sub_31180()
{
  _DWORD *v0; // r4
  void *v1; // r0

  v0 = (_DWORD *)sub_31060();
  v1 = (void *)v0[3];
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  if ( v1 )
    free(v1);
  v0[3] = 0;
}
