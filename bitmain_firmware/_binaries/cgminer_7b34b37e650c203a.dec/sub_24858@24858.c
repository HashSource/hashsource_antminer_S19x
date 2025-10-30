char *__fastcall sub_24858(int a1)
{
  char *v2; // r7
  signed int v3; // r6
  char *v4; // r0
  char *v5; // r5
  size_t v6; // r0
  size_t v7; // r7
  unsigned int v8; // lr
  __int64 v9; // kr08_8
  unsigned int v10; // r3
  unsigned int v11; // kr04_4
  int v12; // r1
  unsigned int v13; // r2
  ssize_t v15; // r5
  bool v16; // nf
  int v17; // r5
  char *v18; // r9
  size_t v19; // r7
  size_t v20; // r8
  unsigned int v21; // r0
  size_t v22; // r7
  char *v23; // r0
  struct timeval tv; // [sp+8h] [bp-2814h] BYREF
  struct timeval v25; // [sp+10h] [bp-280Ch] BYREF
  char v26[2040]; // [sp+18h] [bp-2804h] BYREF
  char v27[8196]; // [sp+818h] [bp-2004h] BYREF

  v2 = *(char **)(a1 + 592);
  if ( !strchr(v2, 10) )
  {
    gettimeofday(&tv, 0);
    if ( !sub_22428(*(_DWORD *)(a1 + 588), 60) )
    {
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        strcpy(v27, "Timed out waiting for data on socket_full");
        sub_20F58(7, v27, 0);
      }
      goto LABEL_29;
    }
    while ( 1 )
    {
      memset(v27, 0, 0x2000u);
      v15 = recv(*(_DWORD *)(a1 + 588), v27, 0x1FFCu, 0);
      if ( !v15 )
        break;
      gettimeofday(&v25, 0);
      v16 = v15 < 0;
      v17 = (int)((double)(v25.tv_usec - tv.tv_usec) / 1000000.0 + (double)(v25.tv_sec - tv.tv_sec));
      if ( v16 )
      {
        if ( *_errno_location() != 11 || !sub_22428(*(_DWORD *)(a1 + 588), 60 - v17) )
        {
          if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
          {
            strcpy(v26, "Failed to recv sock in recv_line");
            sub_20F58(7, v26, 0);
          }
          goto LABEL_35;
        }
      }
      else
      {
        v18 = *(char **)(a1 + 592);
        v19 = strlen(v27);
        v20 = strlen(v18);
        v21 = v19 + v20 + 1;
        if ( v21 >= *(_DWORD *)(a1 + 596) )
        {
          v22 = (v21 & 0xFFFFE000) + 0x2000;
          v23 = (char *)sub_22AD4(v18, v22, "util.c", "recalloc_sock", 1803);
          *(_DWORD *)(a1 + 592) = v23;
          memset(&v23[v20], 0, v22 - v20);
          v18 = *(char **)(a1 + 592);
          *(_DWORD *)(a1 + 596) = v22;
        }
        strcat(v18, v27);
      }
      v2 = *(char **)(a1 + 592);
      if ( v17 > 59 || strchr(*(const char **)(a1 + 592), 10) )
        goto LABEL_2;
    }
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      strcpy(v26, "Socket closed waiting in recv_line");
      sub_20F58(7, v26, 0);
    }
LABEL_35:
    sub_24340(a1);
    v2 = *(char **)(a1 + 592);
  }
LABEL_2:
  v3 = strlen(v2);
  v4 = strtok(v2, (const char *)&word_4C858);
  if ( !v4 )
  {
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      strcpy(v27, "Failed to parse a \\n terminated string in recv_line");
      sub_20F58(7, v27, 0);
    }
LABEL_29:
    v5 = 0;
    sub_228C8(a1);
    return v5;
  }
  v5 = _strdup(v4);
  v6 = strlen(v5);
  v7 = v6;
  if ( (int)(v6 + 1) < v3 )
    memmove(*(void **)(a1 + 592), (const void *)(*(_DWORD *)(a1 + 592) + v6 + 1), v3 - v6 + 1);
  else
    **(_BYTE **)(a1 + 592) = 0;
  v8 = *(_DWORD *)(a1 + 532);
  v9 = *(_QWORD *)(a1 + 520) + 1LL;
  v10 = *(_DWORD *)(a1 + 536);
  v11 = *(_DWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 520) = v9;
  *(_QWORD *)(a1 + 528) = __PAIR64__(v8, v11) + v7;
  v12 = (unsigned __int8)byte_73398;
  v13 = *(_DWORD *)(a1 + 540);
  *(_DWORD *)(a1 + 524) = HIDWORD(v9);
  *(_QWORD *)(a1 + 536) = __PAIR64__(v13, v10) + v7;
  if ( v12 && byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(v27, 0x800u, "RECVD: %s", v5);
    sub_20F58(7, v27, 0);
  }
  return v5;
}
