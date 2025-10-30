int __fastcall sub_2DD644(int a1, int a2)
{
  unsigned __int8 *v4; // r7
  char *v5; // r0
  char *v6; // r5
  size_t v7; // r8
  char *v8; // r0
  unsigned __int8 *v9; // r1
  int v10; // r0
  __int64 v11; // r2
  int v12; // r2
  int v13; // r3

  if ( *(_DWORD *)(a1 + 32) == -1 )
    return 1;
  if ( !(*(int (**)(void))(*(_DWORD *)(a2 + 4) + 356))() )
    return 1;
  v4 = *(unsigned __int8 **)(a1 + 4);
  if ( ((*(unsigned __int8 *)(a1 + 52) >> 1) & 3u) <= 1 )
  {
    v6 = 0;
LABEL_7:
    v10 = sub_2CD724(v4);
    v11 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v11 + 4 * *(_DWORD *)(a2 + 8)) = v10;
    *(_DWORD *)(HIDWORD(v11) + 4 * *(_DWORD *)(a1 + 32)) = v10;
    v12 = *(_DWORD *)(a2 + 40);
    ++*(_DWORD *)(a2 + 8);
    v13 = *(_DWORD *)(a1 + 32);
    if ( v12 < 0 || v12 > v13 )
      *(_DWORD *)(a2 + 40) = v13;
    if ( v6 )
      free(v6);
    return 1;
  }
  v5 = strchr(*(const char **)(a1 + 4), 64);
  v6 = v5;
  if ( !v5 )
    goto LABEL_7;
  v7 = v5 - (char *)v4;
  v8 = (char *)sub_2AB368(v5 - (char *)v4 + 1);
  v6 = v8;
  if ( v8 )
  {
    v9 = v4;
    v4 = (unsigned __int8 *)v8;
    memcpy(v8, v9, v7);
    v6[v7] = 0;
    goto LABEL_7;
  }
  *(_DWORD *)(a2 + 68) = 1;
  return 0;
}
