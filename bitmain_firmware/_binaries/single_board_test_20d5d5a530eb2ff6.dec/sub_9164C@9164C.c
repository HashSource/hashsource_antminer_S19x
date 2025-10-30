int __fastcall sub_9164C(_DWORD *a1, _DWORD *a2)
{
  int (__fastcall *v3)(_DWORD *, _DWORD, _DWORD, _DWORD); // r4

  v3 = (int (__fastcall *)(_DWORD *, _DWORD, _DWORD, _DWORD))a1[353];
  if ( v3 && !v3(a1, *a2, a2[1], a1[354]) )
  {
    sub_95494(a1, 40, 584, 110, "ssl/statem/extensions_clnt.c", 1421);
    return 0;
  }
  else if ( sub_A3748(a1) )
  {
    if ( a2[1] )
    {
      sub_95494(a1, 50, 584, 110, "ssl/statem/extensions_clnt.c", 1432);
      return 0;
    }
    else
    {
      a1[343] = 1;
      return 1;
    }
  }
  else
  {
    sub_95494(a1, 110, 584, 110, "ssl/statem/extensions_clnt.c", 1427);
    return 0;
  }
}
