int __fastcall sub_61558(unsigned __int8 a1, const char *a2)
{
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  char v11[12]; // [sp+10h] [bp-1BCCh] BYREF
  int v12; // [sp+810h] [bp-13CCh] BYREF
  int v13; // [sp+814h] [bp-13C8h]
  int v14; // [sp+818h] [bp-13C4h]
  int v15; // [sp+81Ch] [bp-13C0h]
  int v16; // [sp+820h] [bp-13BCh] BYREF
  char v17; // [sp+824h] [bp-13B8h]
  _BYTE v18[5000]; // [sp+828h] [bp-13B4h] BYREF
  FILE *stream; // [sp+1BB0h] [bp-2Ch]
  int v20; // [sp+1BB4h] [bp-28h]
  unsigned int v21; // [sp+1BB8h] [bp-24h]
  unsigned __int8 v22; // [sp+1BBCh] [bp-20h]
  unsigned __int8 v23; // [sp+1BBDh] [bp-1Fh]
  unsigned __int8 v24; // [sp+1BBEh] [bp-1Eh]
  unsigned __int8 v25; // [sp+1BBFh] [bp-1Dh]
  unsigned int v26; // [sp+1BC0h] [bp-1Ch]
  int v27; // [sp+1BC4h] [bp-18h]
  int v28; // [sp+1BC8h] [bp-14h]
  unsigned int j; // [sp+1BCCh] [bp-10h]
  unsigned int i; // [sp+1BD0h] [bp-Ch]
  int v31; // [sp+1BD4h] [bp-8h]

  v31 = -2147483136;
  memset(v18, 0, sizeof(v18));
  v28 = 0;
  i = 0;
  v16 = 0;
  v17 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v27 = dword_9C8A88[2 * a1];
  v26 = 0;
  v25 = 6;
  v24 = 0;
  v23 = 15;
  v22 = 127;
  v21 = 0;
  v20 = 1536;
  snprintf(v11, 0x800u, "%s\n", "_update_pic_app_program_1704");
  sub_3AF5C(2, v11, 0, (int)v11);
  stream = fopen(a2, "r");
  if ( !stream )
  {
    snprintf(v11, 0x800u, "%s: open %s failed\n", "_update_pic_app_program_1704", a2);
    sub_3AF5C(0, v11, 0, (int)v11);
    goto LABEL_19;
  }
  fseek(stream, 0, 0);
  memset(v18, 0, sizeof(v18));
  v21 = (v23 << 8) + v22 - ((v25 << 8) + v24) + 1;
  snprintf(v11, 0x800u, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", v21);
  sub_3AF5C(2, v11, 0, (int)v11);
  for ( i = 0; i < v21; ++i )
  {
    fgets((char *)&v16, 1023, stream);
    v26 = strtoul((const char *)&v16, 0, 16);
    v18[2 * i] = BYTE1(v26);
    v18[2 * i + 1] = v26;
  }
  fclose(stream);
  v31 = sub_5E88C(a1);
  if ( v31 )
  {
    snprintf(v11, 0x800u, "%s: reset pic error!\n\n", "_update_pic_app_program_1704");
    sub_3AF5C(0, v11, 0, (int)v11);
    goto LABEL_19;
  }
  v31 = sub_613D4(v27);
  if ( v31 )
  {
    snprintf(v11, 0x800u, "%s: erase app flash error!\n\n", "_update_pic_app_program_1704");
    sub_3AF5C(0, v11, 0, (int)v11);
    goto LABEL_19;
  }
  v31 = sub_60E30(v27, v20);
  if ( v31 )
  {
    snprintf(v11, 0x800u, "%s: set 1704 flash pointer err!\n\n", "_update_pic_app_program_1704");
    sub_3AF5C(0, v11, 0, (int)v11);
LABEL_19:
    JUMPOUT(0x61ADC);
  }
  for ( i = 0; i < 4 * (v21 >> 5); ++i )
  {
    v2 = (int *)&v18[16 * i];
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v12 = v3;
    v13 = v4;
    v14 = v5;
    v15 = v6;
    snprintf(v11, 0x800u, "send pic program time: %d", i);
    sub_3AF5C(2, v11, 0, (int)v11);
    for ( j = 0; j <= 0xF; ++j )
      ;
    sub_6089C(v27, (int)&v12);
  }
  v7 = sub_5E88C(a1);
  return sub_61A80(v7);
}
