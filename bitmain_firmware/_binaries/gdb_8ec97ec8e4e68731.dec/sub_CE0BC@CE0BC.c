int __fastcall sub_CE0BC(_DWORD *a1, int a2)
{
  _DWORD *i; // r4

  for ( i = a1; i; i = (_DWORD *)*i )
  {
    if ( i[2] )
    {
      if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(i[2] + 4) + 64))(i[2], a2) )
        return 1;
    }
    else if ( a2 == 5 )
    {
      return 1;
    }
  }
  return 0;
}
