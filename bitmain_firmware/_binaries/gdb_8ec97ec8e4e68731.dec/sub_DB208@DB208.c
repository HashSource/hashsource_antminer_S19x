int __fastcall sub_DB208(__int64 a1)
{
  int *v1; // lr
  int v2; // r3
  int v3; // r2
  int v4; // t1
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  int v7; // r3
  bool v8; // zf

  v1 = &dword_478348;
  v2 = dword_478368;
  LODWORD(a1) = 4 * dword_47836C;
  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v3 = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      LODWORD(a1) = dword_478368 + a1 - 4;
      while ( 1 )
      {
        HIDWORD(a1) = *(_DWORD *)(v3 + 48);
        if ( HIDWORD(a1) == dword_487D2C )
        {
          if ( *(_BYTE *)(v3 + 39) )
            break;
        }
        if ( v2 != (_DWORD)a1 )
        {
          v4 = *(_DWORD *)(v2 + 4);
          v2 += 4;
          v3 = v4;
          if ( v4 )
            continue;
        }
        goto LABEL_9;
      }
      a1 = sub_94700(
             (int)"breakpoint.c",
             3538,
             "%s: Assertion `%s' failed.",
             "void update_breakpoints_after_exec()",
             "!bploc->inserted");
    }
  }
LABEL_9:
  v5 = (_DWORD *)*v1;
  if ( *v1 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (_DWORD *)v5[2];
        if ( v5[18] == dword_487D2C )
        {
          v7 = v5[3];
          if ( v7 == 20
            || v7 == 31
            || (unsigned int)(v7 - 21) <= 4
            || (unsigned int)(v7 - 15) <= 1
            || v7 == 3
            || (unsigned int)(v7 - 10) <= 4 )
          {
            break;
          }
          v8 = v7 == 26;
          if ( v7 != 26 )
            v8 = v7 == 5;
          if ( !v8 )
          {
            LODWORD(a1) = v5[19];
            if ( (_DWORD)a1 )
            {
              LODWORD(a1) = ((int (__fastcall *)(_DWORD, _DWORD))loc_19DB3C)(a1, HIDWORD(a1));
              if ( (_DWORD)a1 )
                break;
            }
          }
        }
        v5 = v6;
        if ( !v6 )
          return a1;
      }
      LODWORD(a1) = ((int (__fastcall *)(_DWORD *, _DWORD))loc_DB0B0)(v5, HIDWORD(a1));
      v5 = v6;
    }
    while ( v6 );
  }
  return a1;
}
