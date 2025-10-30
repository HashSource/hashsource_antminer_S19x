void sub_24A810()
{
  int v0; // r4
  void *v1; // r0

  sub_247A20(-1);
  sub_247A50(-1);
  sub_247A80(0);
  v0 = dword_48A918;
  dword_48A918 = 0;
  if ( v0 )
  {
    v1 = *(void **)(v0 + 12);
    if ( v1 )
      sub_339E64(v1);
    if ( *(_DWORD *)v0 )
      sub_339E64(*(void **)v0);
    sub_349268((void *)v0);
  }
}
