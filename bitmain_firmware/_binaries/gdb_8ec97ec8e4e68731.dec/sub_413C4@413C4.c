int sub_413C4()
{
  int result; // r0
  _DWORD *v1; // r4

  result = sub_23E94C();
  v1 = (_DWORD *)dword_472178;
  if ( dword_472178 )
  {
    do
    {
      if ( v1[20] == -1 )
      {
        result = sub_48A5C(*v1, v1[1], v1[2]);
        v1[20] = result;
      }
      v1 = (_DWORD *)v1[23];
    }
    while ( v1 );
  }
  return result;
}
