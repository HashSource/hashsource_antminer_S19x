bool __fastcall sub_BD35C(_DWORD *a1)
{
  if ( *a1 == -1 )
    return 0;
  if ( *a1 )
    return a1[1] != 0;
  if ( a1[3] )
    return sub_BD344((int)a1) != 0;
  return 0;
}
