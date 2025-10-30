unsigned int __fastcall sub_458A0(unsigned int result, const char *a2)
{
  int v3; // r5
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r3
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = result;
  dword_533B3C = result;
  if ( a2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      if ( result > 0x15 )
        v4 = 0;
      else
        v4 = 34208;
      if ( result <= 0x15 )
      {
        HIWORD(v4) = 9;
        v4 = *(_DWORD *)(v4 + 4 * result + 260);
      }
      snprintf(s, 0x800u, "%s: %s\n", v4, a2);
LABEL_9:
      result = sub_3B6AC(3, s, 0, v5);
      v6 = dword_533B3C;
      goto LABEL_10;
    }
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    if ( result > 0x15 )
      v14 = 0;
    else
      v14 = 34208;
    if ( result <= 0x15 )
    {
      HIWORD(v14) = 9;
      v14 = *(_DWORD *)(v14 + 4 * result + 260);
    }
    snprintf(s, 0x800u, "%s\n", v14);
    goto LABEL_9;
  }
  v6 = result;
LABEL_10:
  v7 = v6 - 5;
  if ( v3 != 4 )
    dword_533B40 = v3;
  switch ( v7 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 7:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
    case 16:
      goto LABEL_16;
    case 2:
    case 10:
    case 15:
    case 17:
      goto LABEL_20;
    case 5:
      if ( sub_45520(1) )
        system("sleep 3 && reboot");
      goto LABEL_15;
    case 6:
LABEL_15:
      if ( sub_45520(0) )
LABEL_20:
        sub_40EA8(a2);
LABEL_16:
      if ( (unsigned int)dword_B308C > 1 )
      {
        snprintf(s, 0x800u, "%s: %s\n", "stop_mining", a2);
        sub_3B6AC(1, s, 0, v8);
      }
      sub_4099C();
      v9 = sub_40E04();
      v10 = sub_55AF0(v9);
      result = sub_55B70(v10);
      break;
    case 8:
    case 18:
      if ( (unsigned int)dword_B308C > 1 )
      {
        snprintf(s, 0x800u, "%s: %s\n", "stop_mining_waiting", a2);
        sub_3B6AC(1, s, 0, v11);
      }
      sub_4099C();
      v12 = sub_40E04();
      v13 = sub_55AF0(v12);
      sub_55B70(v13);
      while ( 1 )
        sleep(1u);
    default:
      return result;
  }
  return result;
}
