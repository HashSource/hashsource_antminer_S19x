_DWORD *__fastcall sub_FD740(_DWORD *a1, char *s, char *a3, _DWORD *a4, int a5)
{
  char *v7; // r4
  int v9; // r9
  int v10; // r7
  int v11; // r1
  int v13; // r1
  size_t v14; // r7
  size_t v15; // r9
  char *v16; // r0
  char *v17; // r1
  int v18; // r3
  int v19; // r12
  const char *v20; // r1
  int dest; // [sp+10h] [bp-54h] BYREF
  int v22; // [sp+14h] [bp-50h]
  _DWORD v23[2]; // [sp+18h] [bp-4Ch] BYREF
  int v24; // [sp+20h] [bp-44h] BYREF
  int v25; // [sp+24h] [bp-40h]
  void *ptr; // [sp+28h] [bp-3Ch] BYREF
  _BYTE v27[20]; // [sp+30h] [bp-34h] BYREF

  v7 = a3;
  if ( *s )
  {
    v14 = strlen(s);
    v15 = strlen(v7);
    v16 = (char *)memcpy(&dest, s, v14);
    v17 = v7;
    v7 = v16;
    *(_WORD *)&v16[v14] = *(_WORD *)"::";
    memcpy(&v16[v14 + 2], v17, v15 + 1);
    v9 = ((int (__fastcall *)(char *))loc_100310)(v7);
    if ( v9 )
      goto LABEL_3;
LABEL_12:
    sub_FD57C((int)a1, v9, v7, a4, a5);
    return a1;
  }
  v9 = ((int (__fastcall *)(char *))loc_100310)(a3);
  if ( !v9 )
    goto LABEL_12;
LABEL_3:
  v10 = (unsigned __int8)*s;
  if ( *s )
    v10 = sub_338BD4(s, "(anonymous namespace)") != 0;
  sub_FCB6C(&dest, (int)v7, (int)a4, a5, v10);
  if ( dest )
  {
    v11 = v22;
    *a1 = dest;
    a1[1] = v11;
    return a1;
  }
  else
  {
    if ( v9 + 2 <= strlen(v7) && v7[v9 + 1] == 58 )
    {
      ptr = v27;
      sub_FCCA4(&ptr, v7, (int)&v7[v9]);
      sub_21CFB4(v23, ptr, a4, 1);
      v18 = v23[0];
      if ( v23[0] || (sub_21D720(v23, ptr, a4, 1), (v18 = v23[0]) != 0) )
      {
        v19 = *(_DWORD *)(v18 + 24);
        v20 = &v7[v9 + 2];
        if ( (**(char **)(v19 + 24) & 0xFFFFFFF7) == 7 )
          sub_21D6B0(&v24, v20, *(_DWORD *)(v18 + 8), 1, 0);
        else
          sub_FCD54(&v24, (int *)v19, v20, (int)v7, (int)a4, a5, 0, v10);
      }
      else
      {
        v24 = 0;
        v25 = 0;
      }
      if ( ptr != v27 )
        sub_339E64(ptr);
    }
    else
    {
      v24 = 0;
      v25 = 0;
    }
    v13 = v25;
    dest = v24;
    v22 = v25;
    *a1 = v24;
    a1[1] = v13;
    return a1;
  }
}
