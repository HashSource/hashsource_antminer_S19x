_DWORD *__fastcall sub_4B2E0(int a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)dword_4726BC;
  if ( !dword_4726BC )
    return 0;
  while ( ps_getpid_0(v1 + 1) != a1 )
  {
    v1 = (_DWORD *)*v1;
    if ( !v1 )
      return 0;
  }
  return v1;
}
