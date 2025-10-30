__int16 *__fastcall sub_5B548(__int16 *result, int a2)
{
  __int16 *v2; // r4
  int v3; // r7
  _DWORD *v4; // r8
  int v5; // r0
  int v6; // r9
  size_t v7; // r0
  int v8; // r1
  int v9; // r9
  __pid_t v10; // r0
  size_t v11; // r0
  char v12[8]; // [sp+8h] [bp-A4h] BYREF
  char v13[20]; // [sp+10h] [bp-9Ch] BYREF
  _BYTE v14[128]; // [sp+24h] [bp-88h] BYREF

  v2 = result;
  v3 = *((_DWORD *)result + 21);
  v4 = *(_DWORD **)v3;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(v3 + 28) != -1 )
        return result;
      if ( (*(_BYTE *)(v3 + 768) & 2) == 0 )
        goto LABEL_10;
      sub_6D00C(v14, 128, "/var/spool/lock/LCK..cua%d", *v4);
      v9 = open64(v14, 193);
      if ( v9 < 0 )
        return (__int16 *)sub_26294(139, (int)v2, "acts: port busy");
      v10 = getpid();
      sub_6D00C(v12, 8, "%d\n", v10);
      v11 = strlen(v12);
      if ( write(v9, v12, v11) < 0 )
        sub_65D40(3, "acts: write lock fails %m");
      close(v9);
LABEL_10:
      sub_6D00C(v13, 20, "/dev/acts%d", *v4);
      v5 = sub_3AA90(v13, 0xEu, 164);
      v6 = v5;
      if ( v5 < 0 )
        return (__int16 *)sub_65D40(3, "acts: open fails %m");
      *(_DWORD *)(v3 + 28) = v5;
      if ( sub_19084((_DWORD *)(v3 + 8)) )
      {
        v4[4] = 0;
        v4[7] = v4 + 8;
        if ( sys_phone[v4[3]] )
        {
          sub_266AC(139, (int)v2, (int)"SETUP %s", modem_setup);
          v7 = strlen(modem_setup);
          if ( write(*(_DWORD *)(v3 + 28), modem_setup, v7) < 0 )
            sub_65D40(3, "acts: write SETUP fails %m");
          result = (__int16 *)write(*(_DWORD *)(v3 + 28), "\r", 1u);
          v4[1] = 1;
          v4[2] = 3;
        }
        else
        {
          result = (__int16 *)write(*(_DWORD *)(v3 + 28), "T", 1u);
          if ( (int)result < 0 )
            result = (__int16 *)sub_65D40(3, "acts: write T fails %m");
          v4[1] = 3;
          v4[2] = 60;
        }
      }
      else
      {
        sub_65D40(3, "acts: addclock fails");
        result = (__int16 *)close(v6);
        *(_DWORD *)(v3 + 28) = -1;
      }
      return result;
    case 1:
      sub_26294(139, (int)result, "no modem");
      return sub_5B410(v2);
    case 2:
      sub_26294(139, (int)result, "no answer");
      return sub_5B410(v2);
    case 3:
      if ( v4[4] )
      {
        v8 = *(_DWORD *)(v3 + 236);
        *(_DWORD *)(v3 + 224) = *(_DWORD *)(v3 + 232);
        *(_DWORD *)(v3 + 228) = v8;
        sub_42D0C((int)(result + 8), (const char *)(v3 + 56));
        sub_3A534((int)v2);
      }
      else
      {
        sub_26294(139, (int)result, "no timecodes");
      }
      return sub_5B410(v2);
    default:
      return sub_5B410(v2);
  }
}
