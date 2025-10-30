time_t sub_2F984()
{
  FILE *v0; // r5
  int v1; // r0
  time_t result; // r0
  FILE *v3; // r4
  unsigned int v4; // r4
  unsigned int v5; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r0
  unsigned __int8 v9; // r3
  FILE *v10; // r5
  int v11; // r6
  int v12; // r4
  int v13; // r6
  int v14; // r4
  int i; // r4
  int v16; // [sp+8h] [bp-828h] BYREF
  int v17; // [sp+Ch] [bp-824h] BYREF
  char s[32]; // [sp+10h] [bp-820h] BYREF
  char ptr[2048]; // [sp+30h] [bp-800h] BYREF

  v16 = 0;
  v17 = 0;
  v0 = (FILE *)fopen64("/tmp/testID", "rb");
  if ( v0 )
  {
    memset(s, 0, sizeof(s));
    fread(s, 1u, 0x20u, v0);
    fclose(v0);
    if ( s[0] == 48 && s[1] == 120 )
    {
      _isoc99_sscanf(s, "%x %x", &v16, &v17);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(ptr, 0x800u, "receive test id :0x%x, data : 0x%x!\n", v16, v17);
        sub_47AB4(3, ptr, 0);
      }
    }
    else
    {
      v1 = strtol(s, 0, 10);
      v16 = v1;
      if ( v1 && (unsigned int)dword_9E31C > 3 )
      {
        snprintf(ptr, 0x800u, "receive test id :%d!\n", v1);
        sub_47AB4(3, ptr, 0);
      }
    }
  }
  result = fopen64("/tmp/testID", "wb");
  v3 = (FILE *)result;
  if ( result )
  {
    memset(ptr, 0, 0x20u);
    sprintf(ptr, "%d", 0);
    fwrite(ptr, 1u, 0x20u, v3);
    result = fclose(v3);
  }
  v4 = v16;
  if ( v16 )
  {
    switch ( v16 )
    {
      case 11:
        return sub_2F930();
      case 12:
        v8 = dword_9C558;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current voltage raw = %d\n", dword_9C558);
          sub_47AB4(3, ptr, 0);
          v8 = dword_9C558;
        }
        sub_1A0F0(v8);
        result = sub_1A3B8();
        dword_9C558 -= 10;
        break;
      case 13:
        v7 = dword_9C55C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current voltage raw = %d\n", dword_9C55C);
          sub_47AB4(3, ptr, 0);
          v7 = dword_9C55C;
        }
        sub_1A0F0(v7);
        result = sub_1A3B8();
        dword_9C55C += 10;
        break;
      case 14:
        v9 = dword_9C560;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "current pwm = %d\n", dword_9C560);
          sub_47AB4(3, ptr, 0);
          v9 = dword_9C560;
        }
        result = sub_13EE8(v9);
        dword_9C560 -= 3;
        break;
      case 15:
        v11 = sub_1A1B0() + 20;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "Increase voltage to get pm, current voltage raw = %d\n", v11);
          sub_47AB4(3, ptr, 0);
        }
        v12 = 0;
        sub_1A0F0(v11);
        result = sub_1A3B8();
        do
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v12 + 4) == 1 )
          {
            memset(ptr, 0, 0x270u);
            result = sub_2DF9C(v12, (int)ptr);
          }
          ++v12;
        }
        while ( v12 != 16 );
        break;
      case 16:
        v13 = sub_1A1B0() - 20;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(ptr, 0x800u, "Decrease voltage to get pm, current voltage raw = %d\n", v13);
          sub_47AB4(3, ptr, 0);
        }
        v14 = 0;
        sub_1A0F0(v13);
        result = sub_1A3B8();
        do
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v14 + 4) == 1 )
          {
            memset(ptr, 0, 0x270u);
            result = sub_2DF9C(v14, (int)ptr);
          }
          ++v14;
        }
        while ( v14 != 16 );
        break;
      case 17:
        if ( (unsigned int)dword_9E31C > 1 )
        {
          strcpy(ptr, "try to set log level...\n");
          sub_47AB4(1, ptr, 0);
        }
        result = fopen64("/etc/config/log_level", "rb");
        v10 = (FILE *)result;
        if ( result )
        {
          memset(s, 0, sizeof(s));
          fread(s, 1u, 0x20u, v10);
          fclose(v10);
          result = strtol(s, 0, 10);
          if ( (unsigned int)dword_9E31C > 1 )
          {
            snprintf(ptr, 0x800u, "log level set to %d\n", dword_9E31C);
            return sub_47AB4(1, ptr, 0);
          }
        }
        break;
      case 18:
        byte_A06B8 = 0;
        if ( sub_257E4() )
          sub_226C0(4u, "reopen core failed!");
        return sub_20B28();
      case 19:
        for ( i = 0; i != 16; ++i )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
          {
            sub_1AA2C((unsigned __int8)i);
            sub_1AA30((unsigned __int8)i, 0, 0);
            result = sub_1A9D4((unsigned __int8)i);
          }
        }
        break;
      default:
        v5 = v16 & 0xFF000000;
        if ( (v16 & 0xFF000000) == 0xA0000000 )
        {
          if ( (unsigned int)dword_9E31C > 3 )
          {
            strcpy(ptr, "dump asic reg!\n");
            sub_47AB4(3, ptr, 0);
          }
          return sub_2E6D4((v4 >> 20) & 0xF, (unsigned __int8)(v4 >> 12));
        }
        else
        {
          switch ( v5 )
          {
            case 0xB0000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              return sub_2DB40((v4 >> 20) & 0xF, (unsigned __int8)(v4 >> 12), (unsigned __int8)v4);
            case 0xB1000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core process monitor reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              return sub_2E180((v4 >> 20) & 0xF, (unsigned __int8)(v4 >> 12), (unsigned __int8)v4);
            case 0xB2000000:
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "dump core clock counter reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              return sub_2E4F8((v4 >> 20) & 0xF, (unsigned __int8)(v4 >> 12), (unsigned __int8)v4);
            case 0xC0000000:
              v6 = v17;
              if ( (unsigned int)dword_9E31C > 3 )
              {
                strcpy(ptr, "write asic reg!\n");
                sub_47AB4(3, ptr, 0);
              }
              return sub_2E81C((v4 >> 20) & 0xF, (unsigned __int8)(v4 >> 12), (unsigned __int8)v4, v6);
          }
        }
        break;
    }
  }
  return result;
}
