DIR *__fastcall sub_4A77C(int a1)
{
  int v2; // r0
  DIR *result; // r0
  DIR *v4; // r4
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  const char *v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r8
  int v16; // r7
  char v17[80]; // [sp+8h] [bp-1050h] BYREF
  char s[4096]; // [sp+58h] [bp-1000h] BYREF

  v2 = ps_getpid_0(a1 + 4);
  snprintf(s, 0x1000u, "/proc/%ld/fd", v2);
  result = opendir(s);
  v4 = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v6 = readdir64(v4);
      v7 = v6 == 0;
      v8 = (const char *)(v6 + 19);
      if ( v7 )
        break;
      v5 = strtol(v8, 0, 10);
      if ( v5 > *(_DWORD *)(a1 + 44) )
        *(_DWORD *)(a1 + 44) = v5;
    }
    v9 = sub_93050(*(_DWORD *)(a1 + 40), 8 * (*(_DWORD *)(a1 + 44) + 1));
    v10 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = v9;
    if ( v10 >= 0 )
    {
      v11 = v9 + 8 * v10;
      v12 = v9 - 8;
      do
      {
        *(_QWORD *)(v12 + 8) = -1;
        v12 += 8;
      }
      while ( v12 != v11 );
    }
    rewinddir(v4);
    while ( 1 )
    {
      v13 = readdir64(v4);
      if ( !v13 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v13 + 19) - 48 <= 9 )
      {
        v14 = strtol((const char *)(v13 + 19), 0, 10);
        v15 = *(_DWORD *)(a1 + 40);
        v16 = 8 * v14;
        snprintf(v17, 0x50u, "(long) lseek (%d, %ld, %d)", v14, 0, 1);
        *(_QWORD *)(v15 + v16) = sub_14CC00(v17);
      }
    }
    return (DIR *)closedir(v4);
  }
  return result;
}
