bool __fastcall sub_319D88(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v3; // r3

  v3 = a3 == 0;
  if ( !a1 )
    v3 = 1;
  if ( v3 )
    return 0;
  if ( (unsigned int)(a2 - 1) <= 4 )
  {
    a1[1] = 0;
    v3 = 1;
    a1[2] = a2;
    a1[3] = a3;
    *a1 = 8;
  }
  return v3;
}
