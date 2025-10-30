int sub_15239C()
{
  int result; // r0
  _DWORD *v1; // r3
  int v2; // r1
  int v3; // r0
  void (__fastcall *v4)(int); // r2

  sub_1FD5F0(dword_487320);
  for ( result = 0; ; result = 1 )
  {
    v1 = (_DWORD *)dword_487324;
    if ( !dword_487324 )
      break;
    while ( !*v1 )
    {
      v1 = (_DWORD *)v1[1];
      if ( !v1 )
        return result;
    }
    v2 = dword_48768C;
    v3 = v1[3];
    *v1 = 0;
    v4 = (void (__fastcall *)(int))v1[2];
    dword_487668 = v2;
    v4(v3);
  }
  return result;
}
