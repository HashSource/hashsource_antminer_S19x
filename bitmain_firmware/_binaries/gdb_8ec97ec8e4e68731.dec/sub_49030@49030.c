unsigned __int64 __fastcall sub_49030(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // r6
  unsigned __int64 v5; // r10
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  DIR *v9; // r5
  int v10; // r0
  const char *v11; // r4
  int v12; // r10
  DIR *v13; // r11
  int v14; // r3
  const char *v15; // r4
  int v16; // r4
  int v17; // r0
  unsigned __int64 v18; // r8
  int v20; // [sp+4h] [bp-F0h]
  unsigned __int64 v22; // [sp+28h] [bp-CCh]
  char *ptr; // [sp+44h] [bp-B0h]
  int v24[3]; // [sp+48h] [bp-ACh] BYREF
  _BYTE v25[20]; // [sp+54h] [bp-A0h] BYREF
  char v26[32]; // [sp+68h] [bp-8Ch] BYREF
  _BYTE v27[16]; // [sp+88h] [bp-6Ch] BYREF
  int v28; // [sp+98h] [bp-5Ch]

  v5 = a2;
  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    v4 = 9740;
  if ( v7 )
    HIWORD(v4) = 71;
  v8 = *(_QWORD *)&dword_46AFD0;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AFD0 + 1LL) > 1 )
      sub_92050(&unk_47268C);
    v4 = (int)&unk_47260C;
    *(_QWORD *)&dword_46AFD0 = 0;
    dword_472698 = 0;
    sub_92080(&unk_47268C);
    sub_92044(&unk_47268C, "<osdata type=\"threads\">\n", 24);
    v9 = opendir("/proc");
    if ( v9 )
    {
      v22 = v5;
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
            sub_93170(v25, 17, "/proc/%s", v11);
            if ( !_xstat64(3, v25, v27) && (v28 & 0xF000) == 0x4000 )
            {
              ptr = (char *)sub_93140("/proc/%s/task", v11);
              v12 = strtol(v11, 0, 10);
              sub_46EA4(v26, 0x20u, v12);
              v13 = opendir(ptr);
              if ( v13 )
              {
                while ( 1 )
                {
                  v14 = readdir64(v13);
                  v15 = (const char *)(v14 + 19);
                  if ( !v14 )
                    break;
                  if ( (unsigned int)*(unsigned __int8 *)(v14 + 19) - 48 <= 9 && strlen((const char *)(v14 + 19)) <= 0xA )
                  {
                    v16 = strtol(v15, 0, 10);
                    sub_98F48(v24, v12, v16, 0);
                    v17 = sub_48A5C(v24[0], v24[1], v24[2]);
                    sub_920B0(
                      &unk_47268C,
                      "<item><column name=\"pid\">%lld</column><column name=\"command\">%s</column><column name=\"tid\">%"
                      "lld</column><column name=\"core\">%d</column></item>",
                      (__int64)v12,
                      v26,
                      v20,
                      (__int64)v16,
                      v17);
                  }
                }
                closedir(v13);
              }
              free(ptr);
            }
          }
        }
      }
      v5 = v22;
      closedir(v9);
    }
    sub_92044(&unk_47268C, "</osdata>\n", 11);
    dword_472698 = sub_92094(&unk_47268C);
    v8 = strlen((const char *)dword_472698);
    *(_QWORD *)&dword_46AFD0 = v8;
  }
  if ( v5 >= v8 )
  {
    sub_92050(&unk_47268C);
    *(_DWORD *)(v4 + 140) = 0;
    *(_QWORD *)&dword_46AFD0 = 0;
    return 0;
  }
  else
  {
    v18 = v8 - v5;
    if ( v8 - v5 > a3 )
      v18 = a3;
    memcpy(a1, (const void *)(*(_DWORD *)(v4 + 140) + v5), v18);
    return v18;
  }
}
