char *__fastcall sub_23428(int a1)
{
  double v1; // d0
  char v4[48]; // [sp+Ch] [bp-2830h] BYREF
  char v5[8192]; // [sp+80Ch] [bp-2030h] BYREF
  __time_t v6[2]; // [sp+280Ch] [bp-30h] BYREF
  __time_t v7[2]; // [sp+2814h] [bp-28h] BYREF
  signed int v8; // [sp+281Ch] [bp-20h]
  char *s; // [sp+2820h] [bp-1Ch]
  signed int v10; // [sp+2824h] [bp-18h]
  size_t v11; // [sp+2828h] [bp-14h]
  int v12; // [sp+282Ch] [bp-10h]
  ssize_t v13; // [sp+2830h] [bp-Ch]
  char *v14; // [sp+2834h] [bp-8h]

  v14 = 0;
  v12 = 0;
  if ( strchr(*(const char **)(a1 + 608), 10) )
    goto LABEL_30;
  sub_22308(v7);
  if ( !sub_23060(a1, 60) )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v5, "Timed out waiting for data on socket_full");
      sub_1E4EC(7, v5, 0);
    }
    goto LABEL_41;
  }
  while ( 1 )
  {
    memset(v5, 0, sizeof(v5));
    if ( *(_BYTE *)(a1 + 592) )
      v13 = SSL_read(*(_DWORD *)(a1 + 596), v5, 8188);
    else
      v13 = recv(*(_DWORD *)(a1 + 588), v5, 0x1FFCu, 0);
    if ( !v13 )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v4, "Socket closed waiting in recv_line");
        sub_1E4EC(7, v4, 0);
      }
      goto LABEL_17;
    }
    sub_22308(v6);
    sub_226B0();
    v12 = (int)v1;
    if ( v13 < 0 )
      break;
    v11 = strlen(v5);
    sub_23350(a1, v11);
    strcat(*(char **)(a1 + 608), v5);
LABEL_28:
    if ( v12 > 59 || strchr(*(const char **)(a1 + 608), 10) )
      goto LABEL_30;
  }
  if ( (unsigned __int8)sub_1FAF4() == 1 && sub_23060(a1, 60 - v12) )
    goto LABEL_28;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v4, "Failed to recv sock in recv_line");
    sub_1E4EC(7, v4, 0);
  }
LABEL_17:
  sub_29EF4(a1);
LABEL_30:
  v10 = strlen(*(const char **)(a1 + 608));
  s = strtok(*(char **)(a1 + 608), (const char *)&word_6B0EC);
  if ( s )
  {
    v14 = strdup(s);
    v8 = strlen(v14);
    if ( v8 + 1 >= v10 )
      **(_BYTE **)(a1 + 608) = 0;
    else
      memmove(*(void **)(a1 + 608), (const void *)(*(_DWORD *)(a1 + 608) + v8 + 1), v10 - v8 + 1);
    ++*(_QWORD *)(a1 + 520);
    *(_QWORD *)(a1 + 528) += v8;
    *(_QWORD *)(a1 + 536) += v8;
  }
  else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    strcpy(v5, "Failed to parse a \\n terminated string in recv_line");
    sub_1E4EC(7, v5, 0);
  }
LABEL_41:
  if ( v14 )
  {
    if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v5, 0x800u, "RECVD: %s", v14);
      sub_1E4EC(7, v5, 0);
    }
  }
  else
  {
    sub_2320C(a1);
  }
  return v14;
}
