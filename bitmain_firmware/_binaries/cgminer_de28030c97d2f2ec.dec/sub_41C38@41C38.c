int __fastcall sub_41C38(pthread_mutex_t *a1, char a2)
{
  bool v2; // r3
  char *v4; // r3
  size_t v5; // r4
  const char *v6; // r3
  char v10[2048]; // [sp+14h] [bp-860h] BYREF
  _DWORD *v11; // [sp+814h] [bp-60h] BYREF
  __time_t v12[2]; // [sp+818h] [bp-5Ch] BYREF
  __time_t v13[2]; // [sp+820h] [bp-54h] BYREF
  bool v14; // [sp+82Ah] [bp-4Ah]
  char v15; // [sp+82Bh] [bp-49h]
  size_t maxlen; // [sp+82Ch] [bp-48h]
  char *s; // [sp+830h] [bp-44h]
  char *haystack; // [sp+834h] [bp-40h]
  char v19; // [sp+83Bh] [bp-39h]
  char *v20; // [sp+848h] [bp-2Ch]
  int v21; // [sp+850h] [bp-24h]
  char v22; // [sp+857h] [bp-1Dh]
  unsigned __int8 v23; // [sp+867h] [bp-Dh]

  v21 = 0;
  v23 = 0;
  if ( a1[31].__size[8] )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v10, 0x800u, "Retrieving block template from pool %s", (const char *)a1[6].__spins);
      sub_1E4EC(7, v10, 0);
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v10, 0x800u, "Testing pool %s", (const char *)a1[6].__spins);
    sub_1E4EC(6, v10, 0);
  }
  while ( 1 )
  {
    if ( a1[27].__size[8] )
    {
      v15 = sub_2F88C((int)a1, (unsigned __int8 *)&a1[27].__size[10]);
      if ( v15 == 1 )
        return (unsigned __int8)a1[27].__size[9];
      v2 = sub_29FCC(a1) && (a1[24].__size[4] != 1 || sub_27060(a1)) && sub_2A5C4(a1) && sub_27614(a1);
      v14 = v2;
      if ( v2 )
        sub_41908((pthread_t *)a1);
      else
        sub_2F908((int)a1, (unsigned __int8 *)&a1[27].__size[10]);
      return v14;
    }
    v20 = off_86BE0[0];
    if ( !off_86BE0[0] )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        strcpy(v10, "CURL initialisation failed");
        sub_1E4EC(3, v10, 0);
      }
      return 0;
    }
    if ( a1[4].__size[3] != 1 )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v10, "Probing for GBT support");
        sub_1E4EC(7, v10, 0);
      }
      v21 = 0;
      a1[4].__size[3] = 0;
      if ( a1[31].__size[8] )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v10, "GBT coinbase + append support found, switching to GBT protocol");
          sub_1E4EC(7, v10, 0);
        }
      }
      else if ( a1[38].__size[4] )
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v10, "GBT coinbase without append found, switching to GBT solo protocol");
          sub_1E4EC(7, v10, 0);
        }
      }
      else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v10, "No GBT coinbase + append support found, pool unusable if it has no stratum");
        sub_1E4EC(7, v10, 0);
      }
    }
    sub_22308(v13);
    v21 = 0;
    sub_22308(v12);
    if ( !a1[24].__lock || byte_87FC0 == 1 || !sub_41A4C(a1) )
      break;
    if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
    {
      snprintf(
        v10,
        0x800u,
        "Switching pool %d %s to %s",
        a1->__lock,
        (const char *)a1[6].__spins,
        (const char *)a1[24].__lock);
      sub_1E4EC(5, v10, 0);
    }
    if ( !a1[6].__spins )
      a1[6].__spins = (int)strdup((const char *)a1[24].__lock);
    a1[27].__size[8] = 1;
  }
  if ( a1[27].__size[8] != 1 && a1[38].__size[4] != 1 && a1[31].__size[8] != 1 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(
        v10,
        0x800u,
        "No Stratum, GBT or Solo support in pool %d %s unable to use",
        a1->__lock,
        (const char *)a1[6].__spins);
      sub_1E4EC(4, v10, 0);
    }
    return 0;
  }
  else
  {
    if ( v21 )
    {
      v11 = sub_31E10();
      v19 = 0;
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(
          v10,
          0x800u,
          "Successfully retrieved but FAILED to decipher work from pool %u %s",
          a1->__lock,
          (const char *)a1[6].__spins);
        sub_1E4EC(7, v10, 0);
      }
      sub_31F40((void **)&v11, "cgminer.c", "pool_active", 8175);
      if ( !a1[4].__nusers )
      {
        if ( a1[4].__kind )
        {
          v22 = 0;
          haystack = (char *)a1[4].__kind;
          if ( strstr(haystack, "://") )
          {
            a1[4].__nusers = (unsigned int)haystack;
            haystack = 0;
          }
          else
          {
            if ( *haystack == 47 )
              v4 = haystack + 1;
            else
              v4 = haystack;
            s = v4;
            if ( *(_BYTE *)(a1[6].__spins + strlen((const char *)a1[6].__spins) - 1) != 47 )
              v22 = 1;
            v5 = strlen((const char *)a1[6].__spins);
            maxlen = v5 + strlen(s) + 2;
            a1[4].__nusers = (unsigned int)sub_20210(maxlen, "cgminer.c", "pool_active", 8208);
            if ( v22 )
              v6 = (const char *)&word_71BFC;
            else
              v6 = byte_6F818;
            snprintf((char *)a1[4].__nusers, maxlen, "%s%s%s", (const char *)a1[6].__spins, v6, s);
          }
        }
        else
        {
          a1[4].__nusers = 0;
        }
        sub_41B78((int)a1);
      }
    }
    else
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(v10, 0x800u, "FAILED to retrieve work from pool %u %s", a1->__lock, (const char *)a1[6].__spins);
        sub_1E4EC(7, v10, 0);
      }
      if ( a2 != 1 && a1[4].__size[1] != 1 && (byte_91F58 || byte_87769 || dword_8697C > 3) )
      {
        snprintf(v10, 0x800u, "Pool %u slow/down or URL or credentials invalid", a1->__lock);
        sub_1E4EC(4, v10, 0);
      }
    }
    if ( v21 )
      sub_2DE88(v21);
    return v23;
  }
}
