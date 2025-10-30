bool __fastcall sub_2A5930(_DWORD *a1, int a2, const char ***a3, int a4, int a5)
{
  int v6; // r12
  int v7; // r9
  int v8; // r6
  int v9; // r7
  const char **v11; // r2
  int v12; // r9
  const char ***v13; // r8
  unsigned __int64 v14; // r6
  const char **v15; // r5
  const char *v16; // r1
  __int64 v17; // kr00_8
  int v18; // r10
  bool v19; // zf
  const char ***v20; // r6
  const char **v21; // r3
  const char *v22; // r8
  size_t v23; // r7
  int v24; // [sp+0h] [bp-9Ch]
  int v25; // [sp+4h] [bp-98h]
  int v29; // [sp+18h] [bp-84h]
  char v30[4]; // [sp+24h] [bp-78h] BYREF
  char v31[4]; // [sp+28h] [bp-74h] BYREF
  char v32[4]; // [sp+2Ch] [bp-70h] BYREF
  _WORD v33[40]; // [sp+30h] [bp-6Ch] BYREF
  int v34; // [sp+80h] [bp-1Ch]

  v6 = a1[10];
  v7 = 8 * a4;
  v8 = a1[40];
  v29 = a5 + (a5 & 1);
  v9 = 8 * a4 + 8 + v29;
  *(_DWORD *)(v8 + 32) = 0;
  if ( (v6 & 0x40000) == 0 )
  {
    if ( !_xstat64(3, *a1, v33) )
      *(_DWORD *)(a1[40] + 32) = v34 + 60;
    getuid();
    getgid();
    v8 = a1[40];
  }
  qmemcpy(v33, "__.SYMDE                                                    ", 60);
  *(_QWORD *)(v8 + 40) = 24;
  sub_2A3308((char *)&v33[8], 0xCu, "%ld");
  sub_2A3308((char *)&v33[14], 6u, "%ld");
  sub_2A3308((char *)&v33[17], 6u, "%ld");
  if ( !sub_2A3370((char *)&v33[24], 0xAu, v9) )
    return 0;
  v33[29] = 2656;
  if ( sub_2A8884(v33, 60, a1) != 60 )
    return 0;
  (*(void (__fastcall **)(int, char *))(a1[1] + 84))(v7, v30);
  if ( sub_2A8884(v30, 4, a1) != 4 )
    return 0;
  v11 = (const char **)a1[37];
  if ( a4 )
  {
    v12 = 0;
    v13 = a3;
    v14 = (unsigned int)(a2 + 68 + v9);
    do
    {
      v15 = v13[2];
      if ( v15 == v11 )
      {
        v18 = v14;
      }
      else
      {
        do
        {
          v16 = v11[34];
          v11 = (const char **)v11[36];
          v17 = v14 + (unsigned int)(*((_DWORD *)v16 + 2) + *((_DWORD *)v16 + 1) + 60) + 1;
          v14 = v17 & 0xFFFFFFFFFFFFFFFELL;
        }
        while ( v15 != v11 );
        v24 = v17 & 0xFFFFFFFE;
        v25 = 0;
        v18 = v17 & 0xFFFFFFFE;
        v19 = HIDWORD(v17) == 0;
        if ( !HIDWORD(v17) )
          v19 = 1;
        if ( !v19 )
        {
          ((void (__fastcall *)(int))loc_2A6C48)(18);
          return 0;
        }
      }
      (*(void (__fastcall **)(const char **, char *))(a1[1] + 84))(v13[4], v31);
      (*(void (__fastcall **)(int, char *))(a1[1] + 84))(v18, v32);
      if ( sub_2A8884(v31, 8, a1) != 8 )
        return 0;
      ++v12;
      v13 += 6;
      v11 = v15;
    }
    while ( a4 != v12 );
    (*(void (__fastcall **)(int, char *, const char **, _DWORD, int, int))(a1[1] + 84))(
      v29,
      v30,
      v15,
      *(_DWORD *)(a1[1] + 84),
      v24,
      v25);
    if ( sub_2A8884(v30, 4, a1) == 4 )
    {
      v20 = a3;
      while ( 1 )
      {
        v21 = *v20;
        v20 += 6;
        v22 = *v21;
        v23 = strlen(*v21) + 1;
        if ( sub_2A8884(v22, v23, a1) != v23 )
          break;
        if ( &a3[6 * a4] == v20 )
          return (a5 & 1) == 0 || sub_2A8884("", 1, a1) == 1;
      }
    }
    return 0;
  }
  (*(void (__fastcall **)(int, char *, const char **))(a1[1] + 84))(v29, v30, v11);
  if ( sub_2A8884(v30, 4, a1) != 4 )
    return 0;
  return (a5 & 1) == 0 || sub_2A8884("", 1, a1) == 1;
}
