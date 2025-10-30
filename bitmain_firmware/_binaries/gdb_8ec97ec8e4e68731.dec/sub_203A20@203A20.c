void sub_203A20()
{
  _BYTE *v0; // r5

  v0 = (_BYTE *)dword_4893F4;
  sub_203548();
  if ( *v0 )
    sub_203588((int)v0, &dword_4893F4, 1);
  free(v0);
}
