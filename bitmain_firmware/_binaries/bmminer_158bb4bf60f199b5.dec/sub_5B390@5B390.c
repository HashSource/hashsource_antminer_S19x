void __fastcall sub_5B390(const char *a1, _DWORD *a2)
{
  int v4; // r10
  int v5; // r11
  char *v6; // r9
  char *v7; // r8
  char *v8; // r7
  signed int v9; // r4
  size_t v10; // r4
  const char *v11; // r12
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r12
  int v17; // r1
  int *v18; // r0
  int v19; // r3
  int v20; // [sp+20h] [bp-C0Ch]
  int v21; // [sp+24h] [bp-C08h]
  char s[1024]; // [sp+28h] [bp-C04h] BYREF
  _DWORD v23[5]; // [sp+428h] [bp-804h] BYREF
  __int16 v24; // [sp+43Ch] [bp-7F0h]

  if ( !dword_1AECDC )
    return;
  v21 = a2[64];
  v4 = *(_DWORD *)(sub_57BAC(v21) + 36);
  v5 = a2[65];
  v20 = a2[108];
  v6 = sub_4988C((int)(a2 + 40), 32);
  v7 = sub_4988C((int)(a2 + 48), 32);
  v8 = sub_4988C((int)a2, 128);
  v9 = snprintf(
         s,
         0x400u,
         "%lu,%s,%s,%s,%s%u,%u,%s,%s\n",
         v20,
         a1,
         v6,
         *(const char **)(v5 + 164),
         *(const char **)(*(_DWORD *)(v4 + 4) + 8),
         *(_DWORD *)(v4 + 8),
         v21,
         v7,
         v8);
  free(v6);
  free(v7);
  free(v8);
  if ( v9 >= 1024 )
  {
    s[1023] = 0;
    goto LABEL_5;
  }
  if ( v9 >= 0 )
  {
LABEL_5:
    if ( pthread_mutex_lock(&stru_1AF22C) )
    {
      v18 = _errno_location();
      snprintf(
        (char *)v23,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v18,
        "cgminer.c",
        "sharelog",
        672);
    }
    else
    {
      v10 = fwrite(s, v9, 1u, (FILE *)dword_1AECDC);
      fflush((FILE *)dword_1AECDC);
      if ( !pthread_mutex_unlock(&stru_1AF22C) )
      {
        off_9E444();
        if ( v10 != 1 && (byte_244080 || byte_1AECC4 || dword_9E320 > 2) )
        {
          v11 = "sharelog fwrite error";
LABEL_12:
          v12 = *(_DWORD *)v11;
          v13 = *((_DWORD *)v11 + 1);
          v14 = *((_DWORD *)v11 + 2);
          v15 = *((_DWORD *)v11 + 3);
          v16 = v11 + 16;
          v23[0] = v12;
          v23[1] = v13;
          v23[2] = v14;
          v23[3] = v15;
          v17 = v16[1];
          v23[4] = *v16;
          v24 = v17;
          sub_47AB4(3, (const char *)v23, 0);
          return;
        }
        return;
      }
      v19 = *_errno_location();
      snprintf(
        (char *)v23,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v19,
        "cgminer.c",
        "sharelog",
        675);
    }
    sub_47AB4(3, (const char *)v23, 1);
    sub_54CCC(1, 1);
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    v11 = "sharelog printf error";
    goto LABEL_12;
  }
}
