unsigned __int64 __fastcall sub_47730(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r5
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  FILE *v9; // r2
  char *v10; // r6
  char *v11; // r0
  const char *v12; // r8
  int v13; // r3
  bool v14; // zf
  char *v15; // r1
  char *v16; // r3
  int v17; // r2
  int v18; // t1
  bool v19; // zf
  int v20; // r3
  bool v21; // zf
  char *v22; // r3
  int v23; // r2
  int v24; // t1
  bool v25; // zf
  unsigned __int64 v26; // r0
  unsigned __int64 v28; // [sp+0h] [bp-2024h]
  int v29; // [sp+Ch] [bp-2018h]
  FILE *stream; // [sp+1Ch] [bp-2008h] BYREF
  char s[8224]; // [sp+20h] [bp-2004h] BYREF

  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v8 = *(_QWORD *)&dword_46AFA0;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AFA0 + 1LL) > 1 )
      sub_92050(&unk_47262C);
    v4 = &unk_47260C;
    *(_QWORD *)&dword_46AFA0 = 0;
    dword_472638 = 0;
    sub_92080(&unk_47262C);
    sub_92044(&unk_47262C, "<osdata type=\"cpus\">\n", 21);
    sub_967F0((int)&stream, (int)"/proc/cpuinfo", "r");
    v9 = stream;
    if ( stream )
    {
      v29 = 1;
      while ( 1 )
      {
        if ( fgets(s, 0x2000, v9) )
        {
          v10 = strtok(s, ":");
          if ( v10 )
          {
            v11 = strtok(0, ":");
            v12 = v11;
            if ( v11 )
            {
              v13 = (unsigned __int8)*v10;
              v14 = v13 == 0;
              if ( *v10 )
                v14 = v13 == 9;
              if ( v14 )
              {
                v15 = v10;
              }
              else
              {
                v16 = v10 + 1;
                do
                {
                  v15 = v16;
                  v18 = (unsigned __int8)*v16++;
                  v17 = v18;
                  v19 = v18 == 9;
                  if ( v18 != 9 )
                    v19 = v17 == 0;
                }
                while ( !v19 );
              }
              *v15 = 0;
              v20 = (unsigned __int8)*v11;
              v21 = v20 == 0;
              if ( *v11 )
                v21 = v20 == 9;
              if ( !v21 )
              {
                v22 = v11 + 1;
                do
                {
                  v11 = v22;
                  v24 = (unsigned __int8)*v22++;
                  v23 = v24;
                  v25 = v24 == 0;
                  if ( v24 )
                    v25 = v23 == 9;
                }
                while ( !v25 );
              }
              *v11 = 0;
              if ( !strcmp(v10, "processor") )
              {
                if ( v29 )
                  sub_92044(&unk_47262C, "<item>", 6);
                else
                  sub_92044(&unk_47262C, "</item><item>", 13);
                v29 = 0;
              }
              sub_920B0(&unk_47262C, "<column name=\"%s\">%s</column>", v10, v12);
            }
          }
        }
        if ( feof(stream) )
          break;
        v9 = stream;
      }
      if ( !v29 )
        sub_92044(&unk_47262C, "</item>", 7);
    }
    sub_92044(&unk_47262C, "</osdata>\n", 11);
    dword_472638 = sub_92094(&unk_47262C);
    v26 = strlen((const char *)dword_472638);
    *(_QWORD *)&dword_46AFA0 = (unsigned int)v26;
    if ( stream )
    {
      fclose(stream);
      v26 = *(_QWORD *)&dword_46AFA0;
    }
    v8 = v26;
  }
  else
  {
    HIWORD(v4) = 71;
  }
  if ( a2 >= v8 )
  {
    sub_92050(&unk_47262C);
    v4[11] = 0;
    *(_QWORD *)&dword_46AFA0 = 0;
    return 0;
  }
  else
  {
    v28 = v8 - a2;
    if ( v8 - a2 > a3 )
      v28 = a3;
    memcpy(a1, (const void *)(v4[11] + a2), v28);
    return v28;
  }
}
