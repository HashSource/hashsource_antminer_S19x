int __fastcall sub_31EEC(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int result; // r0
  int v7; // r0
  int v8; // r10
  int v9; // r7
  int v10; // r5
  int v11; // t1
  int v12; // r6
  int v13; // r8
  int v14; // r0
  int v15; // r1
  int v16; // r8
  int v17; // r0
  int v18; // r0
  int i; // [sp+20h] [bp-114h]
  int v20; // [sp+24h] [bp-110h]
  char s[260]; // [sp+30h] [bp-104h] BYREF

  memset(s, 0, 0x100u);
  v3 = dword_B6674;
  if ( !dword_B6674 )
  {
    v3 = sub_7C918("bmminer_tuning");
    dword_B6674 = v3;
  }
  sub_7E7C0(v3, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
  v4 = dword_B6674;
  if ( !dword_B6674 )
  {
    v4 = sub_7C918("bmminer_tuning");
    dword_B6674 = v4;
  }
  v20 = a2 - 4;
  v5 = 0;
  sub_7E7C0(v4, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      v7 = dword_B6674;
      if ( !dword_B6674 )
      {
        v7 = sub_7C918("bmminer_tuning");
        dword_B6674 = v7;
      }
      sub_7E7C0(v7, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
      v8 = sub_26A44();
      if ( v8 > 0 )
      {
        v9 = v20;
        v10 = 0;
        do
        {
          v11 = *(_DWORD *)(v9 + 4);
          v9 += 4;
          v12 = v10 + 1;
          v13 = snprintf(&s[v5], 256 - v5, "asic[%03d]=%-8d", v10, v11);
          v14 = sub_26A54();
          v5 += v13;
          sub_8FA94(v10 + 1, v14);
          if ( !v15 )
          {
            v16 = dword_B6674;
            v5 = 0;
            if ( !dword_B6674 )
            {
              v16 = sub_7C918("bmminer_tuning");
              dword_B6674 = v16;
            }
            sub_8F800(v10);
            sub_7E7C0(v16, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
          }
          ++v10;
        }
        while ( v12 != v8 );
      }
      v17 = dword_B6674;
      if ( !dword_B6674 )
      {
        v17 = sub_7C918("bmminer_tuning");
        dword_B6674 = v17;
      }
      sub_7E7C0(v17, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
      v18 = dword_B6674;
      if ( !dword_B6674 )
      {
        v18 = sub_7C918("bmminer_tuning");
        dword_B6674 = v18;
      }
      result = sub_7E7C0(v18, "thread.c", 8, "_tuning_freq_dump_nonce_info", 28);
    }
    v20 += 1024;
  }
  return result;
}
