int sub_463EC()
{
  int v0; // r4
  int v1; // r6
  int v2; // r3
  FILE *v3; // r0
  FILE *v4; // r7
  int v5; // r8
  int v6; // r6
  int v7; // r6
  int v9; // r0
  int v10; // r3
  int v11; // r3
  __int64 v12; // r0
  const char *v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  int v17; // r6
  int v18; // r0
  int v19; // r7
  int v20; // r0
  char v21; // [sp+Bh] [bp-805h] BYREF
  int ptr; // [sp+Ch] [bp-804h] BYREF
  char dest[2048]; // [sp+10h] [bp-800h] BYREF

  ptr = 0;
  sub_41568();
  sub_546A0(0);
  sub_546A0(1);
  sub_546A0(2);
  sub_546A0(3);
  v0 = sub_16CC4(4000, 1);
  if ( v0 )
    return v0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(dest, "Fan check passed.\n");
    sub_3B6AC(3, dest, 0, *(int *)"ssed.\n");
    v1 = sub_400C8();
    if ( !v1 )
      goto LABEL_4;
  }
  else
  {
    v1 = sub_400C8();
    if ( !v1 )
      goto LABEL_4;
  }
  if ( !sub_26BFC() || !dword_B32C0[0] )
    return v1;
LABEL_4:
  if ( !dword_B3C70 )
  {
    v1 = sub_45B60();
    if ( v1 && (!sub_26BFC() || !dword_B32C0[0]) )
      return v1;
    sub_33998();
  }
  sub_186C0();
  sub_458A0(1u, "soc init done!");
  sub_38ABC();
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(dest, "Wait for hashboard cool, please wait, this may take up to 2 minutes...\n");
    sub_3B6AC(3, dest, 0, v2);
  }
  v0 = sub_46298();
  if ( v0 )
    return -1;
  v3 = fopen("/config/min_boot", "r");
  v4 = v3;
  if ( v3 )
  {
    if ( fread(&ptr, 1u, 4u, v3) != 4 )
      ptr = 0;
    fclose(v4);
  }
  sleep(1u);
  if ( (unsigned int)dword_B308C > 3 )
  {
    v9 = sub_19058();
    snprintf(dest, 0x800u, "start up min temp by 75a = %d, limit %d", v9, ptr - 40);
    sub_3B6AC(3, dest, 0, v10);
  }
  if ( sub_19058() < ptr - 40 )
  {
    sub_481F0(9, 0);
    sub_2A0D0(1);
    sub_458A0(0x12u, "temp too low!");
    return -1;
  }
  if ( v1 )
    return v1;
  if ( sub_18E28() > 55 )
  {
    sub_481F0(8, 0);
    sub_2A0D0(1);
    sub_458A0(0x11u, "temp too high!");
    return -1;
  }
  v21 = 0;
  if ( sub_665A4(&v21) || !v21 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(dest, "warning:power is not calibration.\n");
      sub_3B6AC(3, dest, 0, *(int *)"tion.\n");
    }
    goto LABEL_21;
  }
  v12 = sub_69028(1);
  v13 = (const char *)sub_6665C(v12, HIDWORD(v12));
  if ( !v13 )
  {
LABEL_52:
    if ( (unsigned int)dword_B308C > 3 )
    {
      v15 = sub_666AC(v13);
      snprintf(dest, 0x800u, "enable_power_calibration,calibration date:%d.\n", v15);
      sub_3B6AC(3, dest, 0, v16);
    }
    goto LABEL_21;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(dest, 0x800u, "power sn:%s\n", v13);
    v13 = (const char *)sub_3B6AC(3, dest, 0, v14);
    goto LABEL_52;
  }
LABEL_21:
  if ( sub_27388() > 0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(dest, "reset high before power init\n");
      sub_3B6AC(3, dest, 0, *(int *)"\n");
    }
    sub_54728(0);
    sub_54728(1);
    sub_54728(2);
    sub_54728(3);
  }
  v5 = (unsigned __int8)byte_B3069;
  if ( !byte_B3069 )
  {
    if ( dword_533B38 <= 0 )
    {
LABEL_55:
      sub_3FD54(sub_1C200);
      sub_1718C(100);
      v1 = sub_45F04();
      if ( sub_27398() )
      {
        if ( v1 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(dest, "test:find asic num failed, whileloop");
            sub_3B6AC(3, dest, 0, *(int *)"hileloop");
          }
          sub_2212C();
          while ( 1 )
            sleep(0xAu);
        }
        goto LABEL_61;
      }
      if ( !v1 || sub_26BFC() && dword_B32C0[0] )
      {
LABEL_61:
        sub_1718C(100);
        sub_3E0F0();
        sub_42A4C();
        dword_B3E04 = 0;
        dword_B3E0C = 0;
        dword_B3E08 = 0;
        return v0;
      }
      return v1;
    }
    v6 = sub_224A0(dword_533B38);
    sub_3E0F0();
    sub_54728(v5);
    sub_54728(1);
    sub_54728(2);
    sub_54728(3);
    v7 = sub_221C4(dword_533B38) | v6;
LABEL_28:
    if ( v7 )
    {
      sub_481F0(12, 0);
      v0 = v7;
      sub_458A0(0xBu, "get power type version failed!");
      return v0;
    }
    goto LABEL_55;
  }
  if ( sub_27378() )
  {
    v17 = sub_224A0(1300);
    sub_3E0F0();
    sub_54728(0);
    sub_54728(1);
    sub_54728(2);
    sub_54728(3);
    sub_3E0F0();
    v18 = sub_27378();
    v19 = sub_223A0(v18);
    v20 = sub_27378();
    v7 = v19 | v17 | sub_221C4(v20);
    goto LABEL_28;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(dest, "warning topol_get_open_core_high_voltage=0,please check topol.conf!");
    v0 = -1;
    sub_3B6AC(3, dest, 0, v11);
    return v0;
  }
  return -1;
}
