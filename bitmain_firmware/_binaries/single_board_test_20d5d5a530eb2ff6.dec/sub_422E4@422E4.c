int sub_422E4()
{
  int v0; // r6
  int v1; // r5
  unsigned int v2; // r9
  int v3; // r7
  int v4; // r4
  _DWORD *v5; // lr
  _BYTE *v6; // r5
  char *v7; // r3
  int v8; // r8
  int v9; // r1
  unsigned int v10; // t1
  char *v11; // r2
  unsigned int v12; // r6
  int v13; // t1
  int v14; // r4
  unsigned __int16 *v15; // r5
  unsigned __int16 *v16; // r11
  int v17; // t1
  unsigned int v18; // r5
  int v19; // r7
  int i; // r4
  bool v22; // zf
  int v23; // r7
  int v25; // [sp+Ch] [bp-68h]
  int v26; // [sp+10h] [bp-64h]
  int v27; // [sp+14h] [bp-60h]
  char *v28; // [sp+18h] [bp-5Ch]
  int v29; // [sp+1Ch] [bp-58h]
  int v30; // [sp+20h] [bp-54h]
  int v31; // [sp+24h] [bp-50h]
  int v32; // [sp+28h] [bp-4Ch]
  int v33; // [sp+2Ch] [bp-48h]
  int v34; // [sp+30h] [bp-44h]
  int v35; // [sp+38h] [bp-3Ch]
  char v36[52]; // [sp+40h] [bp-34h] BYREF

  v27 = *(_DWORD *)(dword_705300 + 24);
  v31 = *(_DWORD *)(dword_705300 + 8);
  v0 = *(_DWORD *)(dword_705300 + 12);
  v1 = *(_DWORD *)(dword_705300 + 32);
  v2 = v1 * v27;
  v25 = *(_DWORD *)(dword_705300 + 4);
  sub_1E938(v36, 0x30u);
  v30 = v1;
  printf("%s ", v36);
  v3 = v1 * v27 * v25;
  printf(
    "%s : \n------------------------------------------------------------------------------------------------------\n\n",
    "get_asic_nonce_status");
  strcpy(
    byte_63DDD8,
    "\n------------------------------------------------------------------------------------------------------\n");
  sub_3CCE0((int)byte_63DDD8);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : Hashboard require nonce number:                %d\n", "get_asic_nonce_status", v3);
  snprintf(byte_63DED8, 0x100u, "Hashboard require nonce number:                %d", v3);
  sub_3CC5C((int)byte_63DED8, v36);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : every voltage domain require nonce number:     %d\n", "get_asic_nonce_status", v1 * v27 * v0);
  snprintf(byte_63DFD8, 0x100u, "every voltage domain require nonce number:     %d", v1 * v27 * v0);
  sub_3CC5C((int)byte_63DFD8, v36);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : every ASIC require nonce number:               %d\n", "get_asic_nonce_status", v1 * v27);
  snprintf(byte_63E0D8, 0x100u, "every ASIC require nonce number:               %d", v1 * v27);
  sub_3CC5C((int)byte_63E0D8, v36);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : every CORE require nonce number:               %d\n", "get_asic_nonce_status", v1);
  snprintf(byte_63E1D8, 0x100u, "every CORE require nonce number:               %d", v1);
  sub_3CC5C((int)byte_63E1D8, v36);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf(
    "%s : ------------------------------------------------------------------------------------------------------\n\n",
    "get_asic_nonce_status");
  strcpy(
    byte_63E2D8,
    "------------------------------------------------------------------------------------------------------\n");
  sub_3CCE0((int)byte_63E2D8);
  if ( v31 )
  {
    v32 = 2 * v0;
    v26 = 7359130;
    v29 = 7360284;
    v28 = (char *)&unk_6E3468 + v27 + 5683;
    v34 = v0 << 10;
    v33 = 0;
    do
    {
      if ( v0 )
      {
        v4 = v26;
        v5 = (_DWORD *)dword_705300;
        v6 = (_BYTE *)v29;
        v7 = v28;
        v8 = v32 + v26;
        v35 = v0;
        do
        {
          v10 = *(unsigned __int16 *)(v4 + 2);
          v4 += 2;
          v9 = v10;
          if ( v2 > v10 )
          {
            if ( v27 )
            {
              v11 = &v7[-v27];
              v12 = 0;
              do
              {
                v13 = (unsigned __int8)*++v11;
                if ( v13 < v5[44] )
                  ++v12;
              }
              while ( v11 != v7 );
              if ( v12 > v5[43] )
                *v6 = 1;
            }
            if ( v9 < v5[45] * v5[8] * v5[6] / 10000 )
              *v6 = 1;
          }
          ++v6;
          v7 += 1024;
        }
        while ( v4 != v8 );
        v14 = 0;
        v0 = v35;
        v15 = (unsigned __int16 *)(v26 + 2);
        do
        {
          sub_1E938(v36, 0x30u);
          printf("%s ", v36);
          v16 = v15;
          v17 = *v15++;
          ++v14;
          printf("%s :  %4d \n", "get_asic_nonce_status", v17);
          snprintf(byte_63E3D8, 0x100u, " %4d ", *v16);
          sub_3CCE0((int)byte_63E3D8);
        }
        while ( v35 != v14 );
      }
      else
      {
        v8 = v26 + v32;
      }
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      ++v33;
      printf("%s : \n\n", "get_asic_nonce_status");
      v29 += v0;
      word_63E4D8 = 10;
      v28 += v34;
      sub_3CCE0((int)&word_63E4D8);
      v26 = v8;
    }
    while ( v31 != v33 );
  }
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf(
    "%s : \n------------------------------------------------------------------------------------------------------\n\n",
    "get_asic_nonce_status");
  strcpy(
    byte_63E5D8,
    "\n------------------------------------------------------------------------------------------------------\n");
  sub_3CCE0((int)byte_63E5D8);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf(
    "%s : ------------------------------------------------------------------------------------------------------\n\n",
    "get_asic_nonce_status");
  strcpy(
    byte_63E6D8,
    "------------------------------------------------------------------------------------------------------\n");
  sub_3CCE0((int)byte_63E6D8);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : bad asic list:\n", "get_asic_nonce_status");
  strcpy(byte_63E7D8, "bad asic list:");
  sub_3CC5C((int)byte_63E7D8, v36);
  if ( v25 )
  {
    v18 = 0;
    v19 = 7360283;
    for ( i = 0; i != v25; ++i )
    {
      if ( *(unsigned __int8 *)++v19 )
      {
        v22 = v18 == 5 * (v18 / 5);
        ++v18;
        if ( v22 )
        {
          sub_1E938(v36, 0x30u);
          printf("%s ", v36);
          printf("%s : \n\n", "get_asic_nonce_status");
          word_63EBD8 = 10;
          sub_3CCE0((int)&word_63EBD8);
        }
        sub_1E938(v36, 0x30u);
        printf("%s ", v36);
        printf("%s : asic[%03d]      \n\n", "get_asic_nonce_status", i);
        snprintf(byte_63ECD8, 0x100u, "asic[%03d]      \n", i);
        sub_3CCE0((int)byte_63ECD8);
        sub_3F4CC(i);
      }
    }
  }
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : \n\n", "get_asic_nonce_status");
  word_63E8D8 = 10;
  sub_3CCE0((int)&word_63E8D8);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf(
    "%s : ------------------------------------------------------------------------------------------------------\n\n",
    "get_asic_nonce_status");
  strcpy(
    byte_63E9D8,
    "------------------------------------------------------------------------------------------------------\n");
  sub_3CCE0((int)byte_63E9D8);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  v23 = v30 * v27 * v25;
  printf(
    "%s : valid nonce number = %d,      lost nonce number = %d\n",
    "get_asic_nonce_status",
    dword_704F9C,
    v23 - dword_704F9C);
  snprintf(
    &byte_63E9D8[256],
    0x100u,
    "valid nonce number = %d,      lost nonce number = %d",
    dword_704F9C,
    v23 - dword_704F9C);
  return sub_3CC5C((int)&byte_63E9D8[256], v36);
}
