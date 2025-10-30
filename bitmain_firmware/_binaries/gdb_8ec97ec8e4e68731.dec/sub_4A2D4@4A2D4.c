_DWORD *sub_4A2D4()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4

  result = (_DWORD *)dword_4726BC;
  if ( dword_4726BC )
  {
    do
    {
      v1 = (_DWORD *)*result;
      sub_4A274(result);
      result = v1;
    }
    while ( v1 );
    dword_4726BC = 0;
  }
  return result;
}
