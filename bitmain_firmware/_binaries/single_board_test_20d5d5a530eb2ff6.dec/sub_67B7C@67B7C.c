FILE *sub_67B7C()
{
  FILE *result; // r0
  _DWORD *v1; // r6
  FILE *v2; // r10
  unsigned int v3; // r8
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD v16[12]; // [sp+0h] [bp-30h] BYREF

  result = fopen("/mnt/card/pattern_1midstate_super.bin", "w");
  if ( *(_DWORD *)(dword_223680 + 68) )
  {
    v1 = &unk_716DC8;
    v2 = result;
    v3 = 0;
    do
    {
      v4 = v1 + 4;
      memset(v16, 0, sizeof(v16));
      v5 = v1[12];
      v6 = v1[13];
      v7 = v1[14];
      ++v3;
      v1 += 17;
      v8 = *(v1 - 2);
      v16[1] = v5;
      v16[2] = v6;
      v16[3] = v7;
      v16[0] = v8;
      v9 = *v4;
      v10 = v4[1];
      v11 = v4[2];
      v12 = v4[3];
      v4 += 4;
      v16[4] = v9;
      v16[5] = v10;
      v16[6] = v11;
      v16[7] = v12;
      v13 = v4[1];
      v14 = v4[2];
      v15 = v4[3];
      v16[8] = *v4;
      v16[9] = v13;
      v16[10] = v14;
      v16[11] = v15;
      result = (FILE *)fwrite(v16, 1u, 0x30u, v2);
    }
    while ( *(_DWORD *)(dword_223680 + 68) > v3 );
  }
  return result;
}
