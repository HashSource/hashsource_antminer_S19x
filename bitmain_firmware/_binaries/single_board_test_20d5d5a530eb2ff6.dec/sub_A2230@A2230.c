int __fastcall sub_A2230(_DWORD *a1, int a2)
{
  int v4; // r3

  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 537, 159, (int)"ssl/statem/statem_srvr.c", 4278);
    return 0;
  }
  else if ( (unsigned int)(a1[26] - 10) <= 1 )
  {
    if ( sub_7D3D0((int)(a1 + 404)) )
    {
      sub_95494(a1, 10, 537, 182, (int)"ssl/statem/statem_srvr.c", 4296);
      return 0;
    }
    else
    {
      v4 = a1[1];
      a1[26] = 12;
      if ( (*(int (__fastcall **)(_DWORD *, int))(*(_DWORD *)(v4 + 100) + 16))(a1, 161) )
        return 3;
      else
        return 0;
    }
  }
  else
  {
    sub_95494(a1, 80, 537, 68, (int)"ssl/statem/statem_srvr.c", 4285);
    return 0;
  }
}
