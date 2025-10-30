int __fastcall sub_74298(int a1, void *a2)
{
  bool v2; // cc
  unsigned __int8 *v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // lr
  int v10; // r7
  int v11; // r5
  int v12; // r2
  int v13; // [sp+38h] [bp-858h] BYREF
  __int16 v14; // [sp+3Ch] [bp-854h]
  unsigned __int8 s[80]; // [sp+40h] [bp-850h] BYREF
  char v16[2048]; // [sp+90h] [bp-800h] BYREF

  v2 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v2 = (unsigned int)(dword_65E468 - 100) > 2;
  if ( v2 )
    return -1;
  v13 = 251963989;
  v14 = 3844;
  memset(s, 0, sizeof(s));
  if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v13, 6u, s, 0x4Au) )
  {
    strcpy(v16, "Get power error data failed\n");
    nullsub_8();
    return -1;
  }
  memcpy(a2, &s[4], 0x44u);
  if ( a1 )
  {
    v6 = s;
    strcpy(v16, "Get power error data:\n");
    nullsub_8();
    v7 = 0;
    do
    {
      v8 = v6[9];
      v9 = v6[8];
      v10 = v6[7];
      v11 = v7 + 12;
      v12 = v6[6];
      v6 += 12;
      snprintf(
        v16,
        0x800u,
        "data[%02d-%02d]: %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",
        v7,
        v7 + 11,
        *(v6 - 8),
        *(v6 - 7),
        v12,
        v10,
        v9,
        v8,
        *(v6 - 2),
        *(v6 - 1),
        *v6,
        v6[1],
        v6[2],
        v6[3]);
      nullsub_8();
      v7 = v11;
    }
    while ( v11 != 60 );
    snprintf(
      v16,
      0x800u,
      "data[60-67]: %02x%02x%02x%02x %02x%02x%02x%02x\n",
      s[64],
      s[65],
      s[66],
      s[67],
      s[68],
      s[69],
      s[70],
      s[71]);
    nullsub_8();
  }
  return 0;
}
