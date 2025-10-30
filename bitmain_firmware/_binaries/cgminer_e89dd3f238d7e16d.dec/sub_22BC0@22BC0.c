char *__fastcall sub_22BC0(int a1)
{
  double v1; // d0
  char v4[72]; // [sp+Ch] [bp-2848h] BYREF
  char v5[8192]; // [sp+80Ch] [bp-2048h] BYREF
  __time_t v6[2]; // [sp+280Ch] [bp-48h] BYREF
  __time_t v7[2]; // [sp+2814h] [bp-40h] BYREF
  signed int v8; // [sp+281Ch] [bp-38h]
  char *s; // [sp+2820h] [bp-34h]
  signed int v10; // [sp+2824h] [bp-30h]
  size_t v11; // [sp+2828h] [bp-2Ch]
  ssize_t v12; // [sp+282Ch] [bp-28h]
  int v13; // [sp+2830h] [bp-24h]
  char *v14; // [sp+2834h] [bp-20h]

  v14 = 0;
  v13 = 0;
  if ( strchr(*(const char **)(a1 + 592), 10) )
    goto LABEL_27;
  sub_21AC0(v7);
  if ( !sub_227F0(a1, 60) )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v5, "Timed out waiting for data on socket_full");
      sub_1DB6C(7, v5, 0);
    }
    goto LABEL_37;
  }
  while ( 1 )
  {
    memset(v5, 0, sizeof(v5));
    v12 = recv(*(_DWORD *)(a1 + 588), v5, 0x1FFCu, 0);
    if ( !v12 )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v4, "Socket closed waiting in recv_line");
        sub_1DB6C(7, v4, 0);
      }
      goto LABEL_14;
    }
    sub_21AC0(v6);
    sub_21E88();
    v13 = (int)v1;
    if ( v12 < 0 )
      break;
    v11 = strlen(v5);
    sub_22AE4(a1, v11);
    strcat(*(char **)(a1 + 592), v5);
LABEL_25:
    if ( v13 > 59 || strchr(*(const char **)(a1 + 592), 10) )
      goto LABEL_27;
  }
  if ( (unsigned __int8)sub_1F1EC() == 1 && sub_227F0(a1, 60 - v13) )
    goto LABEL_25;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v4, "Failed to recv sock in recv_line");
    sub_1DB6C(7, v4, 0);
  }
LABEL_14:
  sub_28EB4(a1);
LABEL_27:
  v10 = strlen(*(const char **)(a1 + 592));
  s = strtok(*(char **)(a1 + 592), (const char *)&word_6A46C);
  if ( s )
  {
    v14 = strdup(s);
    v8 = strlen(v14);
    if ( v10 <= v8 + 1 )
      **(_BYTE **)(a1 + 592) = 0;
    else
      memmove(*(void **)(a1 + 592), (const void *)(*(_DWORD *)(a1 + 592) + v8 + 1), v10 - v8 + 1);
    ++*(_QWORD *)(a1 + 520);
    *(_QWORD *)(a1 + 528) += v8;
    *(_QWORD *)(a1 + 536) += v8;
  }
  else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    strcpy(v5, "Failed to parse a \\n terminated string in recv_line");
    sub_1DB6C(7, v5, 0);
  }
LABEL_37:
  if ( v14 )
  {
    if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v5, 0x800u, "RECVD: %s", v14);
      sub_1DB6C(7, v5, 0);
    }
  }
  else
  {
    sub_22998(a1);
  }
  return v14;
}
