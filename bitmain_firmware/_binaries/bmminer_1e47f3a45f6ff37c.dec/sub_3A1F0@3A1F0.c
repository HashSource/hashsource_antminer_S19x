int sub_3A1F0()
{
  int v0; // r4
  int v1; // r6
  int result; // r0
  int v3; // r0
  int v4; // r11
  char *v5; // r8
  int v6; // r5
  int v7; // t1
  int v8; // r7
  int v9; // r9
  int v10; // r0
  int v11; // r1
  int v12; // r9
  int i; // [sp+2Ch] [bp-110h]
  char *v14; // [sp+30h] [bp-10Ch]
  char s[260]; // [sp+38h] [bp-104h] BYREF

  v14 = (char *)&unk_B7078;
  memset(s, 0, 0x100u);
  v0 = 0;
  v1 = 0;
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      v3 = dword_4B9084;
      if ( !dword_4B9084 )
      {
        v3 = sub_7C918("bmminer_nonce");
        dword_4B9084 = v3;
      }
      sub_7E7C0(v3, "asic_response.c", 15, "dump_nonce_info_all_core", 24);
      result = sub_26A44();
      v4 = result;
      if ( result > 0 )
      {
        v5 = v14;
        v6 = 0;
        do
        {
          v7 = *((_DWORD *)v5 + 1);
          v5 += 4;
          v1 += v7;
          v8 = v6 + 1;
          v9 = snprintf(&s[v0], 256 - v0, "asic[%03d]=%-8d", v6, v7);
          v10 = sub_26A54();
          v0 += v9;
          result = sub_8FA94(v6 + 1, v10);
          if ( !v11 )
          {
            v12 = dword_4B9084;
            if ( !dword_4B9084 )
            {
              v12 = sub_7C918("bmminer_nonce");
              dword_4B9084 = v12;
            }
            sub_26A54();
            v1 = 0;
            v0 = 0;
            sub_8F800(v6);
            result = sub_7E7C0(v12, "asic_response.c", 15, "dump_nonce_info_all_core", 24);
          }
          ++v6;
        }
        while ( v8 != v4 );
      }
    }
    v14 += 1024;
  }
  return result;
}
