int __fastcall sub_2CD70(int a1, int a2, int a3)
{
  void *v6; // r0
  int v7; // r8
  const char *v8; // r0
  unsigned int v9; // r4
  const char *v10; // r0
  int v12; // r4
  int *v13; // r0
  unsigned int v14; // r1
  unsigned __int64 v15; // r6
  size_t v16; // r2
  int v17; // r0
  int v18; // r3
  int v19; // r5
  unsigned int v20; // r6
  int v21; // r1
  int v22; // r3
  _DWORD *v23; // r2
  _DWORD v24[3]; // [sp+0h] [bp-3Ch] BYREF
  int v25; // [sp+Ch] [bp-30h] BYREF
  int v26; // [sp+10h] [bp-2Ch]
  int v27; // [sp+14h] [bp-28h]
  _DWORD s[8]; // [sp+18h] [bp-24h] BYREF

  v24[0] = 0;
  v24[1] = 0;
  v6 = memset(s, 0, sizeof(s));
  v26 = a2;
  v27 = a3;
  v25 = a1;
  if ( (unsigned int)dword_487D4C > 1 )
  {
    v7 = *(_DWORD *)sub_242FC8(v6);
    v8 = (const char *)sub_25AC8C(a1, v27);
    sub_2594B0(v7, "Process record: arm_process_record addr = %s\n", v8);
  }
  if ( sub_20044(&v25, 2u) )
  {
    if ( dword_487D4C )
    {
      v10 = (const char *)sub_25AC8C(v25, v27);
      sub_259858("Process record: error reading memory at addr %s len = %d.\n", v10, 2);
      return -1;
    }
    return -1;
  }
  if ( *(_DWORD *)(sub_163E78(v25) + 32) )
    v12 = 0x1000000;
  else
    v12 = 32;
  v13 = (int *)((int (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v26, 25, v24);
  v14 = v24[0];
  if ( (v12 & v24[0]) != 0 )
  {
    v15 = (LOWORD(s[0]) >> 11) - 29LL;
    if ( v15 <= 2 )
    {
      v13 = &v25;
      v16 = 4;
      v14 = 3;
    }
    else
    {
      v16 = 2;
    }
    if ( v15 > 2 )
    {
      v13 = &v25;
      v14 = v16;
    }
    v9 = sub_200B4(v13, v14, v16);
  }
  else
  {
    v9 = sub_200B4(&v25, 1u, 4u);
  }
  if ( !v9 )
  {
    v17 = sub_1DC2E4(v26, 15);
    v18 = s[6];
    if ( s[6] )
    {
      v19 = s[5];
      if ( s[5] )
      {
        v19 = 0;
        v20 = 0;
        while ( 1 )
        {
          v21 = *(_DWORD *)(v18 + 4 * v20++);
          v17 = sub_1DC2E4(v26, v21);
          if ( v17 )
            v19 = -1;
          if ( s[5] <= v20 )
            break;
          v18 = s[6];
        }
      }
    }
    else
    {
      v19 = 0;
    }
    v22 = s[7];
    if ( s[7] && s[4] )
    {
      while ( 1 )
      {
        v23 = (_DWORD *)(v22 + 8 * v9++);
        v17 = sub_1DC3D4(v23[1], *v23);
        if ( v17 )
          v19 = -1;
        if ( s[4] <= v9 )
          break;
        v22 = s[7];
      }
    }
    if ( ((int (__fastcall *)(int))loc_1DC504)(v17) )
      v9 = -1;
    else
      v9 = v19;
  }
  if ( s[6] )
    free((void *)s[6]);
  if ( !s[7] )
    return v9;
  free((void *)s[7]);
  return v9;
}
