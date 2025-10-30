_DWORD *__fastcall sub_D1908(int a1)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      if ( (unsigned int)(v1[3] - 27) <= 2 && v1[6] == a1 )
        break;
      v1 = (_DWORD *)v1[2];
    }
    while ( v1 );
  }
  return v1;
}
