int __fastcall sub_25098(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  float v8; // s0
  int *v9; // r7
  unsigned __int8 *v10; // r6
  FILE *v11; // r0
  FILE *v12; // r11
  signed int v13; // r8
  char *v14; // r8
  int v16; // r0
  int v17; // r0
  int v18; // r11
  int v19; // r6
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r1
  int v24; // r3
  int v25; // r0
  int v26; // r0
  char v27; // [sp+1Bh] [bp-869h] BYREF
  _DWORD v28[25]; // [sp+1Ch] [bp-868h] BYREF
  char s[2080]; // [sp+80h] [bp-804h] BYREF
  int varg_r0; // [sp+8A8h] [bp+24h]
  int varg_r1; // [sp+8ACh] [bp+28h]
  int varg_r2; // [sp+8B0h] [bp+2Ch]
  int varg_r3; // [sp+8B4h] [bp+30h]

  dword_9C294 = 2;
  byte_A0D78 = 1;
  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v27 = 0;
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_2;
  sub_225B4();
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    v9 = &dword_9EE34;
    v10 = (unsigned __int8 *)&byte_9EE64;
  }
  else
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s\n", byte_1B07E4, byte_1B08E4);
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_2:
      v9 = &dword_9EE34;
      v10 = (unsigned __int8 *)&byte_9EE64;
      goto LABEL_3;
    }
    strcpy(s, "commit version: f92c682 2020-01-08 18:55:42, build by: lzq 2020-01-14 15:00:34\n");
    LOWORD(v9) = (unsigned __int16)&dword_9EE34;
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
    {
      v10 = (unsigned __int8 *)&byte_9EE64;
      HIWORD(v9) = (unsigned int)&dword_9EE34 >> 16;
      goto LABEL_3;
    }
    HIWORD(v9) = (unsigned int)&dword_9EE34 >> 16;
    snprintf(s, 0x800u, "opt_multi_version     = %d\n", *v9);
    LOWORD(v10) = (unsigned __int16)&byte_9EE64;
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
    {
      HIWORD(v10) = (unsigned int)&byte_9EE64 >> 16;
      goto LABEL_3;
    }
    HIWORD(v10) = (unsigned int)&byte_9EE64 >> 16;
    snprintf(s, 0x800u, "opt_bitmain_ab        = %d\n", *v10);
    sub_47AB4(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "mid_auto_gen          = %d\n", 0);
    sub_47AB4(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "opt_bitmain_work_mode = %d\n", dword_9EE38);
      sub_47AB4(3, s, 0);
    }
  }
