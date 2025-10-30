int __fastcall sub_1BDB10(int result)
{
  unsigned int v1; // r7
  int v2; // r4
  int v3; // r8
  int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r5
  int v7; // r3
  int v8; // r5
  int v9; // r0
  const char *v10; // r0
  const char *i; // r4
  int v12; // r0
  const char *v13; // r0

  if ( dword_487C2C == 2 )
    return dword_487C30;
  if ( result )
  {
    v2 = dword_487C3C;
    if ( !dword_487C3C )
      return 0;
    v3 = 0;
    v4 = result;
    v1 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v2 + 4);
        if ( !v8 || v8 == sub_2A6780(v4) )
          break;
        v2 = *(_DWORD *)v2;
        if ( !v2 )
          return v1;
      }
      if ( *(_DWORD *)(v2 + 8) == *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) )
      {
        v5 = (*(int (__fastcall **)(int))(v2 + 12))(v4);
        v6 = v5;
        if ( v5 > 0x13 )
        {
          v9 = sub_2A6780(v4);
          v10 = (const char *)sub_2A6820(v9, 0);
          sub_94700(
            (int)"osabi.c",
            266,
            "gdbarch_lookup_osabi: invalid OS ABI (%d) from sniffer for architecture %s flavour %d",
            v6,
            v10,
            *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4));
LABEL_25:
          for ( i = ""; ; i = "non-" )
          {
            v12 = sub_2A6780(v4);
            v13 = (const char *)sub_2A6820(v12, 0);
            sub_94700(
              (int)"osabi.c",
              285,
              "gdbarch_lookup_osabi: multiple %sspecific OS ABI match for architecture %s flavour %d: first match \"%s\","
              " second match \"%s\"",
              i,
              v13,
              *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4),
              (&off_3C9F2C)[2 * v1],
              (&off_3C9F2C)[2 * v6]);
LABEL_27:
            ;
          }
        }
        if ( v5 )
        {
          v7 = *(_DWORD *)(v2 + 4);
          if ( v1 )
          {
            if ( v3 )
            {
              if ( v7 )
                goto LABEL_25;
            }
            else
            {
              if ( !v7 )
                goto LABEL_27;
              v1 = v5;
              v3 = 1;
            }
          }
          else
          {
            v1 = v5;
            if ( v7 )
              v3 = 1;
          }
        }
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    return v1;
  }
  return result;
}
