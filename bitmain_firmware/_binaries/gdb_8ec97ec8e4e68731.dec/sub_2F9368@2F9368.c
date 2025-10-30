int __fastcall sub_2F9368(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0

  if ( a1[9] )
    return 0;
  if ( a1[16] )
    return 1;
  if ( a1[11] )
  {
    v4 = sub_2F783C((int)a1, a2);
    a1[16] = v4;
    if ( v4 )
    {
      if ( a1[14] >= a1[15] || sub_2F8C04((int)a1) )
        return 1;
    }
  }
  a1[9] = 1;
  return 0;
}
