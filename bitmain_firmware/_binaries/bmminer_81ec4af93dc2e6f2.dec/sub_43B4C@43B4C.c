unsigned int __fastcall sub_43B4C(unsigned int result, const char *a2)
{
  int v3; // r6
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = result;
  dword_4B6CB0 = result;
  if ( a2 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      if ( result > 0x15 )
        v4 = 0;
      else
        v4 = 4 * result + 610384;
      if ( result <= 0x15 )
        v4 = *(_DWORD *)(v4 + 260);
      snprintf(s, 0x800u, "%s: %s\n", v4, a2);
      result = sub_3AF5C(3, s, 0, v5);
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    if ( result > 0x15 )
      v11 = 0;
    else
      v11 = 20560;
    if ( result <= 0x15 )
    {
      HIWORD(v11) = 9;
      v11 = *(_DWORD *)(v11 + 4 * result + 260);
    }
    snprintf(s, 0x800u, "%s\n", v11);
    result = sub_3AF5C(3, s, 0, v12);
LABEL_9:
    v6 = dword_4B6CB0;
    if ( v3 == 4 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( result == 4 )
    return result;
  v6 = result;
LABEL_10:
  dword_4B6CB4 = v3;
LABEL_11:
  switch ( v6 )
  {
    case 5:
    case 6:
    case 8:
    case 9:
    case 12:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 21:
      goto LABEL_19;
    case 7:
    case 15:
    case 20:
    case 22:
      goto LABEL_28;
    case 10:
      if ( sub_437C8(1) )
        system("sleep 3 && reboot");
      goto LABEL_18;
    case 11:
LABEL_18:
      if ( sub_437C8(0) )
LABEL_28:
        sub_15050(a2);
LABEL_19:
      if ( (unsigned int)off_AFC24 > 1 )
      {
        snprintf(s, 0x800u, "%s: %s\n", "stop_mining", a2);
        sub_3AF5C(1, s, 0, v7);
      }
      sub_3EE80();
      v9 = sub_3F2C8(v8);
      v10 = sub_570AC(v9);
      result = sub_57144(v10);
      break;
    case 13:
    case 23:
      if ( (unsigned int)off_AFC24 > 1 )
      {
        snprintf(s, 0x800u, "%s: %s\n", "stop_mining_waiting", a2);
        sub_3AF5C(1, s, 0, v16);
      }
      sub_3EE80();
      v14 = sub_3F2C8(v13);
      v15 = sub_570AC(v14);
      sub_57144(v15);
      while ( 1 )
        sleep(1u);
    default:
      return result;
  }
  return result;
}
