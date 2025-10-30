char *__fastcall sub_56C74(const char *a1, char *a2)
{
  size_t v2; // r4
  int v4; // r0
  size_t v5; // r2
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char *v10; // [sp+0h] [bp-7Ch]
  char v12[80]; // [sp+8h] [bp-74h] BYREF
  int v13; // [sp+58h] [bp-24h]
  int v14; // [sp+5Ch] [bp-20h]
  char *v15; // [sp+60h] [bp-1Ch]
  char *v16; // [sp+64h] [bp-18h]
  size_t size; // [sp+68h] [bp-14h]
  unsigned int i; // [sp+6Ch] [bp-10h]

  v10 = a2;
  if ( !a2 )
  {
    v10 = (char *)&unk_748B4;
    for ( i = 0; i < dword_954B4; ++i )
    {
      if ( *(_DWORD *)(dword_954BC + 28 * i + 8) == 349524 && *(_DWORD *)(dword_954BC + 28 * i + 20) )
      {
        v10 = *(char **)(dword_954BC + 28 * i + 20);
        break;
      }
    }
  }
  v2 = strlen(a1) + dword_954B0;
  size = v2 + strlen(v10) + 20;
  for ( i = 0; i < dword_954B4; ++i )
  {
    if ( *(_DWORD *)(dword_954BC + 28 * i + 4) == 8 )
    {
      size += strlen(*(const char **)(dword_954BC + 28 * i + 24)) + 3;
    }
    else if ( *(_UNKNOWN **)(dword_954BC + 28 * i + 24) != &unk_954C4 )
    {
      size += strlen(*(const char **)(dword_954BC + 28 * i)) + 6;
      size += strlen(*(const char **)(dword_954BC + 28 * i + 24)) + 21;
      if ( *(_DWORD *)(dword_954BC + 28 * i + 16) )
        size += 97;
      ++size;
    }
  }
  v15 = (char *)malloc(size);
  v16 = v15;
  if ( !v15 )
    return 0;
  v16 += sprintf(v16, "Usage: %s", a1);
  strcpy(v16, " [-");
  v16 += 3;
  v14 = sub_56BC4((int)v16);
  if ( v14 )
  {
    v16 += v14;
    *(_WORD *)v16++ = 93;
  }
  else
  {
    v16 -= 3;
  }
  if ( v10 )
    v16 += sprintf(v16, " %s", v10);
  *(_WORD *)v16++ = 10;
  for ( i = 0; i < dword_954B4; ++i )
  {
    if ( *(_UNKNOWN **)(dword_954BC + 28 * i + 24) != &unk_954C4 )
    {
      if ( *(_DWORD *)(dword_954BC + 28 * i + 4) == 8 )
      {
        v4 = sprintf(v16, "%s:\n", *(const char **)(dword_954BC + 28 * i + 24));
        v16 += v4;
      }
      else
      {
        size = sprintf(v16, "%s", *(const char **)(dword_954BC + 28 * i));
        if ( *(_DWORD *)(dword_954BC + 28 * i + 4) == 2
          && !strchr(*(const char **)(dword_954BC + 28 * i), 32)
          && !strchr(*(const char **)(dword_954BC + 28 * i), 61) )
        {
          strcpy(&v16[size], " <arg>");
          size += 6;
        }
        if ( size > 0x13 )
          v5 = 1;
        else
          v5 = 20 - size;
        v6 = sprintf(&v16[size], "%.*s", v5, "                    ");
        size += v6;
        v7 = sprintf(&v16[size], "%s", *(const char **)(dword_954BC + 28 * i + 24));
        size += v7;
        if ( *(_DWORD *)(dword_954BC + 28 * i + 16) )
        {
          v13 = 3026478;
          (*(void (__fastcall **)(char *, _DWORD))(dword_954BC + 28 * i + 16))(
            v12,
            *(_DWORD *)(dword_954BC + 28 * i + 20));
          v8 = sprintf(&v16[size], " (default: %s)", v12);
          size += v8;
        }
        v16 += size;
        *(_WORD *)v16++ = 10;
      }
    }
  }
  *v16 = 0;
  return v15;
}
