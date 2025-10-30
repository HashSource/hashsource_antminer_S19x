int sub_39B30()
{
  int v0; // r4
  int v1; // r11
  int v2; // r6
  int result; // r0
  int v4; // r0
  int v5; // r5
  char *v6; // r8
  int v7; // t1
  int v8; // r7
  int v9; // r9
  int v10; // r0
  int v11; // r1
  int v12; // r9
  int v13; // [sp+24h] [bp-118h]
  char s[260]; // [sp+38h] [bp-104h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset(s, 0, 0x100u);
  do
  {
    result = sub_266F0(v1);
    if ( result )
    {
      v4 = dword_B42F4[0];
      if ( !dword_B42F4[0] )
      {
        v4 = sub_79514("bmminer_nonce");
        dword_B42F4[0] = v4;
      }
      sub_7B3D8(v4, "asic_response.c", 15, "dump_nonce_info_all_core", 24);
      result = sub_26540();
      v13 = result;
      if ( result > 0 )
      {
        v5 = 0;
        v6 = (char *)&unk_B4304 + 1024 * v1;
        do
        {
          v7 = *((_DWORD *)v6 + 1);
          v6 += 4;
          v8 = v5 + 1;
          v2 += v7;
          v9 = snprintf(&s[v0], 256 - v0, "asic[%03d]=%-8d", v5, v7);
          v10 = sub_26550();
          result = sub_8C724(v5 + 1, v10);
          v0 += v9;
          if ( !v11 )
          {
            v12 = dword_B42F4[0];
            if ( !dword_B42F4[0] )
            {
              v12 = sub_79514("bmminer_nonce");
              dword_B42F4[0] = v12;
            }
            sub_26550();
            v2 = 0;
            v0 = 0;
            sub_8C490(v5);
            result = sub_7B3D8(v12, "asic_response.c", 15, "dump_nonce_info_all_core", 24);
          }
          ++v5;
        }
        while ( v8 != v13 );
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  return result;
}
