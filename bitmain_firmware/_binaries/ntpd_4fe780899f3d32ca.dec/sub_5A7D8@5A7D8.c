__int16 *__fastcall sub_5A7D8(__int16 *result, int a2)
{
  __int16 *v2; // r4
  int **v3; // r7
  int *v4; // r8
  int v5; // r3
  int v6; // r10
  __pid_t v7; // r0
  size_t v8; // r0
  int v9; // r0
  int v10; // r9
  size_t v11; // r0
  int *v12; // r1
  char v13[8]; // [sp+0h] [bp-A0h] BYREF
  char v14[20]; // [sp+8h] [bp-98h] BYREF
  _BYTE v15[128]; // [sp+1Ch] [bp-84h] BYREF

  v2 = result;
  v3 = (int **)*((_DWORD *)result + 21);
  v4 = *v3;
  switch ( a2 )
  {
    case 0:
      if ( v3[7] != (int *)-1 )
        return result;
      v5 = *v4;
      if ( ((_BYTE)v3[192] & 2) == 0 )
        goto LABEL_14;
      sub_6C054(v15, 128, "/var/spool/lock/LCK..cua%d", v5);
      v6 = open64(v15, 193);
      if ( v6 < 0 )
        return sub_25EE0((__int16 *)((char *)&dword_88 + 3), (int)v2, "acts: port busy");
      v7 = getpid();
      sub_6C054(v13, 8, "%d\n", v7);
      v8 = strlen(v13);
      if ( write(v6, v13, v8) < 0 )
        sub_64E00(3, "acts: write lock fails %m");
      close(v6);
      v5 = *v4;
LABEL_14:
      sub_6C054(v14, 20, "/dev/acts%d", v5);
      v9 = sub_3A298(v14, 0xEu, 164);
      v10 = v9;
      if ( v9 < 0 )
        return (__int16 *)sub_64E00(3, "acts: open fails %m");
      v3[7] = (int *)v9;
      if ( sub_18DF0((int *)v3 + 2) )
      {
        v4[4] = 0;
        v4[7] = (int)(v4 + 8);
        if ( sys_phone[v4[3]] )
        {
          sub_262E8((__int16 *)((char *)&dword_88 + 3), (int)v2, (int)"SETUP %s", modem_setup);
          v11 = strlen(modem_setup);
          if ( write((int)v3[7], modem_setup, v11) < 0 )
            sub_64E00(3, "acts: write SETUP fails %m");
          result = (__int16 *)write((int)v3[7], "\r", 1u);
          *(_QWORD *)(v4 + 1) = 0x300000001LL;
        }
        else
        {
          result = (__int16 *)write((int)v3[7], "T", 1u);
          if ( (int)result < 0 )
            result = (__int16 *)sub_64E00(3, "acts: write T fails %m");
          *(_QWORD *)(v4 + 1) = 0x3C00000003LL;
        }
      }
      else
      {
        sub_64E00(3, "acts: addclock fails");
        result = (__int16 *)close(v10);
        v3[7] = (int *)-1;
      }
      return result;
    case 1:
      sub_25EE0((__int16 *)((char *)&dword_88 + 3), (int)result, "no modem");
      return sub_5A694(v2);
    case 2:
      sub_25EE0((__int16 *)((char *)&dword_88 + 3), (int)result, "no answer");
      return sub_5A694(v2);
    case 3:
      if ( v4[4] )
      {
        v12 = v3[59];
        v3[56] = v3[58];
        v3[57] = v12;
        sub_41F44((int)(result + 8), (const char *)v3 + 56);
        sub_39D44(v2);
      }
      else
      {
        sub_25EE0((__int16 *)((char *)&dword_88 + 3), (int)result, "no timecodes");
      }
      return sub_5A694(v2);
    default:
      return sub_5A694(v2);
  }
}