LABEL_3:
  v11 = (FILE *)fopen64("/nvdata/sn", "r");
  v12 = v11;
  if ( v11 )
  {
    fseek(v11, 0, 2);
    v13 = ftell(v12);
    fseek(v12, 0, 0);
    if ( v13 >= 100 )
      v13 = 100;
    if ( fread(v28, v13, 1u, v12) )
    {
      v14 = &s[v13 + 2047];
      if ( *(v14 - 2148) == 10 )
        *(v14 - 2148) = 0;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%s\n", (const char *)v28);
        sub_47AB4(3, s, 0);
      }
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "read /nvdata/sn wrong\n");
      sub_47AB4(3, s, 0);
    }
    v11 = (FILE *)fclose(v12);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "no SN got, please write SN to /nvdata/sn\n");
    v11 = (FILE *)sub_47AB4(3, s, 0);
  }
  sub_669C4(v11);
  sub_14350();
  sub_14420();
  *v10 = 1;
  *v9 = 8;
  sub_1EE10();
  sub_1FD84();
  v28[0] = varg_r0;
  v28[1] = varg_r1;
  v28[2] = varg_r2;
  v28[3] = varg_r3;
  v28[4] = a5;
  v28[5] = a6;
  v28[6] = a7;
  v28[7] = a8;
  *(_DWORD *)&byte_241D00 = varg_r0;
  *(_DWORD *)&byte_241D04 = varg_r1;
  unk_241D08 = varg_r2;
  *(_DWORD *)&word_241D0C = varg_r3;
  unk_241D10 = a5;
  unk_241D14 = a6;
  unk_241D18 = a7;
  unk_241D1C = a8;
  if ( (unsigned __int8)varg_r0 != 81 )
  {
    if ( (unsigned int)dword_9E31C <= 4 )
      return 0;
    snprintf(s, 0x800u, "config_parameter.token_type != 0x%x, it is 0x%x\n", 81, (unsigned __int8)byte_241D00);
LABEL_29:
    sub_47AB4(4, s, 0);
    return 0;
  }
  v16 = sub_514F8(&byte_241D00, 30);
  if ( v16 != (unsigned __int16)word_241D1E )
  {
    if ( (unsigned int)dword_9E31C <= 4 )
      return 0;
    snprintf(
      s,
      0x800u,
      "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n",
      (unsigned __int16)word_241D1E,
      v16);
    goto LABEL_29;
  }
  memset(s, 0, 0x40u);
  sprintf(s, "echo %d > %s", 0, "/sys/class/gpio/gpio941/value");
  system(s);
  memset(s, 0, 0x40u);
  sprintf(s, "echo %d > %s", 0, "/sys/class/gpio/gpio942/value");
  v17 = system(s);
  if ( (unsigned __int8)sub_667A0(v17)
    || (unsigned __int8)sub_23CC8()
    || (unsigned __int8)sub_66298()
    || (unsigned __int8)sub_249B0() )
  {
    return 0;
  }
  v18 = dword_9C294;
  if ( !dword_9C294 )
  {
    v19 = (unsigned __int8)sub_34568(161);
    do
    {
      v20 = (unsigned __int8)v18;
      v21 = dword_A0D68 + 4 * v18++;
      if ( *(_DWORD *)(v21 + 4) == 1 )
        sub_748C0(v20);
    }
    while ( v18 != 16 );
    if ( v19 )
      return 0;
  }
  if ( (unsigned __int8)sub_217A8() || (unsigned __int8)sub_24B88() )
    return 0;
  v22 = dword_A0D68;
  if ( byte_A0D78 && (byte_241D04 & 8) != 0 )
  {
    if ( (byte_241D05 & 8) != 0 )
      v23 = dword_A0D74;
    else
      v23 = (unsigned __int16)word_241D0C;
    v24 = dword_A0D68 + 12288;
    if ( (byte_241D05 & 8) != 0 )
      LOWORD(v23) = *(_WORD *)v23;
    *(_WORD *)(dword_A0D68 + 12979) = v23;
    sprintf((char *)(v22 + 12981), "%u", *(unsigned __int16 *)(v24 + 691));
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "fixd frequency is %d\n", *(unsigned __int16 *)(dword_A0D68 + 12979));
      sub_47AB4(3, s, 0);
    }
  }
  else
  {
    v25 = dword_A0D68 + 12288;
    *(_BYTE *)(dword_A0D68 + 12979) = 44;
    *(_BYTE *)(v25 + 692) = 1;
  }
  if ( (unsigned __int8)sub_22D34() )
    return 0;
  sub_15C50();
  if ( (unsigned __int8)sub_15DA8() )
    sub_14B6C();
  sub_4A804(10);
  sub_21F2C();
  sub_4A804(10);
  sub_15E90(0);
  if ( (unsigned __int8)sub_228FC()
    || (unsigned __int8)sub_219E0()
    || (unsigned __int8)sub_218C0()
    || (unsigned __int8)sub_21578()
    || dword_9C294 != 2 && (unsigned __int8)sub_305A8() )
  {
    return 0;
  }
  sub_22DD8();
  sub_22E9C((int)v8, *v9, 90);
  sub_31368(&v27);
  v26 = sub_1A3B8();
  if ( (_BYTE)v26 )
    return 0;
  sub_21F4C(v26);
  if ( (unsigned __int8)sub_218C8() )
    return 0;
  sub_4A804(500);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Init done!\n");
    sub_47AB4(3, s, 0);
  }
  return 1;
}
