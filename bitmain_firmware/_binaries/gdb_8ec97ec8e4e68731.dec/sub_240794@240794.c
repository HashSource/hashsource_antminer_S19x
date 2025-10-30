int sub_240794()
{
  int result; // r0
  _DWORD *v1; // r3

  result = sub_231EA4();
  v1 = (_DWORD *)dword_48A4D4;
  dword_48A4E0 = 0;
  if ( dword_48A4D4 )
  {
    while ( v1[11] == 2 || !v1[9] )
    {
      v1 = (_DWORD *)v1[1];
      if ( !v1 )
        return result;
    }
    dword_48A4E0 = 1;
  }
  return result;
}
