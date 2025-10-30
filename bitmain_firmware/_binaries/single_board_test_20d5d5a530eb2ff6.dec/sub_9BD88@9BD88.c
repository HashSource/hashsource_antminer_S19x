bool __fastcall sub_9BD88(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v4; // r0
  unsigned __int8 *v6; // r4
  unsigned int v7; // r2

  if ( sub_7D3D0((int)(a1 + 404)) )
  {
    sub_95494(a1, 10, 518, 182, (int)"ssl/statem/statem_lib.c", 633);
    return 0;
  }
  else
  {
    v4 = a2[1];
    if ( v4 && (v6 = v4 - 1, v7 = **a2, ++*a2, a2[1] = v4 - 1, v4 == (unsigned __int8 *)1) )
    {
      if ( v7 > 1 )
      {
        sub_95494(a1, 47, 518, 122, (int)"ssl/statem/statem_lib.c", 651);
        return (bool)v6;
      }
      else
      {
        if ( v7 == 1 )
          a1[380] = v6;
        return sub_A60C8(a1, 0) != 0;
      }
    }
    else
    {
      sub_95494(a1, 50, 518, 122, (int)"ssl/statem/statem_lib.c", 640);
      return 0;
    }
  }
}
