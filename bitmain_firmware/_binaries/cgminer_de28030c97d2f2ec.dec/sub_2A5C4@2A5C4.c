int __fastcall sub_2A5C4(pthread_mutex_t *a1)
{
  int v1; // r2
  int v2; // r2
  size_t v3; // r0
  int v4; // r0
  char v7[2048]; // [sp+14h] [bp-2928h] BYREF
  _DWORD v8[10]; // [sp+814h] [bp-2128h] BYREF
  char v9[160]; // [sp+870h] [bp-20CCh] BYREF
  char v10[44]; // [sp+910h] [bp-202Ch] BYREF
  int v11; // [sp+2910h] [bp-2Ch]
  char *s; // [sp+2914h] [bp-28h]
  char *s1; // [sp+2918h] [bp-24h]
  _DWORD *v14; // [sp+291Ch] [bp-20h]
  _DWORD *v15; // [sp+2920h] [bp-1Ch]
  void *ptr; // [sp+2924h] [bp-18h]
  char v17; // [sp+292Bh] [bp-11h]
  void *v18; // [sp+292Ch] [bp-10h]
  int i; // [sp+2930h] [bp-Ch]
  char v20; // [sp+2935h] [bp-7h]
  char v21; // [sp+2936h] [bp-6h]
  unsigned __int8 v22; // [sp+2937h] [bp-5h]

  v22 = 0;
  v21 = 0;
  v20 = 0;
  v17 = 0;
  ptr = 0;
  for ( i = 0; ; sub_1F948(i) )
  {
    if ( v21 )
    {
      sub_2320C((int)a1);
      v1 = dword_91F84++;
      sprintf(v10, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v1);
    }
    else
    {
      sub_2320C((int)a1);
      v2 = dword_91F84;
      if ( a1[27].__count )
      {
        ++dword_91F84;
        sprintf(
          v10,
          "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\", \"%s\"]}",
          v2,
          byte_87D48,
          byte_87C48,
          (const char *)a1[27].__count);
      }
      else
      {
        ++dword_91F84;
        sprintf(
          v10,
          "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\"]}",
          v2,
          byte_87D48,
          byte_87C48);
      }
    }
    v3 = strlen(v10);
    if ( sub_229A4((int)a1, v10, v3) )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v7, "Failed to send s in initiate_stratum");
        sub_1E4EC(7, v7, 0);
      }
    }
    else if ( !sub_23060((int)a1, 60) )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v7, "Timed out waiting for response in initiate_stratum");
        sub_1E4EC(7, v7, 0);
      }
    }
    else
    {
      ptr = sub_23428((int)a1);
      if ( ptr )
      {
        v21 = 1;
        i = sub_64704(ptr, 0, v8);
        free(ptr);
        if ( i )
        {
          v15 = (_DWORD *)sub_65FEC(i, "result");
          v14 = (_DWORD *)sub_65FEC(i, "error");
          if ( v15 && *v15 != 7 && (!v14 || *v14 == 7) )
          {
            s1 = sub_29D9C((int)v15);
            if ( !s1 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
            {
              strcpy(v7, "Failed to get sessionid in initiate_stratum");
              sub_1E4EC(7, v7, 0);
            }
            s = sub_23C50(v15, 1u);
            if ( (unsigned __int8)sub_20A38(s, "util.c", "initiate_stratum", 3485) != 1 )
            {
              if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
              {
                strcpy(v7, "Failed to get valid nonce1 in initiate_stratum");
                sub_1E4EC(6, v7, 0);
              }
              free(s1);
            }
            else
            {
              v4 = sub_66B80(v15, 2);
              v11 = sub_67C98(v4);
              if ( v11 > 1 && v11 <= 16 )
              {
                if ( s1
                  && a1[27].__count
                  && !strcmp(s1, (const char *)a1[27].__count)
                  && (byte_91F58 || byte_87769 || dword_8697C > 4) )
                {
                  snprintf(v7, 0x800u, "Pool %d successfully negotiated resume with the same session ID", a1->__lock);
                  sub_1E4EC(5, v7, 0);
                }
                sub_2002C((int)&a1[8].__spins, "util.c", "initiate_stratum", 3505);
                free((void *)a1[26].__count);
                free((void *)a1[27].__count);
                a1[27].__count = (unsigned int)s1;
                a1[26].__count = (unsigned int)s;
                a1[65].__spins = strlen(s) >> 1;
                free((void *)a1[26].__owner);
                a1[26].__owner = (int)sub_202D4(a1[65].__spins, 1u, "util.c", "initiate_stratum", 3512);
                sub_207E8((_BYTE *)a1[26].__owner, (unsigned __int8 *)a1[26].__count, a1[65].__spins);
                a1[27].__lock = v11;
                sub_2007C((int)&a1[8].__spins, "util.c", "initiate_stratum", 3515);
                if ( s1 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
                {
                  snprintf(v7, 0x800u, "Pool %d stratum session id: %s", a1->__lock, (const char *)a1[27].__count);
                  sub_1E4EC(7, v7, 0);
                }
                v22 = 1;
              }
              else
              {
                if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
                {
                  strcpy(v7, "Failed to get valid n2size in initiate_stratum");
                  sub_1E4EC(6, v7, 0);
                }
                free(s1);
                free(s);
              }
            }
          }
          else
          {
            if ( v14 )
              v18 = (void *)sub_605A4(v14, 3);
            else
              v18 = strdup("(unknown reason)");
            if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
            {
              snprintf(v7, 0x800u, "JSON-RPC decode failed: %s", (const char *)v18);
              sub_1E4EC(6, v7, 0);
            }
            free(v18);
          }
        }
        else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v7, 0x800u, "JSON decode failed(%d): %s", v8[0], v9);
          sub_1E4EC(6, v7, 0);
        }
      }
    }
    if ( v22 )
    {
      if ( !a1[24].__lock )
        a1[24].__lock = a1[25].__nusers;
      a1[27].__size[9] = 1;
      *((_QWORD *)&a1[76].__align + 1) = 0;
      *((_QWORD *)&a1[76].__align + 2) = 0x3FF0000000000000LL;
      if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(
          v7,
          0x800u,
          "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
          a1->__lock,
          (const char *)a1[26].__count,
          a1[27].__lock);
        sub_1E4EC(7, v7, 0);
      }
      goto LABEL_97;
    }
    if ( !v21 || v20 == 1 )
      break;
    sub_2002C((int)&a1[8].__spins, "util.c", "initiate_stratum", 3543);
    free((void *)a1[27].__count);
    free((void *)a1[26].__count);
    a1[26].__count = 0;
    a1[27].__count = a1[26].__count;
    sub_2007C((int)&a1[8].__spins, "util.c", "initiate_stratum", 3547);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v7, "Failed to resume stratum, trying afresh");
      sub_1E4EC(7, v7, 0);
    }
    v20 = 1;
  }
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v7, "Initiate stratum failed");
    sub_1E4EC(7, v7, 0);
  }
  if ( v17 )
    sub_29EF4(a1);
LABEL_97:
  sub_1F948(i);
  return v22;
}
