bool __fastcall sub_319CC8(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v3; // r3

  v3 = a3 == 0;
  if ( !a2 )
    v3 = 1;
  if ( !a1 )
    v3 = 1;
  if ( !v3 )
  {
    a1[1] = 0;
    *a1 = 0;
    a1[2] = a2;
    a1[3] = a3;
  }
  return !v3;
}
