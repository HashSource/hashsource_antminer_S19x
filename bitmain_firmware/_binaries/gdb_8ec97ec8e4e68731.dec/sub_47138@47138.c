unsigned __int64 __fastcall sub_47138(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r5
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v8; // r2
  FILE *v9; // r2
  char *v10; // r10
  char *v11; // r0
  unsigned __int64 v12; // r0
  char *v14; // r0
  char *v15; // r11
  char *v16; // r0
  unsigned __int64 v17; // [sp+18h] [bp-2034h]
  char *v19; // [sp+2Ch] [bp-2020h]
  FILE *stream; // [sp+34h] [bp-2018h] BYREF
  int v21; // [sp+38h] [bp-2014h] BYREF
  int v22; // [sp+3Ch] [bp-2010h] BYREF
  __int64 v23; // [sp+40h] [bp-200Ch] BYREF
  char s[8184]; // [sp+48h] [bp-2004h] BYREF

  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v8 = *(_QWORD *)&dword_46AF90;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AF90 + 1LL) > 1 )
      sub_92050(&unk_47260C);
    v4 = &unk_47260C;
    *(_QWORD *)&dword_46AF90 = 0;
    dword_472618 = 0;
    sub_92080(&unk_47260C);
    sub_92044(&unk_47260C, "<osdata type=\"modules\">\n", 24);
    sub_967F0((int)&stream, (int)"/proc/modules", "r");
    v9 = stream;
    if ( stream )
    {
      while ( 1 )
      {
        if ( fgets(s, 0x2000, v9) )
        {
          v10 = strtok(s, (const char *)&word_3E1F84);
          if ( v10 )
          {
            v11 = strtok(0, (const char *)&word_3E1F84);
            if ( v11 )
            {
              if ( sscanf(v11, "%u", &v21) == 1 )
              {
                v14 = strtok(0, (const char *)&word_3E1F84);
                if ( v14 )
                {
                  if ( sscanf(v14, "%d", &v22) == 1 )
                  {
                    v19 = strtok(0, (const char *)&word_3E1F84);
                    if ( v19 )
                    {
                      v15 = strtok(0, (const char *)&word_3E1F84);
                      if ( v15 )
                      {
                        v16 = strtok(0, (const char *)&word_356638);
                        if ( v16 )
                        {
                          if ( sscanf(v16, "%llx", &v23) == 1 )
                            sub_920B0(
                              &unk_47260C,
                              "<item><column name=\"name\">%s</column><column name=\"size\">%u</column><column name=\"num"
                              " uses\">%d</column><column name=\"dependencies\">%s</column><column name=\"status\">%s</co"
                              "lumn><column name=\"address\">%llx</column></item>",
                              v10,
                              v21,
                              v22,
                              v19,
                              v15,
                              v23);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( feof(stream) )
          break;
        v9 = stream;
      }
    }
    sub_92044(&unk_47260C, "</osdata>\n", 11);
    dword_472618 = sub_92094(&unk_47260C);
    v12 = strlen((const char *)dword_472618);
    *(_QWORD *)&dword_46AF90 = (unsigned int)v12;
    if ( stream )
    {
      fclose(stream);
      v12 = *(_QWORD *)&dword_46AF90;
    }
    v8 = v12;
  }
  else
  {
    HIWORD(v4) = 71;
  }
  if ( a2 >= v8 )
  {
    sub_92050(&unk_47260C);
    v4[3] = 0;
    *(_QWORD *)&dword_46AF90 = 0;
    return 0;
  }
  else
  {
    v17 = v8 - a2;
    if ( v8 - a2 > a3 )
      v17 = a3;
    memcpy(a1, (const void *)(v4[3] + a2), v17);
    return v17;
  }
}
