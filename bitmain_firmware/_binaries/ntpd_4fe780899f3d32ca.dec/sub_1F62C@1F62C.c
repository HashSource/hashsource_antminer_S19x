__int16 *__fastcall sub_1F62C(int a1, __int16 a2)
{
  int v2; // r8
  __int16 *result; // r0
  const char *v5; // r0
  int v6; // r9
  unsigned int v7; // r0
  unsigned int v8; // r10
  int v9; // r8
  const char *v10; // r0
  const char *v11; // r0
  int v12; // r0
  int v13; // r4
  const char *v14; // r0
  const char *v15; // r0
  int v16; // r0
  char *v17; // [sp+4h] [bp-Ch] BYREF
  size_t v18; // [sp+8h] [bp-8h]

  v2 = (unsigned __int16)word_B96C8;
  if ( word_B96C8 )
    return (__int16 *)sub_1F4D0(6);
  if ( (a2 & 0x100) != 0 )
  {
    sub_6C054(byte_1078F0, &elf_hash_bucket[145], "runtime configuration prohibited by restrict ... nomodify");
    v18 = strlen(byte_1078F0);
    v17 = byte_1078F0;
    sub_1EEC8((char *)&v17, 1, v2);
    result = sub_1EBA4(v2);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v5 = (const char *)sub_6C2E8(a1 + 4);
      result = (__int16 *)sub_64E00(5, "runtime config from %s rejected due to nomodify restriction", v5);
    }
    ++sys_restricted;
  }
  else
  {
    v6 = a1 + 4;
    v7 = sub_42D0C(dword_B9408, dword_B940C);
    v8 = v7;
    if ( v7 > 0x3FE )
    {
      sub_6C054(byte_1078F0, &elf_hash_bucket[145], "runtime configuration failed: request too long");
      v18 = strlen(byte_1078F0);
      v17 = byte_1078F0;
      sub_1EEC8((char *)&v17, 1, 0);
      sub_1EBA4(0);
      v15 = (const char *)sub_6C2E8(v6);
      return (__int16 *)sub_64E00(5, "runtime config from %s rejected: request too long", v15);
    }
    else
    {
      v9 = dword_B940C - dword_B9408;
      if ( dword_B940C - dword_B9408 == v7 )
      {
        _memcpy_chk(remote_config, dword_B9408);
        remote_config[v9] = 0;
        v11 = (const char *)sub_6C2E8(v6);
        sub_64E00(5, "%s config: %s", v11, (const char *)remote_config);
        remote_config[v9] = 10;
        dword_107CF0 = 0;
        remote_config[v9 + 1] = 0;
        dword_107CF4 = 0;
        dword_107CF8 = 0;
        sub_132B0(v6);
        if ( dword_107CF8 || (v16 = sub_6C054(byte_1078F0, &elf_hash_bucket[145], "Config Succeeded"), v16 <= 0) )
        {
          v12 = dword_107CF4;
        }
        else
        {
          v12 = v16 + dword_107CF4;
          dword_107CF4 = v12;
        }
        v18 = v12;
        v17 = byte_1078F0;
        sub_1EEC8((char *)&v17, 1, 0);
        result = sub_1EBA4(0);
        v13 = dword_107CF8;
        if ( dword_107CF8 > 0 )
        {
          v14 = (const char *)sub_6C2E8(v6);
          return (__int16 *)sub_64E00(5, "%d error in %s config", v13, v14);
        }
      }
      else
      {
        sub_6C054(
          byte_1078F0,
          &elf_hash_bucket[145],
          "runtime configuration failed: request contains an unprintable character");
        v18 = strlen(byte_1078F0);
        v17 = byte_1078F0;
        sub_1EEC8((char *)&v17, 1, 0);
        sub_1EBA4(0);
        v10 = (const char *)sub_6C2E8(v6);
        return (__int16 *)sub_64E00(
                            5,
                            "runtime config from %s rejected: request contains an unprintable character: %0x",
                            v10,
                            *(unsigned __int8 *)(dword_B9408 + v8));
      }
    }
  }
  return result;
}
