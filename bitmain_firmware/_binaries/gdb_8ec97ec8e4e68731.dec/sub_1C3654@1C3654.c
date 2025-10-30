void sub_1C3654()
{
  size_t v0; // r1
  int v1; // r3
  bool v2; // cc

  v0 = dword_487CA0;
  if ( dword_487C9C + 1 >= dword_487CA0 )
  {
    v1 = 2 * dword_487CA0;
    v2 = 2 * dword_487CA0 <= 0;
    if ( 2 * dword_487CA0 > 0 )
      v0 = 8 * dword_487CA0;
    else
      v1 = 1;
    if ( 2 * dword_487CA0 > 0 )
      dword_487CA0 = v1;
    else
      v0 = 4;
    if ( v2 )
      dword_487CA0 = v1;
    dword_487C98 = (int)sub_93050((void *)dword_487C98, v0);
  }
}
