int __fastcall sub_5FCC4(unsigned __int8 a1, const char *a2)
{
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  char v10[12]; // [sp+10h] [bp-1BCCh] BYREF
  int v11; // [sp+810h] [bp-13CCh] BYREF
  int v12; // [sp+814h] [bp-13C8h]
  int v13; // [sp+818h] [bp-13C4h]
  int v14; // [sp+81Ch] [bp-13C0h]
  char v15[8]; // [sp+820h] [bp-13BCh] BYREF
  _BYTE v16[5000]; // [sp+828h] [bp-13B4h] BYREF
  FILE *stream; // [sp+1BB0h] [bp-2Ch]
  int v18; // [sp+1BB4h] [bp-28h]
  unsigned int v19; // [sp+1BB8h] [bp-24h]
  unsigned __int8 v20; // [sp+1BBCh] [bp-20h]
  unsigned __int8 v21; // [sp+1BBDh] [bp-1Fh]
  unsigned __int8 v22; // [sp+1BBEh] [bp-1Eh]
  unsigned __int8 v23; // [sp+1BBFh] [bp-1Dh]
  unsigned int v24; // [sp+1BC0h] [bp-1Ch]
  int v25; // [sp+1BC4h] [bp-18h]
  int v26; // [sp+1BC8h] [bp-14h]
  unsigned int j; // [sp+1BCCh] [bp-10h]
  unsigned int i; // [sp+1BD0h] [bp-Ch]
  int v29; // [sp+1BD4h] [bp-8h]

  v29 = -2147483136;
  memset(v16, 0, sizeof(v16));
  v26 = 0;
  i = 0;
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v25 = dword_9CD940[2 * a1];
  v24 = 0;
  v23 = 6;
  v22 = 0;
  v21 = 15;
  v20 = 127;
  v19 = 0;
  v18 = 1536;
  snprintf(v10, 0x800u, "%s\n", "_update_pic_app_program_1704");
  sub_3B6AC(2, v10, 0, (int)v10);
  stream = fopen(a2, "r");
  if ( stream )
  {
    fseek(stream, 0, 0);
    memset(v16, 0, sizeof(v16));
    v19 = (v21 << 8) + v20 - ((v23 << 8) + v22) + 1;
    snprintf(v10, 0x800u, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", v19);
    sub_3B6AC(2, v10, 0, (int)v10);
    for ( i = 0; i < v19; ++i )
    {
      fgets(v15, 1023, stream);
      v24 = strtoul(v15, 0, 16);
      v16[2 * i] = BYTE1(v24);
      v16[2 * i + 1] = v24;
    }
    fclose(stream);
    v29 = sub_5CEA8(a1);
    if ( !v29 )
    {
      v29 = sub_5FB40(v25);
      if ( v29 )
      {
        snprintf(v10, 0x800u, "%s: erase app flash error!\n\n", "_update_pic_app_program_1704");
        sub_3B6AC(0, v10, 0, (int)v10);
        return v29;
      }
      v29 = sub_5F574(v25, v18);
      if ( v29 )
      {
        snprintf(v10, 0x800u, "%s: set 1704 flash pointer err!\n\n", "_update_pic_app_program_1704");
        sub_3B6AC(0, v10, 0, (int)v10);
        return v29;
      }
      for ( i = 0; 4 * (v19 >> 5) > i; ++i )
      {
        v2 = (int *)&v16[16 * i];
        v3 = *v2;
        v4 = v2[1];
        v5 = v2[2];
        v6 = v2[3];
        v11 = v3;
        v12 = v4;
        v13 = v5;
        v14 = v6;
        snprintf(v10, 0x800u, "send pic program time: %d", i);
        sub_3B6AC(2, v10, 0, (int)v10);
        for ( j = 0; j <= 0xF; ++j )
          ;
        sub_5EF88(v25, (int)&v11);
      }
      v29 = sub_5CEA8(a1);
      if ( !v29 )
        return 0;
    }
    snprintf(v10, 0x800u, "%s: reset pic error!\n\n", "_update_pic_app_program_1704");
    sub_3B6AC(0, v10, 0, (int)v10);
  }
  else
  {
    snprintf(v10, 0x800u, "%s: open %s failed\n", "_update_pic_app_program_1704", a2);
    sub_3B6AC(0, v10, 0, (int)v10);
  }
  return v29;
}
