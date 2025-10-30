unsigned __int64 __fastcall sub_47440(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r7
  unsigned __int64 v5; // r8
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  DIR *v9; // r6
  int v10; // r0
  const char *v11; // r4
  int v12; // r0
  char *v13; // r11
  DIR *v14; // r8
  int v15; // r3
  char *v16; // r5
  const char *v17; // r0
  ssize_t v18; // r0
  bool v19; // nf
  char *v20; // r0
  char *v21; // r3
  unsigned __int64 v22; // r10
  int v25; // [sp+18h] [bp-49Ch]
  _BYTE v26[20]; // [sp+2Ch] [bp-488h] BYREF
  char v27[32]; // [sp+40h] [bp-474h] BYREF
  _BYTE v28[16]; // [sp+60h] [bp-454h] BYREF
  int v29; // [sp+70h] [bp-444h]
  char buf[1032]; // [sp+C8h] [bp-3ECh] BYREF

  v5 = a2;
  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v8 = *(_QWORD *)&dword_46AF98;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AF98 + 1LL) > 1 )
      sub_92050(&unk_47261C);
    v4 = &unk_47260C;
    *(_QWORD *)&dword_46AF98 = 0;
    dword_472628 = 0;
    sub_92080(&unk_47261C);
    sub_92044(&unk_47261C, "<osdata type=\"files\">\n", 22);
    v9 = opendir("/proc");
    if ( v9 )
    {
      v25 = v5;
      while ( 1 )
      {
        v10 = readdir64(v9);
        if ( !v10 )
          break;
        if ( (unsigned int)*(unsigned __int8 *)(v10 + 19) - 48 <= 9 )
        {
          v11 = (const char *)(v10 + 19);
          if ( strlen((const char *)(v10 + 19)) <= 0xA )
          {
            sub_93170(v26, 17, "/proc/%s", v11);
            if ( !_xstat64(3, v26, v28) && (v29 & 0xF000) == 0x4000 )
            {
              v12 = strtol(v11, 0, 10);
              sub_46EA4(v27, 0x20u, v12);
              v13 = (char *)sub_93140("/proc/%s/fd", v11);
              v14 = opendir(v13);
              if ( v14 )
              {
                while ( 1 )
                {
                  v15 = readdir64(v14);
                  v16 = (char *)(v15 + 19);
                  if ( !v15 )
                    break;
                  if ( (unsigned int)*(unsigned __int8 *)(v15 + 19) - 48 <= 9 )
                  {
                    v17 = (const char *)sub_93140("%s/%s", v13, (const char *)(v15 + 19));
                    v18 = readlink(v17, buf, 0x3E7u);
                    v19 = v18 < 0;
                    v20 = &buf[v18 + 1000];
                    v21 = buf;
                    if ( v19 )
                      v21 = v16;
                    else
                      *(v20 - 1000) = 0;
                    sub_920B0(
                      &unk_47261C,
                      "<item><column name=\"pid\">%s</column><column name=\"command\">%s</column><column name=\"file desc"
                      "riptor\">%s</column><column name=\"name\">%s</column></item>",
                      v11,
                      v27,
                      v16,
                      v21);
                  }
                }
                closedir(v14);
              }
              free(v13);
            }
          }
        }
      }
      v4 = &unk_47260C;
      LODWORD(v5) = v25;
      closedir(v9);
    }
    sub_92044(&unk_47261C, "</osdata>\n", 11);
    dword_472628 = sub_92094(&unk_47261C);
    v8 = strlen((const char *)dword_472628);
    *(_QWORD *)&dword_46AF98 = v8;
  }
  else
  {
    HIWORD(v4) = 71;
  }
  if ( v5 >= v8 )
  {
    sub_92050(&unk_47261C);
    v4[7] = 0;
    *(_QWORD *)&dword_46AF98 = 0;
    return 0;
  }
  else
  {
    v22 = v8 - v5;
    if ( v8 - v5 > a3 )
      v22 = a3;
    memcpy(a1, (const void *)(v4[7] + v5), v22);
    return v22;
  }
}
