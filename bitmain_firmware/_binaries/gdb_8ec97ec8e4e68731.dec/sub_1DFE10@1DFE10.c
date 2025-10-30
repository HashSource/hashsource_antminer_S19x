_DWORD **__fastcall sub_1DFE10(_DWORD **a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4

  v2 = *a1;
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_339E64(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  return a1;
}
