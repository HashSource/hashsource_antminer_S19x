int __fastcall sub_815D0(int a1)
{
  int v1; // r3
  const char *v3; // r4
  int *v4; // r0
  int *v5; // r0
  const char *v6; // r4
  int *v7; // r0
  int *v8; // r0
  const char *v9; // r4
  int *v10; // r0
  char v13[1028]; // [sp+1Ch] [bp-420h] BYREF
  int v14; // [sp+420h] [bp-1Ch]
  unsigned int v15; // [sp+424h] [bp-18h]
  int v16; // [sp+428h] [bp-14h]
  int i; // [sp+42Ch] [bp-10h]

  v16 = 0;
  for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) - 1; i >= 0; --i )
  {
    if ( i >= *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 4) )
      v1 = 0;
    else
      v1 = *(_DWORD *)(**(_DWORD **)(a1 + 1088) + 4 * i);
    v14 = v1;
    if ( !v1 )
    {
      sub_89984(2, "src/rotater.c", 297, "zc_arraylist_get fail");
      return -1;
    }
    if ( *(int *)(a1 + 1084) <= 0 || i < *(_DWORD *)(a1 + 1084) - 1 )
    {
      memset(v13, 0, 0x401u);
      v15 = snprintf(
              v13,
              0x401u,
              "%.*s%0*d%s",
              *(_DWORD *)(a1 + 1068),
              (const char *)(a1 + 40),
              *(_DWORD *)(a1 + 1076),
              i + 1,
              (const char *)(a1 + 40 + *(_DWORD *)(a1 + 1072)));
      if ( v15 > 0x400 )
      {
        v5 = _errno_location();
        sub_89984(2, "src/rotater.c", 318, "nwirte[%d], overflow or errno[%d]", v15, *v5);
        return -1;
      }
      if ( rename((const char *)(v14 + 4), v13) )
      {
        v6 = (const char *)(v14 + 4);
        v7 = _errno_location();
        sub_89984(2, "src/rotater.c", 323, "rename[%s]->[%s] fail, errno[%d]", v6, v13, *v7);
        return -1;
      }
    }
    else
    {
      v16 = unlink((const char *)(v14 + 4));
      if ( v16 )
      {
        v3 = (const char *)(v14 + 4);
        v4 = _errno_location();
        sub_89984(2, "src/rotater.c", 305, "unlink[%s] fail, errno[%d]", v3, *v4);
        return -1;
      }
    }
  }
  memset(v13, 0, 0x401u);
  v15 = snprintf(
          v13,
          0x401u,
          "%.*s%0*d%s",
          *(_DWORD *)(a1 + 1068),
          (const char *)(a1 + 40),
          *(_DWORD *)(a1 + 1076),
          0,
          (const char *)(a1 + 40 + *(_DWORD *)(a1 + 1072)));
  if ( v15 <= 0x400 )
  {
    if ( rename(*(const char **)(a1 + 32), v13) )
    {
      v9 = *(const char **)(a1 + 32);
      v10 = _errno_location();
      sub_89984(2, "src/rotater.c", 340, "rename[%s]->[%s] fail, errno[%d]", v9, v13, *v10);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v8 = _errno_location();
    sub_89984(2, "src/rotater.c", 335, "nwirte[%d], overflow or errno[%d]", v15, *v8);
    return -1;
  }
}
