void *__fastcall sub_1F88C(int a1, __int16 a2)
{
  int v2; // r9
  void *result; // r0
  const char *v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r10
  int v8; // r9
  const char *v9; // r0
  int v10; // r8
  const char *v11; // r0
  int v12; // r3
  int v13; // r4
  const char *v14; // r0
  const char *v15; // r0
  int v16; // r0
  char *v17; // [sp+4h] [bp-Ch] BYREF
  size_t v18; // [sp+8h] [bp-8h]

  v2 = (unsigned __int16)word_BA6C8;
  if ( word_BA6C8 )
    return (void *)sub_1F734(6);
  if ( (a2 & 0x100) != 0 )
  {
    sub_6D00C(byte_108910, &elf_hash_bucket[145], "runtime configuration prohibited by restrict ... nomodify");
    v17 = byte_108910;
    v18 = strlen(byte_108910);
    sub_1F104((char *)&v17, 1, v2);
    result = sub_1EDD4(v2);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v5 = (const char *)sub_6D2C0(a1 + 4);
      result = (void *)sub_65D40(5, "runtime config from %s rejected due to nomodify restriction", v5);
    }
    ++sys_restricted;
  }
  else
  {
    v6 = sub_43AC8(dword_BA408, dword_BA40C);
    v7 = v6;
    if ( v6 > 0x3FE )
    {
      sub_6D00C(byte_108910, &elf_hash_bucket[145], "runtime configuration failed: request too long");
      v17 = byte_108910;
      v18 = strlen(byte_108910);
      sub_1F104((char *)&v17, 1, 0);
      sub_1EDD4(0);
      v15 = (const char *)sub_6D2C0(a1 + 4);
      return (void *)sub_65D40(5, "runtime config from %s rejected: request too long", v15);
    }
    else
    {
      v8 = dword_BA40C - dword_BA408;
      if ( dword_BA40C - dword_BA408 == v6 )
      {
        v10 = a1 + 4;
        _memcpy_chk(remote_config, dword_BA408, dword_BA40C - dword_BA408, 2060);
        remote_config[v8] = 0;
        v11 = (const char *)sub_6D2C0(v10);
        sub_65D40(5, "%s config: %s", v11, (const char *)remote_config);
        dword_108D10 = 0;
        remote_config[v8] = 10;
        dword_108D14 = 0;
        remote_config[v8 + 1] = 0;
        dword_108D18 = 0;
        sub_13528(v10);
        if ( dword_108D18 )
        {
          v12 = dword_108D14;
        }
        else
        {
          v16 = sub_6D00C(byte_108910, &elf_hash_bucket[145], "Config Succeeded");
          v12 = dword_108D14;
          if ( v16 > 0 )
          {
            v12 = v16 + dword_108D14;
            dword_108D14 += v16;
          }
        }
        v18 = v12;
        v17 = byte_108910;
        sub_1F104((char *)&v17, 1, 0);
        result = sub_1EDD4(0);
        v13 = dword_108D18;
        if ( dword_108D18 > 0 )
        {
          v14 = (const char *)sub_6D2C0(v10);
          return (void *)sub_65D40(5, "%d error in %s config", v13, v14);
        }
      }
      else
      {
        sub_6D00C(
          byte_108910,
          &elf_hash_bucket[145],
          "runtime configuration failed: request contains an unprintable character");
        v17 = byte_108910;
        v18 = strlen(byte_108910);
        sub_1F104((char *)&v17, 1, 0);
        sub_1EDD4(0);
        v9 = (const char *)sub_6D2C0(a1 + 4);
        return (void *)sub_65D40(
                         5,
                         "runtime config from %s rejected: request contains an unprintable character: %0x",
                         v9,
                         *(unsigned __int8 *)(dword_BA408 + v7));
      }
    }
  }
  return result;
}
