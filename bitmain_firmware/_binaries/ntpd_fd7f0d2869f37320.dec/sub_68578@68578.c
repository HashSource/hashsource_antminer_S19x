bool __fastcall sub_68578(int ecode)
{
  _BOOL4 v2; // r5
  const char *v3; // r0
  const char *v4; // r3

  switch ( ecode )
  {
    case -11:
    case -4:
      goto LABEL_3;
    case -5:
    case -2:
      v2 = dword_108224 == 0;
      if ( debug <= 1 )
        return v2;
      v3 = gai_strerror(ecode);
      if ( v2 )
        goto LABEL_8;
      v4 = "not ";
      goto LABEL_9;
    case -3:
      dword_108224 = 1;
LABEL_3:
      if ( debug <= 1 )
        return 1;
      v3 = gai_strerror(ecode);
LABEL_8:
      v2 = 1;
      v4 = byte_99528;
      goto LABEL_9;
    default:
      if ( debug <= 1 )
        return 0;
      v2 = 0;
      v3 = gai_strerror(ecode);
      v4 = "not ";
LABEL_9:
      sub_65C68("intres: resolver returned: %s (%d), %sretrying\n", v3, ecode, v4);
      return v2;
  }
}
