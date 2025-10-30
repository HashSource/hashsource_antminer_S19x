int __fastcall sub_A2598(int a1)
{
  int v1; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r3
  char *v7; // r0

  v1 = a1;
  if ( a1 )
  {
    if ( **(_BYTE **)(a1 + 24) == 3 && !sub_A2514(a1) )
    {
      v3 = sub_A0E38(v1, "___XVS");
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 24);
        if ( *(_BYTE *)v4 == 3 && *(_WORD *)(v4 + 4) == 1 )
        {
          v5 = *(_DWORD *)(v4 + 24);
          v6 = *(_DWORD *)(*(_DWORD *)(v5 + 12) + 24);
          if ( *(_BYTE *)v6 == 18 )
          {
            return *(_DWORD *)(v6 + 20);
          }
          else
          {
            v7 = sub_9D20C(*(const char **)(v5 + 16));
            if ( v7 && *((_DWORD *)v7 + 6) )
              return *((_DWORD *)v7 + 6);
          }
        }
      }
    }
  }
  return v1;
}
