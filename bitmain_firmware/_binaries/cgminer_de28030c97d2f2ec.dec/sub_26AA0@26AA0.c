int __fastcall sub_26AA0(pthread_mutex_t *a1, int a2)
{
  char v4[2048]; // [sp+10h] [bp-91Ch] BYREF
  _DWORD v5[23]; // [sp+810h] [bp-11Ch] BYREF
  char v6[160]; // [sp+86Ch] [bp-C0h] BYREF
  char *s1; // [sp+90Ch] [bp-20h]
  _DWORD *v8; // [sp+910h] [bp-1Ch]
  _DWORD *v9; // [sp+914h] [bp-18h]
  int v10; // [sp+918h] [bp-14h]
  int v11; // [sp+91Ch] [bp-10h]
  void *ptr; // [sp+920h] [bp-Ch]
  unsigned __int8 v13; // [sp+927h] [bp-5h]

  v11 = 0;
  v13 = 0;
  if ( a2 )
  {
    v11 = sub_64704(a2, 0, v5);
    if ( v11 )
    {
      v10 = sub_65FEC(v11, "method");
      if ( v10 )
      {
        v9 = (_DWORD *)sub_65FEC(v11, "error");
        v8 = (_DWORD *)sub_65FEC(v11, "params");
        if ( !v9 || *v9 == 7 )
        {
          s1 = (char *)sub_677D0(v10);
          if ( s1 )
          {
            if ( !strncasecmp(s1, "mining.multi_version", 0x14u) )
            {
              a1[27].__size[12] = 1;
              if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
              {
                strcpy(v4, "Pool support multi version");
                sub_1E4EC(6, v4, 0);
              }
              v13 = sub_251A8((int)a1, (int)v8);
            }
            else if ( !strncasecmp(s1, "mining.notify", 0xDu) )
            {
              if ( sub_23E04((int)a1, v8) )
              {
                v13 = 1;
                a1[27].__size[11] = 1;
              }
              else
              {
                v13 = 0;
                a1[27].__size[11] = 0;
              }
            }
            else if ( !strncasecmp(s1, "mining.set_version_mask", 0x17u) )
            {
              if ( sub_25710((int)a1, (int)v8) )
              {
                v13 = 1;
                a1[27].__size[11] = 1;
              }
              else
              {
                v13 = 0;
                a1[27].__size[11] = 0;
              }
            }
            else if ( !strncasecmp(s1, "mining.set_difficulty", 0x15u) )
            {
              v13 = sub_25B88((double *)&a1->__lock, (int)v8);
            }
            else if ( !strncasecmp(s1, "mining.set_extranonce", 0x15u) )
            {
              v13 = sub_25E98((int)a1, v8);
            }
            else if ( !strncasecmp(s1, "client.reconnect", 0x10u) )
            {
              v13 = sub_2631C((int)a1, (int)v8);
            }
            else if ( !strncasecmp(s1, "client.get_version", 0x12u) )
            {
              v13 = sub_26764(a1, v11);
            }
            else if ( !strncasecmp(s1, "client.show_message", 0x13u) )
            {
              v13 = sub_2699C(a1, v8);
            }
            else if ( !strncasecmp(s1, "mining.ping", 0xBu) )
            {
              if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
              {
                snprintf(v4, 0x800u, "Pool %d ping", a1->__lock);
                sub_1E4EC(6, v4, 0);
              }
              v13 = sub_26880(a1, v11);
            }
          }
        }
        else
        {
          ptr = (void *)sub_605A4(v9, 3);
          if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
          {
            snprintf(v4, 0x800u, "JSON-RPC method decode failed: %s", (const char *)ptr);
            sub_1E4EC(6, v4, 0);
          }
          free(ptr);
        }
      }
      sub_1F948(v11);
    }
    else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(v4, 0x800u, "JSON decode failed(%d): %s", v5[0], v6);
      sub_1E4EC(6, v4, 0);
    }
  }
  return v13;
}
