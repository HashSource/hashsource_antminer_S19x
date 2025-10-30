int __fastcall sub_A6C5C(_DWORD *a1)
{
  int v2; // r5
  int (__fastcall *v4)(_DWORD *, _DWORD); // r3
  int v5; // r3

  if ( sub_B82F8(a1[393], a1[392]) < 0 && sub_B82F8(a1[395], a1[392]) < 0 )
  {
    v2 = sub_B85B0(a1[395]);
    if ( !v2 )
    {
      if ( sub_B85BC(a1[392]) < a1[401] )
      {
        v5 = 348;
      }
      else
      {
        v4 = (int (__fastcall *)(_DWORD *, _DWORD))a1[389];
        if ( v4 )
        {
          if ( v4(a1, a1[387]) <= 0 )
          {
            sub_95494(a1, 71, 596, 234, (int)"ssl/tls_srp.c", 356);
            return v2;
          }
          return 1;
        }
        if ( sub_10AC90(a1[393], a1[392]) )
          return 1;
        v5 = 361;
      }
      sub_95494(a1, 71, 596, 241, (int)"ssl/tls_srp.c", v5);
      return v2;
    }
  }
  v2 = 0;
  sub_95494(a1, 47, 596, 390, (int)"ssl/tls_srp.c", 342);
  return v2;
}
