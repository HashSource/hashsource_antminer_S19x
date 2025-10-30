bool __fastcall sub_67590(int ecode)
{
  int v2; // r4
  const char *v3; // r1
  const char *v4; // r3
  int v5; // r4

  switch ( ecode )
  {
    case -11:
      if ( debug <= 1 )
        goto LABEL_17;
      v2 = 1;
      v3 = gai_strerror(-11);
      v4 = byte_97F7C;
      goto LABEL_15;
    case -5:
    case -2:
      v5 = dword_107200;
      if ( debug <= 1 )
        return dword_107200 == 0;
      v3 = gai_strerror(ecode);
      if ( v5 )
      {
        v2 = 0;
        v4 = "not ";
      }
      else
      {
        v2 = 1;
        v4 = byte_97F7C;
      }
      goto LABEL_15;
    case -4:
      if ( debug <= 1 )
        goto LABEL_17;
      v2 = 1;
      v3 = gai_strerror(-4);
      v4 = byte_97F7C;
      goto LABEL_15;
    case -3:
      v2 = 1;
      dword_107200 = 1;
      if ( debug > 1 )
      {
        v3 = gai_strerror(-3);
        v4 = byte_97F7C;
        goto LABEL_15;
      }
LABEL_17:
      v2 = 1;
      break;
    default:
      if ( debug > 1 )
      {
        v2 = 0;
        v3 = gai_strerror(ecode);
        v4 = "not ";
LABEL_15:
        sub_64D28("intres: resolver returned: %s (%d), %sretrying\n", v3, ecode, v4);
      }
      else
      {
        v2 = 0;
      }
      break;
  }
  return v2;
}
