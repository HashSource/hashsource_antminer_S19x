int __fastcall sub_2E298(FILE *a1, const char *a2, int a3)
{
  const char *v3; // r6
  int v6; // r0
  int v7; // r9
  _WORD *v8; // r8
  int v9; // r3
  int v11; // r0
  char *v12; // r0
  char *v13; // r4
  char *v14; // r0

  v3 = a2;
  if ( !a2 )
    v3 = "<unknown>";
  v6 = sub_2E04C((int (__fastcall *)(int))&getc, (int)a1);
  v7 = v6;
  if ( a3 )
  {
    switch ( v6 )
    {
      case -2:
        sub_64E00(3, "%s ('%s'): malformed hash signature", "leapsecond file", v3);
        return 0;
      case -1:
        sub_64E00(3, "%s ('%s'): signature mismatch", "leapsecond file", v3);
        return 0;
      case 0:
        sub_64E00(3, "%s ('%s'): no hash signature", "leapsecond file", v3);
        goto LABEL_7;
      case 1:
        sub_64E00(5, "%s ('%s'): good hash signature", "leapsecond file", v3);
        goto LABEL_7;
      default:
        sub_64E00(3, "%s ('%s'): unknown error code %d", "leapsecond file", v3, v6);
        break;
    }
  }
  if ( v7 < 0 )
    return 0;
LABEL_7:
  rewind(a1);
  v8 = sub_2D0F4(1);
  if ( !sub_2D320((int)v8, (int (__fastcall *)(int))&getc, (int)a1, 1) )
  {
    v9 = *_errno_location();
    if ( v9 == 22 )
    {
      sub_64E00(3, "%s ('%s'): bad transition time", "leapsecond file", v3);
    }
    else if ( v9 == 34 )
    {
      sub_64E00(3, "%s ('%s'): times not ascending", "leapsecond file", v3);
    }
    else
    {
      sub_64E00(3, "%s ('%s'): parsing error", "leapsecond file", v3);
    }
    return 0;
  }
  v11 = (int)(v8 + 12);
  if ( v8[16] )
  {
    v13 = sub_2CD30(v11);
    v14 = sub_2CD30((int)(v8 + 40));
    sub_64E00(5, "%s ('%s'): loaded, expire=%s last=%s ofs=%d", "leapsecond file", v3, v13, v14, (__int16)v8[46]);
  }
  else
  {
    v12 = sub_2CD30(v11);
    sub_64E00(
      5,
      "%s ('%s'): loaded, expire=%s ofs=%d (no entries after build date)",
      "leapsecond file",
      v3,
      v12,
      (__int16)v8[17]);
  }
  return sub_2D1A4(v8);
}
