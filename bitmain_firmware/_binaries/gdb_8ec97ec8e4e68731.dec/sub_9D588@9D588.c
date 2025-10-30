bool __fastcall sub_9D588(int a1, int a2)
{
  int v2; // r3
  const char *v3; // r4
  const char *v6; // r6
  int v7; // r4
  int v8; // r5
  size_t v9; // r7
  const char *v10; // r5
  int v11; // r0
  int v12; // r1
  bool v13; // zf

  v2 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a1 + 32) >> 3));
  if ( v2 != *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a2 + 32) >> 3)) )
    return 0;
  if ( v2 == 1 )
  {
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) )
    {
      v11 = *(_DWORD *)(a1 + 24);
      v12 = *(_DWORD *)(a2 + 24);
      if ( v11 == v12 )
        return 1;
      v13 = v12 == 0;
      if ( v12 )
        v13 = v11 == 0;
      if ( !v13 )
        return sub_9D510(v11, v12) != 0;
    }
    return 0;
  }
  if ( !v2 )
    return 1;
  if ( v2 != 8 )
    return 0;
  v6 = *(const char **)a1;
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = strlen(*(const char **)a1);
  if ( **(char **)(v7 + 24) != **(char **)(v8 + 24) )
    return 0;
  if ( v7 != v8 )
  {
    v3 = sub_9D510(v7, v8);
    if ( !v3 )
    {
      v10 = *(const char **)a2;
      if ( v9 < strlen(*(const char **)a2) && !strncmp(v6, v10, v9) )
        return strncmp(&v10[v9], "___XV", 5u) == 0;
      return (bool)v3;
    }
  }
  return 1;
}
