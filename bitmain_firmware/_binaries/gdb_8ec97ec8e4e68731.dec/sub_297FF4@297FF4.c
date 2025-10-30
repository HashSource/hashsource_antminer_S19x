void **sub_297FF4()
{
  int v0; // r4
  int v1; // r3
  void **result; // r0
  int v3; // r2

  if ( dword_490158 > 0 )
  {
    v0 = 0;
    v1 = dword_48BB28;
    do
    {
      result = sub_297B08(*(void ***)(v1 + 4 * v0));
      v1 = dword_48BB28;
      v3 = dword_490158;
      *(_DWORD *)(dword_48BB28 + 4 * v0++) = 0;
    }
    while ( v3 > v0 );
  }
  dword_490158 = 0;
  dword_490164 = 0;
  return result;
}
