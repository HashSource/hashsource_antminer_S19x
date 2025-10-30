int __fastcall sub_29594(_DWORD *a1)
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
  for ( i = 0; ; sub_1F02C(i) )
  {
    if ( v21 )
    {
      sub_22998((int)a1);
      v1 = dword_90DEC++;
      sprintf(v10, "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}", v1);
    }
    else
    {
      sub_22998((int)a1);
      v2 = dword_90DEC;
      if ( a1[159] )
      {
        ++dword_90DEC;
        sprintf(
          v10,
          "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\", \"%s\"]}",
          v2,
          byte_86BB0,
          byte_86AB0,
          (const char *)a1[159]);
      }
      else
      {
        ++dword_90DEC;
        sprintf(
          v10,
          "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\"]}",
          v2,
          byte_86BB0,
          byte_86AB0);
      }
    }
    v3 = strlen(v10);
    if ( sub_22178((int)a1, v10, v3) )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v7, "Failed to send s in initiate_stratum");
        sub_1DB6C(7, v7, 0);
      }
    }
    else if ( !sub_227F0((int)a1, 60) )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v7, "Timed out waiting for response in initiate_stratum");
        sub_1DB6C(7, v7, 0);
      }
    }
    else
    {
      ptr = sub_22BC0((int)a1);
      if ( ptr )
      {
        v21 = 1;
        i = sub_639D0(ptr, 0, v8);
        free(ptr);
        if ( i )
        {
          v15 = (_DWORD *)sub_652F0(i, "result");
          v14 = (_DWORD *)sub_652F0(i, "error");
          if ( v15 && *v15 != 7 && (!v14 || *v14 == 7) )
          {
            s1 = sub_28D54((int)v15);
            if ( !s1 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
            {
              strcpy(v7, "Failed to get sessionid in initiate_stratum");
              sub_1DB6C(7, v7, 0);
            }
            s = sub_233A8(v15, 1u);
            if ( (unsigned __int8)sub_2015C(s, "util.c", "initiate_stratum", 3485) != 1 )
            {
              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
              {
                strcpy(v7, "Failed to get valid nonce1 in initiate_stratum");
                sub_1DB6C(6, v7, 0);
              }
              free(s1);
            }
            else
            {
              v4 = sub_65E88(v15, 2);
              v11 = sub_66FB0(v4);
              if ( v11 > 1 && v11 <= 16 )
              {
                if ( s1
                  && a1[159]
                  && !strcmp(s1, (const char *)a1[159])
                  && (byte_90DC0 || byte_865D1 || dword_857E4 > 4) )
                {
                  snprintf(v7, 0x800u, "Pool %d successfully negotiated resume with the same session ID", *a1);
                  sub_1DB6C(5, v7, 0);
                }
                sub_1F744((int)(a1 + 53), "util.c", "initiate_stratum", 3505);
                free((void *)a1[153]);
                free((void *)a1[159]);
                a1[159] = s1;
                a1[153] = s;
                a1[391] = strlen(s) >> 1;
                free((void *)a1[154]);
                a1[154] = sub_1F9F8(a1[391], 1u, "util.c", "initiate_stratum", 3512);
                sub_1FF0C((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[391]);
                a1[158] = v11;
                sub_1F798((int)(a1 + 53), "util.c", "initiate_stratum", 3515);
                if ( s1 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
                {
                  snprintf(v7, 0x800u, "Pool %d stratum session id: %s", *a1, (const char *)a1[159]);
                  sub_1DB6C(7, v7, 0);
                }
                v22 = 1;
              }
              else
              {
                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
                {
                  strcpy(v7, "Failed to get valid n2size in initiate_stratum");
                  sub_1DB6C(6, v7, 0);
                }
                free(s1);
                free(s);
              }
            }
          }
          else
          {
            if ( v14 )
              v18 = (void *)sub_5F850(v14, 3);
            else
              v18 = strdup("(unknown reason)");
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
            {
              snprintf(v7, 0x800u, "JSON-RPC decode failed: %s", (const char *)v18);
              sub_1DB6C(6, v7, 0);
            }
            free(v18);
          }
        }
        else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
        {
          snprintf(v7, 0x800u, "JSON decode failed(%d): %s", v8[0], v9);
          sub_1DB6C(6, v7, 0);
        }
      }
    }
    if ( v22 )
    {
      if ( !a1[144] )
        a1[144] = a1[150];
      *((_BYTE *)a1 + 641) = 1;
      *((_QWORD *)a1 + 227) = 0;
      *((_QWORD *)a1 + 228) = 0x3FF0000000000000LL;
      if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(
          v7,
          0x800u,
          "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
          *a1,
          (const char *)a1[153],
          a1[158]);
        sub_1DB6C(7, v7, 0);
      }
      goto LABEL_94;
    }
    if ( !v21 || v20 == 1 )
      break;
    sub_1F744((int)(a1 + 53), "util.c", "initiate_stratum", 3543);
    free((void *)a1[159]);
    free((void *)a1[153]);
    a1[153] = 0;
    a1[159] = a1[153];
    sub_1F798((int)(a1 + 53), "util.c", "initiate_stratum", 3547);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v7, "Failed to resume stratum, trying afresh");
      sub_1DB6C(7, v7, 0);
    }
    v20 = 1;
  }
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v7, "Initiate stratum failed");
    sub_1DB6C(7, v7, 0);
  }
  if ( v17 )
    sub_28EB4((int)a1);
LABEL_94:
  sub_1F02C(i);
  return v22;
}
