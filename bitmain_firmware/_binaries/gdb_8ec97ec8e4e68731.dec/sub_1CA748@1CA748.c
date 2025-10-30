int (__fastcall ***__fastcall sub_1CA748(int a1))(_DWORD, _DWORD)
{
  int (__fastcall ****v1)(_DWORD, int); // r4
  int v2; // r7
  int (__fastcall ***v4)(_DWORD, _DWORD); // r5
  int (__fastcall ***v5)(_DWORD, int); // t1

  v1 = (int (__fastcall ****)(_DWORD, int))dword_487D10;
  v2 = dword_487D14;
  if ( dword_487D10 == dword_487D14 )
    return 0;
  while ( 1 )
  {
    v5 = *v1++;
    v4 = v5;
    if ( (**v5)(v5, a1) )
      break;
    if ( (int (__fastcall ****)(_DWORD, int))v2 == v1 )
      return 0;
  }
  return v4;
}
