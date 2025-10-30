int sub_4460C()
{
  int v0; // r4
  int v1; // r3
  FILE *v2; // r0
  FILE *v3; // r6
  int v4; // r0
  int v5; // r3
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r4
  int v12; // r4
  int v13; // r0
  int v14; // r4
  int v15; // r0
  int v16; // r0
  const char *v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r3
  char v21; // [sp+Bh] [bp-809h] BYREF
  int ptr; // [sp+Ch] [bp-808h] BYREF
  char dest[2052]; // [sp+10h] [bp-804h] BYREF

  ptr = 0;
  sub_3F910();
  sub_5C9F4(0);
  sub_5C9F4(1);
  sub_5C9F4(2);
  sub_5C9F4(3);
  v0 = sub_169F4(4000, 1);
  if ( v0 )
    return v0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(dest, "Fan check passed.\n");
    sub_3AF5C(3, dest, 0, *(unsigned __int16 *)"");
  }
  if ( !dword_B0F00 )
  {
    v0 = sub_43E34();
    if ( v0 && (!sub_266E0() || !dword_AFE58[0]) )
      return v0;
    sub_33310();
  }
  sub_182E8();
  sub_43B4C(1u, "soc init done!");
  sub_38480();
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(dest, "Wait for hashboard cool, please wait, this may take up to 2 minutes...\n");
    sub_3AF5C(3, dest, 0, v1);
  }
  if ( sub_444C4() )
    return -1;
  v2 = fopen("/config/min_boot", "r");
  v3 = v2;
  if ( v2 )
  {
    if ( fread(&ptr, 1u, 4u, v2) != 4 )
      ptr = 0;
    fclose(v3);
  }
  sleep(1u);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    v4 = sub_18C30();
    snprintf(dest, 0x800u, "start up min temp by 75a = %d, limit %d", v4, ptr - 40);
    sub_3AF5C(3, dest, 0, v5);
  }
  if ( sub_18C30() < ptr - 40 )
  {
    sub_46318(9, 0);
    v0 = -1;
    sub_29B50(1);
    sub_43B4C(0x12u, "temp too low!");
    return v0;
  }
  if ( !v0 )
  {
    if ( sub_18A2C() > 55 )
    {
      sub_46318(8, 0);
      v0 = -1;
      sub_29B50(1);
      sub_43B4C(0x11u, "temp too high!");
      return v0;
    }
    v21 = 0;
    if ( sub_671C4(&v21) || !v21 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(dest, "warning:power is not calibration.\n");
        sub_3AF5C(3, dest, 0, *(unsigned __int16 *)"");
      }
      goto LABEL_26;
    }
    v16 = sub_69AE8(1);
    v17 = (const char *)sub_6727C(v16);
    if ( v17 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
      {
LABEL_26:
        if ( sub_26E34() > 0 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(dest, "reset high before power init\n");
            sub_3AF5C(3, dest, 0, *(int *)"\n");
          }
          sub_5CA54(0);
          sub_5CA54(1);
          sub_5CA54(2);
          sub_5CA54(3);
        }
        v7 = (unsigned __int8)byte_AFC01;
        if ( !byte_AFC01 )
        {
          if ( dword_4B6CAC <= 0 )
            goto LABEL_32;
          v11 = sub_21F88(dword_4B6CAC);
          sub_3D9D4();
          sub_5CA54(v7);
          sub_5CA54(1);
          sub_5CA54(2);
          sub_5CA54(3);
          v0 = v11 | sub_21CAC(dword_4B6CAC);
LABEL_42:
          if ( v0 )
          {
            sub_46318(12, 0);
            sub_43B4C(0xBu, "get power type version failed!");
            return v0;
          }
LABEL_32:
          v8 = sub_5B624();
          v9 = sub_5B6EC(v8);
          sub_5B73C(v9);
          sub_3D9D4();
          sub_34738(115200);
          sub_3D9D4();
          sub_16E7C(100);
          v0 = sub_44164();
          if ( sub_26E44() )
          {
            if ( v0 )
            {
              if ( (unsigned int)off_AFC24 > 3 )
              {
                strcpy(dest, "test:find asic num failed, whileloop");
                sub_3AF5C(3, dest, 0, *(int *)"hileloop");
              }
              sub_21C14();
              while ( 1 )
                sleep(0xAu);
            }
          }
          else if ( v0 && (!sub_266E0() || !dword_AFE58[0]) )
          {
            return v0;
          }
          sub_16E7C(100);
          sub_3D9D4();
          sub_40E5C();
          dword_B1090 = 0;
          dword_B1098 = 0;
          v0 = 0;
          dword_B1094 = 0;
          return v0;
        }
        if ( sub_26E24() )
        {
          v12 = sub_21F88(1300);
          sub_3D9D4();
          sub_5CA54(0);
          sub_5CA54(1);
          sub_5CA54(2);
          sub_5CA54(3);
          sub_3D9D4();
          v13 = sub_26E24();
          v14 = v12 | sub_21E80(v13);
          v15 = sub_26E24();
          v0 = v14 | sub_21CAC(v15);
          goto LABEL_42;
        }
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(dest, "warning topol_get_open_core_high_voltage=0,please check topol.conf!");
          v0 = -1;
          sub_3AF5C(3, dest, 0, v10);
          return v0;
        }
        return -1;
      }
      snprintf(dest, 0x800u, "power sn:%s\n", v17);
      v17 = (const char *)sub_3AF5C(3, dest, 0, v18);
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v19 = sub_672CC(v17);
      snprintf(dest, 0x800u, "enable_power_calibration,calibration date:%d.\n", v19);
      sub_3AF5C(3, dest, 0, v20);
    }
    goto LABEL_26;
  }
  return v0;
}
