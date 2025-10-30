unsigned int __fastcall sub_226C0(unsigned int result, const char *a2)
{
  const char *v2; // r9
  int v3; // r3
  unsigned int v4; // r4
  int v6; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  LOWORD(v3) = dword_9E31C;
  v4 = result;
  dword_A0D70 = result;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( a2 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( result > 0x10 )
    v2 = 0;
  else
    LOWORD(v3) = -25468;
  if ( result <= 0x10 )
  {
    HIWORD(v3) = 7;
    v2 = *(const char **)(v3 + 4 * result);
  }
  snprintf(s, 0x800u, "%s\n", v2);
  result = sub_47AB4(3, s, 0);
  if ( !a2 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_11;
    if ( v4 > 0x10 )
      v6 = 0;
    else
      v6 = 40068;
    if ( v4 <= 0x10 )
    {
      HIWORD(v6) = 7;
      v6 = *(_DWORD *)(v6 + 4 * v4);
    }
    snprintf(s, 0x800u, "%s\n", v6);
    goto LABEL_10;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%s: %s\n", v2, a2);
LABEL_10:
    result = sub_47AB4(3, s, 0);
  }
LABEL_11:
  v4 = dword_A0D70;
LABEL_12:
  switch ( v4 )
  {
    case 3u:
    case 4u:
    case 6u:
    case 8u:
    case 9u:
    case 0xBu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
      if ( (unsigned int)dword_9E31C > 1 )
      {
        snprintf(s, 0x800u, "stop mining: %s\n", a2);
        sub_47AB4(1, s, 0);
      }
      sub_21D7C();
      sub_21AF8();
      sub_21CDC();
      sub_21C38();
      sub_225FC();
      while ( 1 )
        sleep(1u);
    case 5u:
    case 0xAu:
    case 0xCu:
      if ( (unsigned int)dword_9E31C > 1 )
      {
        snprintf(s, 0x800u, "stop mining: %s\n", a2);
        sub_47AB4(1, s, 0);
      }
      sub_21D7C();
      sub_21AF8();
      sub_21CDC();
      sub_21C38();
      sub_225FC();
      strcpy(s, "restart\n");
      sub_47AB4(0, s, 0);
      _assert_fail("0", "driver-btm-api.c", 0x91u, "stop_mining_and_restart");
      return result;
    default:
      return result;
  }
}
