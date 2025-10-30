unsigned __int64 __fastcall sub_48BD0(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // r9
  unsigned __int64 v5; // r10
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  int v9; // r0
  const char *v10; // r4
  int v11; // r10
  DIR *v12; // r4
  int v13; // r6
  int v14; // r3
  const char *v15; // r8
  int v16; // r0
  bool v17; // cc
  char *v19; // r8
  bool v20; // cc
  int v21; // r4
  char *v22; // r7
  bool v23; // cc
  int v24; // r12
  int v25; // t1
  size_t v26; // r0
  _WORD *v27; // r0
  bool v28; // cc
  unsigned __int64 v29; // [sp+10h] [bp-DCh]
  DIR *dirp; // [sp+18h] [bp-D4h]
  int v32; // [sp+24h] [bp-C8h]
  _DWORD *ptr; // [sp+28h] [bp-C4h]
  FILE *v34; // [sp+2Ch] [bp-C0h]
  int v35; // [sp+38h] [bp-B4h]
  __int64 v36; // [sp+40h] [bp-ACh] BYREF
  int v37; // [sp+48h] [bp-A4h] BYREF
  int v38[3]; // [sp+54h] [bp-98h] BYREF
  _WORD v39[16]; // [sp+60h] [bp-8Ch] BYREF
  char s[16]; // [sp+80h] [bp-6Ch] BYREF
  int v41; // [sp+90h] [bp-5Ch]
  __uid_t uid; // [sp+98h] [bp-54h]

  v5 = a2;
  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    v4 = 9740;
  if ( v7 )
    HIWORD(v4) = 71;
  v8 = *(_QWORD *)&dword_46AFC8;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AFC8 + 1LL) > 1 )
      sub_92050(&unk_47267C);
    v4 = (int)&unk_47260C;
    *(_QWORD *)&dword_46AFC8 = 0;
    dword_472688 = 0;
    sub_92080(&unk_47267C);
    sub_92044(&unk_47267C, "<osdata type=\"processes\">\n", 26);
    dirp = opendir("/proc");
    if ( dirp )
    {
      v35 = v5;
      v32 = sysconf(84);
      while ( 1 )
      {
        v9 = readdir64(dirp);
        if ( !v9 )
          break;
        if ( (unsigned int)*(unsigned __int8 *)(v9 + 19) - 48 <= 9 )
        {
          v10 = (const char *)(v9 + 19);
          if ( strlen((const char *)(v9 + 19)) <= 0x14 )
          {
            sscanf(v10, "%lld", &v36);
            v34 = sub_46FB0(v36);
            sprintf((char *)v39, "/proc/%lld", v36);
            if ( _xstat64(3, v39, s) || (v41 & 0xF000) != 0x4000 )
              v39[0] = 63;
            else
              sub_47A80((char *)v39, uid);
            ptr = (_DWORD *)sub_93094(v32, 4u);
            v11 = v36;
            sprintf(s, "/proc/%lld/task", v36);
            v12 = opendir(s);
            if ( v12 )
            {
              v13 = 0;
              while ( 1 )
              {
                v14 = readdir64(v12);
                v15 = (const char *)(v14 + 19);
                if ( !v14 )
                  break;
                if ( (unsigned int)*(unsigned __int8 *)(v14 + 19) - 48 <= 9 && strlen((const char *)(v14 + 19)) <= 0x14 )
                {
                  sscanf(v15, "%lld", &v37);
                  sub_98F48(v38, v11, v37, 0);
                  v16 = sub_48A5C(v38[0], v38[1], v38[2]);
                  v17 = v16 <= 0;
                  if ( v16 >= 0 )
                    v17 = v32 <= v16;
                  if ( !v17 )
                  {
                    ++v13;
                    ++ptr[v16];
                  }
                }
              }
              closedir(v12);
              v19 = (char *)sub_93094(v13, 0xCu);
              v20 = v13 <= 0;
              if ( v13 > 0 )
                v20 = v32 <= 0;
              v21 = v20;
              if ( !v20 )
              {
                v22 = (char *)(ptr - 1);
                do
                {
                  while ( 1 )
                  {
                    v25 = *((_DWORD *)v22 + 1);
                    v22 += 4;
                    v24 = v25;
                    if ( !v25 )
                      break;
                    v13 -= v24;
                    sprintf(s, "%d", v21++);
                    v26 = strlen(v19);
                    v27 = (_WORD *)stpcpy(&v19[v26], s);
                    if ( v13 > 0 )
                      *v27 = 44;
                    v28 = v13 <= 0;
                    if ( v13 > 0 )
                      v28 = v32 <= v21;
                    if ( v28 )
                      goto LABEL_50;
                  }
                  ++v21;
                  v23 = v13 <= 0;
                  if ( v13 > 0 )
                    v23 = v32 <= v21;
                }
                while ( !v23 );
              }
            }
            else
            {
              v19 = (char *)sub_93094(0, 0xCu);
            }
LABEL_50:
            free(ptr);
            if ( v34 )
            {
              sub_920B0(
                &unk_47267C,
                "<item><column name=\"pid\">%lld</column><column name=\"user\">%s</column><column name=\"command\">%s</co"
                "lumn><column name=\"cores\">%s</column></item>",
                v36,
                (const char *)v39,
                (const char *)v34,
                v19);
              free(v34);
            }
            else
            {
              sub_920B0(
                &unk_47267C,
                "<item><column name=\"pid\">%lld</column><column name=\"user\">%s</column><column name=\"command\">%s</co"
                "lumn><column name=\"cores\">%s</column></item>",
                v36,
                (const char *)v39,
                "",
                v19);
            }
            free(v19);
          }
        }
      }
      v4 = (int)&unk_47260C;
      LODWORD(v5) = v35;
      closedir(dirp);
    }
    sub_92044(&unk_47267C, "</osdata>\n", 11);
    dword_472688 = sub_92094(&unk_47267C);
    v8 = strlen((const char *)dword_472688);
    *(_QWORD *)&dword_46AFC8 = v8;
  }
  if ( v5 >= v8 )
  {
    sub_92050(&unk_47267C);
    *(_DWORD *)(v4 + 124) = 0;
    *(_QWORD *)&dword_46AFC8 = 0;
    return 0;
  }
  else
  {
    v29 = v8 - v5;
    if ( v8 - v5 > a3 )
      v29 = a3;
    memcpy(a1, (const void *)(*(_DWORD *)(v4 + 124) + v5), v29);
    return v29;
  }
}
