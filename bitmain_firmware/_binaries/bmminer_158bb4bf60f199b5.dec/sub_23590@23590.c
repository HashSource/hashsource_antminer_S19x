int sub_23590()
{
  int v0; // r12
  int i; // r5
  int v2; // r8
  unsigned int v3; // r4
  int v4; // r11
  bool v5; // cc
  int v6; // r1
  _DWORD *v7; // r3
  int v8; // r10
  int v9; // r9
  int result; // r0
  _BYTE *v11; // r6
  int v12; // r11
  int v13; // r3
  int v14; // t1
  _DWORD *v15; // r8
  int v16; // r12
  int v17; // r0
  int v18; // lr
  unsigned int v19; // r3
  int v20; // r10
  int v21; // r2
  unsigned int v22; // r7
  int v23; // r4
  int v24; // r5
  int v25; // r2
  int v26; // r2
  _WORD *v27; // r2
  int v28; // r12
  int v29; // [sp+10h] [bp-824h]
  int v30; // [sp+14h] [bp-820h]
  int v31; // [sp+1Ch] [bp-818h]
  int v32; // [sp+20h] [bp-814h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v0 = dword_A0D6C;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 && *(_BYTE *)(dword_A0D68 + i + 12918) )
    {
      v2 = 78 * i;
      v3 = 0;
      v4 = dword_A0D68;
      do
      {
        v5 = (unsigned int)dword_9E31C > 4;
        v6 = *(_DWORD *)(v4 + 8 * (v2 + v3) + 1274);
        v7 = &dword_A4DC8[9360 * i + 120 * v3 + 2 * (v0 % 60)];
        *v7 = *(_DWORD *)(v4 + 8 * (v2 + v3) + 1270);
        v7[1] = v6;
        if ( v5 )
        {
          snprintf(s, 0x800u, "chain %u asic %u asic_nonce_num %llu\n", i, v3, *(_QWORD *)(v4 + 8 * (v2 + v3) + 1270));
          sub_47AB4(4, s, 0);
          v0 = dword_A0D6C;
        }
        v4 = dword_A0D68;
        ++v3;
      }
      while ( *(unsigned __int8 *)(dword_A0D68 + i + 12918) > v3 );
    }
  }
  dword_A0D6C = v0 + 1;
  memset(byte_245234, 0, 0x1000u);
  memset(byte_2440FC, 0, 0x1000u);
  memset(byte_243004, 0, sizeof(byte_243004));
  v8 = 0;
  sub_2236C(byte_245234, 10);
  sub_2236C(byte_2440FC, 30);
  sub_2236C(byte_243004, 60);
  v9 = dword_A0D68;
  result = -2004318071 * dword_A0D6C;
  v29 = dword_A0D68 + 64;
  v11 = (_BYTE *)(dword_A0D68 + 12918);
  v12 = dword_A0D68;
  v13 = dword_A0D6C % 60 - 1;
  if ( v13 < 0 )
    v13 = dword_A0D6C % 60 + 59;
  v32 = v13;
  do
  {
    v14 = *(_DWORD *)(v12 + 4);
    v12 += 4;
    if ( v14 == 1 )
    {
      if ( *v11 )
      {
        v30 = 2 * v8;
        v15 = &dword_A0DC8[256 * v8];
        v16 = 0;
        v17 = v32 + 4680 * v8;
        v31 = v8;
        v18 = v9 + 97 * v8;
        v19 = 0;
        v20 = 78 * v8;
        result = (int)&dword_A4DC8[2 * v17];
        do
        {
          v21 = v19 + v16;
          v22 = v18 + v19 + v16;
          result += 480;
          if ( v19 == 6 * (v19 / 6) )
          {
            ++v16;
            *(_BYTE *)(v22 + 11254) = 32;
            v21 = v19 + v16;
          }
          v23 = *(_DWORD *)(result - 480);
          v24 = v18 + v21;
          if ( v23 > 1 )
          {
            LOBYTE(v25) = 111;
          }
          else
          {
            v25 = v18 + v21;
            *(_BYTE *)(v25 + 11254) = 111;
          }
          if ( v23 > 1 )
            *(_BYTE *)(v24 + 11254) = v25;
          else
            ++v15[v19];
          v26 = v20 + v19++ + 158;
          v27 = (_WORD *)(v9 + 8 * v26);
          v27[3] = 0;
          v27[4] = 0;
          v27[5] = 0;
          v27[6] = 0;
        }
        while ( (unsigned __int8)*v11 > v19 );
        v28 = v19 + v16;
        v8 = v31;
      }
      else
      {
        v28 = (unsigned __int8)*v11;
        v30 = 2 * v8;
      }
      *(_BYTE *)(v9 + v8 + 32 * (v30 + v8) + v28 + 11254) = 0;
    }
    ++v8;
    ++v11;
  }
  while ( v29 != v12 );
  return result;
}
