_DWORD *__fastcall sub_1838B8(int a1)
{
  _DWORD *v2; // r0
  int v4; // r0

  if ( a1 )
  {
    v2 = (_DWORD *)dword_487918;
    if ( dword_487918 )
    {
      do
      {
        if ( a1 == v2[3] )
          break;
        v2 = (_DWORD *)v2[1];
      }
      while ( v2 );
    }
    return sub_1830AC(v2, 1);
  }
  else
  {
    v4 = sub_15F58();
    return (_DWORD *)sub_183900(v4);
  }
}
