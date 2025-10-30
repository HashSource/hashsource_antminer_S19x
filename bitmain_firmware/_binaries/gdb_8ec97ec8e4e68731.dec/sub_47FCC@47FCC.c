unsigned __int64 __fastcall sub_47FCC(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r6
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  FILE *v9; // r2
  unsigned __int64 v10; // r0
  time_t v12; // r2
  int v13; // r1
  __int64 v14; // r2
  int v15; // r1
  unsigned __int64 v16; // [sp+30h] [bp-218Ch]
  FILE *stream; // [sp+48h] [bp-2174h] BYREF
  int v19; // [sp+4Ch] [bp-2170h] BYREF
  __uid_t uid; // [sp+50h] [bp-216Ch] BYREF
  __uid_t v21; // [sp+54h] [bp-2168h] BYREF
  __gid_t gid; // [sp+58h] [bp-2164h] BYREF
  __gid_t v23; // [sp+5Ch] [bp-2160h] BYREF
  int v24; // [sp+60h] [bp-215Ch] BYREF
  int v25; // [sp+64h] [bp-2158h] BYREF
  int v26; // [sp+68h] [bp-2154h] BYREF
  int v27; // [sp+6Ch] [bp-2150h] BYREF
  __int64 v28; // [sp+70h] [bp-214Ch] BYREF
  __int64 v29; // [sp+78h] [bp-2144h] BYREF
  __int64 v30; // [sp+80h] [bp-213Ch] BYREF
  __int64 v31; // [sp+88h] [bp-2134h] BYREF
  __int64 v32; // [sp+90h] [bp-212Ch] BYREF
  char v33[32]; // [sp+98h] [bp-2124h] BYREF
  char v34[32]; // [sp+B8h] [bp-2104h] BYREF
  char v35[32]; // [sp+D8h] [bp-20E4h] BYREF
  char v36[32]; // [sp+F8h] [bp-20C4h] BYREF
  char v37[32]; // [sp+118h] [bp-20A4h] BYREF
  char v38[32]; // [sp+138h] [bp-2084h] BYREF
  char v39[32]; // [sp+158h] [bp-2064h] BYREF
  char v40[32]; // [sp+178h] [bp-2044h] BYREF
  char v41[32]; // [sp+198h] [bp-2024h] BYREF
  char s[8200]; // [sp+1B8h] [bp-2004h] BYREF

  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v8 = *(_QWORD *)&dword_46AFB0;
  if ( !v6 )
  {
    HIWORD(v4) = 71;
    goto LABEL_16;
  }
  if ( (unsigned __int64)(*(_QWORD *)&dword_46AFB0 + 1LL) > 1 )
    sub_92050(&unk_47264C);
  v4 = &unk_47260C;
  *(_QWORD *)&dword_46AFB0 = 0;
  dword_472658 = 0;
  sub_92080(&unk_47264C);
  sub_92044(&unk_47264C, "<osdata type=\"message queues\">\n", 31);
  sub_967F0((int)&stream, (int)"/proc/sysvipc/msg", "r");
  v9 = stream;
  if ( stream )
  {
    while ( !fgets(s, 0x2000, v9)
         || sscanf(
              s,
              "%d %d %o %u %u %lld %lld %d %d %d %d %lld %lld %lld",
              &v19,
              &v27,
              &v24,
              &v25,
              &v26,
              &v28,
              &v29,
              &uid,
              &gid,
              &v21,
              &v23,
              &v30,
              &v31,
              &v32) != 14 )
    {
LABEL_12:
      if ( feof(stream) )
        goto LABEL_13;
      v9 = stream;
    }
    sub_47A80(v33, uid);
    sub_47A44(v34, gid);
    sub_47A80(v35, v21);
    sub_47A44(v36, v23);
    sub_46EA4(v37, 0x20u, v28);
    sub_46EA4(v38, 0x20u, v29);
    if ( v30 )
    {
      sub_47F90(v39, (int)v39, v30);
      v12 = v31;
      v13 = v31 | HIDWORD(v31);
      if ( !v31 )
      {
LABEL_22:
        v40[0] = 0;
        v14 = v32;
        v15 = v32 | HIDWORD(v32);
        if ( !v32 )
        {
LABEL_23:
          v41[0] = 0;
LABEL_24:
          sub_920B0(
            &unk_47264C,
            "<item><column name=\"key\">%d</column><column name=\"msqid\">%d</column><column name=\"permissions\">%o</col"
            "umn><column name=\"num used bytes\">%u</column><column name=\"num messages\">%u</column><column name=\"last "
            "msgsnd() command\">%s</column><column name=\"last msgrcv() command\">%s</column><column name=\"user\">%s</co"
            "lumn><column name=\"group\">%s</column><column name=\"creator user\">%s</column><column name=\"creator group"
            "\">%s</column><column name=\"last msgsnd() time\">%s</column><column name=\"last msgrcv() time\">%s</column>"
            "<column name=\"last msgctl() time\">%s</column></item>",
            v19,
            v27,
            v24,
            v25,
            v26,
            v37,
            v38,
            v33,
            v34,
            v35,
            v36,
            v39,
            v40,
            v41);
          goto LABEL_12;
        }
LABEL_28:
        sub_47F90(v41, v15, v14);
        goto LABEL_24;
      }
    }
    else
    {
      v39[0] = 0;
      v12 = v31;
      v13 = v31 | HIDWORD(v31);
      if ( !v31 )
        goto LABEL_22;
    }
    sub_47F90(v40, v13, v12);
    v14 = v32;
    v15 = v32 | HIDWORD(v32);
    if ( !v32 )
      goto LABEL_23;
    goto LABEL_28;
  }
LABEL_13:
  sub_92044(&unk_47264C, "</osdata>\n", 11);
  dword_472658 = sub_92094(&unk_47264C);
  v10 = strlen((const char *)dword_472658);
  *(_QWORD *)&dword_46AFB0 = (unsigned int)v10;
  if ( stream )
  {
    fclose(stream);
    v10 = *(_QWORD *)&dword_46AFB0;
  }
  v8 = v10;
LABEL_16:
  if ( a2 >= v8 )
  {
    sub_92050(&unk_47264C);
    v4[19] = 0;
    *(_QWORD *)&dword_46AFB0 = 0;
    return 0;
  }
  else
  {
    v16 = v8 - a2;
    if ( v8 - a2 > a3 )
      v16 = a3;
    memcpy(a1, (const void *)(v4[19] + a2), v16);
    return v16;
  }
}
