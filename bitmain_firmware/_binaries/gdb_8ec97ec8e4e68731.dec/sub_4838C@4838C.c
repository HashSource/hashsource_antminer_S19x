unsigned __int64 __fastcall sub_4838C(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r5
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  FILE *v9; // r2
  unsigned __int64 v10; // r0
  unsigned __int64 v11; // r10
  __int64 v13; // r2
  int v14; // r1
  FILE *stream; // [sp+2Ch] [bp-20F8h] BYREF
  int v17; // [sp+30h] [bp-20F4h] BYREF
  __uid_t uid; // [sp+34h] [bp-20F0h] BYREF
  __uid_t v19; // [sp+38h] [bp-20ECh] BYREF
  __gid_t gid; // [sp+3Ch] [bp-20E8h] BYREF
  __gid_t v21; // [sp+40h] [bp-20E4h] BYREF
  int v22; // [sp+44h] [bp-20E0h] BYREF
  int v23; // [sp+48h] [bp-20DCh] BYREF
  int v24; // [sp+4Ch] [bp-20D8h] BYREF
  __int64 v25; // [sp+50h] [bp-20D4h] BYREF
  __int64 v26; // [sp+58h] [bp-20CCh] BYREF
  char v27[32]; // [sp+60h] [bp-20C4h] BYREF
  char v28[32]; // [sp+80h] [bp-20A4h] BYREF
  char v29[32]; // [sp+A0h] [bp-2084h] BYREF
  char v30[32]; // [sp+C0h] [bp-2064h] BYREF
  char v31[32]; // [sp+E0h] [bp-2044h] BYREF
  char v32[32]; // [sp+100h] [bp-2024h] BYREF
  char s[8224]; // [sp+120h] [bp-2004h] BYREF

  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v8 = *(_QWORD *)&dword_46AFB8;
  if ( !v6 )
  {
    HIWORD(v4) = 71;
    goto LABEL_16;
  }
  if ( (unsigned __int64)(*(_QWORD *)&dword_46AFB8 + 1LL) > 1 )
    sub_92050(&unk_47265C);
  v4 = &unk_47260C;
  *(_QWORD *)&dword_46AFB8 = 0;
  dword_472668 = 0;
  sub_92080(&unk_47265C);
  sub_92044(&unk_47265C, "<osdata type=\"semaphores\">\n", 27);
  sub_967F0((int)&stream, (int)"/proc/sysvipc/sem", "r");
  v9 = stream;
  if ( stream )
  {
    while ( !fgets(s, 0x2000, v9)
         || sscanf(s, "%d %d %o %u %d %d %d %d %lld %lld", &v17, &v24, &v22, &v23, &uid, &gid, &v19, &v21, &v25, &v26) != 10 )
    {
LABEL_12:
      if ( feof(stream) )
        goto LABEL_13;
      v9 = stream;
    }
    sub_47A80(v27, uid);
    sub_47A44(v28, gid);
    sub_47A80(v29, v19);
    sub_47A44(v30, v21);
    if ( v25 )
    {
      sub_47F90(v31, v25 | HIDWORD(v25), v25);
      v13 = v26;
      v14 = v26 | HIDWORD(v26);
      if ( !v26 )
        goto LABEL_22;
    }
    else
    {
      v31[0] = 0;
      v13 = v26;
      v14 = v26 | HIDWORD(v26);
      if ( !v26 )
      {
LABEL_22:
        v32[0] = 0;
LABEL_23:
        sub_920B0(
          &unk_47265C,
          "<item><column name=\"key\">%d</column><column name=\"semid\">%d</column><column name=\"permissions\">%o</colum"
          "n><column name=\"num semaphores\">%u</column><column name=\"user\">%s</column><column name=\"group\">%s</colum"
          "n><column name=\"creator user\">%s</column><column name=\"creator group\">%s</column><column name=\"last semop"
          "() time\">%s</column><column name=\"last semctl() time\">%s</column></item>",
          v17,
          v24,
          v22,
          v23,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        goto LABEL_12;
      }
    }
    sub_47F90(v32, v14, v13);
    goto LABEL_23;
  }
LABEL_13:
  sub_92044(&unk_47265C, "</osdata>\n", 11);
  dword_472668 = sub_92094(&unk_47265C);
  v10 = strlen((const char *)dword_472668);
  *(_QWORD *)&dword_46AFB8 = (unsigned int)v10;
  if ( stream )
  {
    fclose(stream);
    v10 = *(_QWORD *)&dword_46AFB8;
  }
  v8 = v10;
LABEL_16:
  if ( a2 >= v8 )
  {
    sub_92050(&unk_47265C);
    v4[23] = 0;
    *(_QWORD *)&dword_46AFB8 = 0;
    return 0;
  }
  else
  {
    v11 = v8 - a2;
    if ( v8 - a2 > a3 )
      v11 = a3;
    memcpy(a1, (const void *)(v4[23] + a2), v11);
    return v11;
  }
}
