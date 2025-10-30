unsigned __int64 __fastcall sub_497AC(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r6
  bool v5; // zf
  int v6; // r3
  unsigned __int64 v7; // r2
  DIR *v8; // r4
  int v9; // r0
  const char *v10; // r7
  int v11; // r0
  _QWORD *v12; // r12
  __int64 v13; // r2
  char *v14; // r7
  __int64 *v15; // r4
  int v16; // r5
  __int64 *v17; // r10
  __int64 v18; // r8
  FILE *v19; // r0
  char *v20; // r1
  FILE *v21; // r5
  __int64 *v23; // r5
  __int64 *v24; // r0
  int v25; // [sp+4h] [bp-78h]
  __int64 v26; // [sp+18h] [bp-64h]
  unsigned __int64 v28; // [sp+28h] [bp-54h]
  __int64 v30; // [sp+40h] [bp-3Ch] BYREF
  void *ptr; // [sp+4Ch] [bp-30h] BYREF
  void *v32; // [sp+50h] [bp-2Ch]
  char *v33; // [sp+54h] [bp-28h]
  char v34[36]; // [sp+58h] [bp-24h] BYREF

  v6 = a2 | HIDWORD(a2);
  v5 = v6 == 0;
  if ( v6 )
    LOWORD(v4) = (unsigned __int16)&unk_47260C;
  v7 = *(_QWORD *)&dword_46B090;
  if ( v5 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46B090 + 1LL) > 1 )
      sub_92050(&unk_4726AC);
    v4 = &unk_47260C;
    *(_QWORD *)&dword_46B090 = 0;
    dword_4726B8 = 0;
    sub_92080(&unk_4726AC);
    sub_92044(&unk_4726AC, "<osdata type=\"process groups\">\n", 31);
    v8 = opendir("/proc");
    if ( v8 )
    {
      ptr = (void *)sub_9836C(0x2000);
      v32 = ptr;
      v33 = (char *)ptr + 0x2000;
      while ( 1 )
      {
        v9 = readdir64(v8);
        if ( !v9 )
          break;
        if ( (unsigned int)*(unsigned __int8 *)(v9 + 19) - 48 <= 9 )
        {
          v10 = (const char *)(v9 + 19);
          if ( strlen((const char *)(v9 + 19)) <= 0x14 )
          {
            sscanf(v10, "%lld", &v30);
            v11 = getpgid(v30);
            *(_QWORD *)v34 = v11;
            if ( v11 >= 1LL )
            {
              v12 = v32;
              if ( v32 == v33 )
              {
                sub_49B58(&ptr, v32, &v30, v34);
              }
              else
              {
                if ( v32 )
                {
                  v13 = v30;
                  *((_QWORD *)v32 + 1) = v11;
                  *v12 = v13;
                }
                v32 = v12 + 2;
              }
            }
          }
        }
      }
      closedir(v8);
      v14 = (char *)ptr;
      v15 = (__int64 *)v32;
      if ( ptr != v32 )
      {
        v16 = (_BYTE *)v32 - (_BYTE *)ptr;
        sub_49574((int)ptr, (int *)v32, 2 * (31 - __clz(((_BYTE *)v32 - (_BYTE *)ptr) >> 4)));
        if ( v16 > 256 )
        {
          v23 = (__int64 *)(v14 + 256);
          sub_49F5C(v14, v14 + 256, 0);
          if ( v15 != (__int64 *)(v14 + 256) )
          {
            do
            {
              v24 = v23;
              v23 += 2;
              sub_49ED0(v24, 0);
            }
            while ( v15 != v23 );
          }
        }
        else
        {
          sub_49F5C(v14, v15, 0);
        }
        v15 = (__int64 *)ptr;
        v17 = (__int64 *)v32;
        if ( v32 != ptr )
        {
          do
          {
            v18 = v15[1];
            v26 = *v15;
            sub_46EA4(v34, 0x20u, v18);
            v19 = sub_46FB0(v26);
            v20 = "";
            if ( v19 )
              v20 = (char *)v19;
            v21 = v19;
            sub_920B0(
              &unk_4726AC,
              "<item><column name=\"pgid\">%lld</column><column name=\"leader command\">%s</column><column name=\"pid\">%"
              "lld</column><column name=\"command line\">%s</column></item>",
              v18,
              v34,
              v25,
              v26,
              v20);
            if ( v21 )
              free(v21);
            v15 += 2;
          }
          while ( v17 != v15 );
          v15 = (__int64 *)ptr;
        }
      }
      if ( v15 )
        sub_339E64(v15);
    }
    sub_92044(&unk_4726AC, "</osdata>\n", 11);
    dword_4726B8 = sub_92094(&unk_4726AC);
    v7 = strlen((const char *)dword_4726B8);
    dword_46B090 = v7;
    dword_46B094 = 0;
  }
  else
  {
    HIWORD(v4) = (unsigned int)&unk_47260C >> 16;
  }
  if ( a2 >= v7 )
  {
    sub_92050(&unk_4726AC);
    v4[43] = 0;
    *(_QWORD *)&dword_46B090 = 0;
    return 0;
  }
  else
  {
    v28 = v7 - a2;
    if ( v7 - a2 > a3 )
      v28 = a3;
    memcpy(a1, (const void *)(v4[43] + a2), v28);
    return v28;
  }
}
