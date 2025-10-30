int __fastcall sub_318AC(int a1, int a2)
{
  int v2; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r8
  int result; // r0
  int v7; // r0
  int v8; // r9
  int v9; // r5
  int v10; // r7
  int v11; // t1
  int v12; // r6
  int v13; // r8
  int v14; // r0
  int v15; // r1
  int v16; // r8
  int v17; // r0
  int v18; // r0
  int v19; // [sp+28h] [bp-10Ch]
  char s[260]; // [sp+30h] [bp-104h] BYREF

  memset(s, 0, 0x100u);
  v2 = dword_B3904;
  if ( !dword_B3904 )
  {
    v2 = sub_79514("bmminer_tuning");
    dword_B3904 = v2;
  }
  sub_7B3D8(v2, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
  v3 = dword_B3904;
  if ( !dword_B3904 )
  {
    v3 = sub_79514("bmminer_tuning");
    dword_B3904 = v3;
  }
  v4 = 0;
  v5 = 0;
  sub_7B3D8(v3, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
  do
  {
    result = sub_266F0(v5);
    if ( result )
    {
      v7 = dword_B3904;
      if ( !dword_B3904 )
      {
        v7 = sub_79514("bmminer_tuning");
        dword_B3904 = v7;
      }
      sub_7B3D8(v7, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
      v8 = sub_26540();
      if ( v8 > 0 )
      {
        v9 = 0;
        v19 = v5;
        v10 = a2 - 4 + (v5 << 10);
        do
        {
          v11 = *(_DWORD *)(v10 + 4);
          v10 += 4;
          v12 = v9 + 1;
          v13 = snprintf(&s[v4], 256 - v4, "asic[%03d]=%-8d", v9, v11);
          v14 = sub_26550();
          sub_8C724(v9 + 1, v14);
          v4 += v13;
          if ( !v15 )
          {
            v4 = 0;
            v16 = dword_B3904;
            if ( !dword_B3904 )
            {
              v16 = sub_79514("bmminer_tuning");
              dword_B3904 = v16;
            }
            sub_8C490(v9);
            sub_7B3D8(v16, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
          }
          ++v9;
        }
        while ( v12 != v8 );
        v5 = v19;
      }
      v17 = dword_B3904;
      if ( !dword_B3904 )
      {
        v17 = sub_79514("bmminer_tuning");
        dword_B3904 = v17;
      }
      sub_7B3D8(v17, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
      v18 = dword_B3904;
      if ( !dword_B3904 )
      {
        v18 = sub_79514("bmminer_tuning");
        dword_B3904 = v18;
      }
      result = sub_7B3D8(v18, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
    }
    ++v5;
  }
  while ( v5 != 4 );
  return result;
}
