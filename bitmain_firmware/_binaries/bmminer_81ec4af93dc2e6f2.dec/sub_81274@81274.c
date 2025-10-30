int __fastcall sub_81274(int a1)
{
  int *v1; // r0
  int v3; // r3
  int v4; // r3
  int *v5; // r0
  const char *v6; // r4
  int *v7; // r0
  char v10[1028]; // [sp+18h] [bp-424h] BYREF
  int v11; // [sp+41Ch] [bp-20h]
  unsigned int v12; // [sp+420h] [bp-1Ch]
  int v13; // [sp+424h] [bp-18h]
  int v14; // [sp+428h] [bp-14h]
  int v15; // [sp+42Ch] [bp-10h]

  v13 = 0;
  v12 = 0;
  v15 = 0;
  v11 = ***(_DWORD ***)(a1 + 1088);
  while ( v15 < *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) )
  {
    v11 = *(_DWORD *)(**(_DWORD **)(a1 + 1088) + 4 * v15);
    if ( *(int *)(a1 + 1084) > 0 && v15 < *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) - *(_DWORD *)(a1 + 1084) )
    {
      v13 = unlink((const char *)(v11 + 4));
      if ( v13 )
      {
        v1 = _errno_location();
        sub_89984(2, "src/rotater.c", 246, "unlink[%s] fail, errno[%d]", (const char *)(v11 + 4), *v1);
        return -1;
      }
    }
    ++v15;
  }
  if ( *(int *)(*(_DWORD *)(a1 + 1088) + 4) <= 0 )
  {
    v14 = 0;
  }
  else
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) - 1 >= *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) )
      v3 = 0;
    else
      v3 = *(_DWORD *)(**(_DWORD **)(a1 + 1088) + 4 * (*(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) + 0x3FFFFFFF));
    v11 = v3;
    if ( !v3 )
    {
      sub_89984(2, "src/rotater.c", 256, "zc_arraylist_get fail");
      return -1;
    }
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) - 1;
    if ( *(_DWORD *)v11 >= v4 )
      v4 = *(_DWORD *)v11;
    v14 = v4 + 1;
  }
  memset(v10, 0, 0x401u);
  v12 = snprintf(
          v10,
          0x401u,
          "%.*s%0*d%s",
          *(_DWORD *)(a1 + 1068),
          (const char *)(a1 + 40),
          *(_DWORD *)(a1 + 1076),
          v14,
          (const char *)(a1 + 40 + *(_DWORD *)(a1 + 1072)));
  if ( v12 <= 0x400 )
  {
    if ( rename(*(const char **)(a1 + 32), v10) )
    {
      v6 = *(const char **)(a1 + 32);
      v7 = _errno_location();
      sub_89984(2, "src/rotater.c", 277, "rename[%s]->[%s] fail, errno[%d]", v6, v10, *v7);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = _errno_location();
    sub_89984(2, "src/rotater.c", 272, "nwirte[%d], overflow or errno[%d]", v12, *v5);
    return -1;
  }
}
