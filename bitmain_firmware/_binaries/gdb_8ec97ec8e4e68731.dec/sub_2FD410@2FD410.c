int __fastcall sub_2FD410(int a1, int a2, int (__fastcall *a3)(int, int, char *, _DWORD, int *))
{
  size_t v3; // r0
  int v6; // r3
  _DWORD *v7; // r5
  char *v8; // r4
  int v9; // r3
  int v10; // r1
  __int64 v11; // r8
  char *v12; // r2
  int v13; // r10
  char *v14; // r6
  char *v15; // r0
  char *v16; // r10
  const char *v17; // r8
  char *v18; // r0
  char *v19; // r4
  _DWORD *v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r2
  __int64 v24; // [sp+8h] [bp-34h]
  int v25; // [sp+8h] [bp-34h]
  _DWORD *v26; // [sp+14h] [bp-28h]
  int v28; // [sp+1Ch] [bp-20h]
  int v29; // [sp+20h] [bp-1Ch]
  char *ptr; // [sp+28h] [bp-14h]
  int v32; // [sp+34h] [bp-8h] BYREF

  if ( *(char *)(a1 + 43) < 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 20);
    if ( !v3 )
      return 1;
    ptr = (char *)sub_2AB4EC(v3);
    if ( !ptr )
      return 0;
    while ( 1 )
    {
      v32 = 0;
      v6 = *(_DWORD *)(a1 + 160);
      v7 = *(_DWORD **)(v6 + 16);
      v26 = &v7[4 * *(_DWORD *)(v6 + 20)];
      if ( v7 >= v26 )
        goto LABEL_36;
      v29 = 0;
      v28 = 0;
      v8 = ptr - 1;
      v24 = -1;
      do
      {
        v14 = v8 + 1;
        if ( v8[1] )
          goto LABEL_15;
        if ( v32 && *((_QWORD *)v7 + 1) == v24 )
          goto LABEL_25;
        v15 = sub_2FC920(*(_DWORD **)(a2 + 28), (const char *)*v7, 0, 0, 1);
        v16 = v15;
        if ( v15 )
        {
          v9 = (unsigned __int8)v15[12];
          v10 = v9 & 0xFB;
          if ( v10 != 1 )
            goto LABEL_24;
        }
        else
        {
          if ( !*(_DWORD *)(a2 + 100) )
            goto LABEL_15;
          v17 = (const char *)*v7;
          if ( strncmp((const char *)*v7, "__imp_", 6u) )
            goto LABEL_15;
          v18 = sub_2FC920(*(_DWORD **)(a2 + 28), v17 + 6, 0, 0, 1);
          v16 = v18;
          if ( !v18 )
            goto LABEL_15;
          v9 = (unsigned __int8)v18[12];
          v10 = v9 & 0xFB;
          if ( v10 != 1 )
          {
LABEL_24:
            if ( v9 == 2 )
              goto LABEL_15;
LABEL_25:
            *v14 = 1;
            goto LABEL_15;
          }
        }
        v11 = *((_QWORD *)v7 + 1);
        if ( v11 != v24
          && (v25 = v10, v22 = sub_2A399C(a1, v10, v11), (v28 = v22) == 0 || !sub_2AA86C(v22, v25, v23, v22))
          || (v12 = v16, v13 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 32), !a3(v28, a2, v12, *v7, &v32)) )
        {
          free(ptr);
          return 0;
        }
        if ( v32 )
        {
          v19 = v8 + 2;
          v20 = v7;
          do
          {
            *--v19 = 1;
            v20 -= 4;
          }
          while ( ptr != v19 && v11 == *((_QWORD *)v20 + 1) );
          v21 = v29;
          v24 = v11;
          if ( v13 != *(_DWORD *)(*(_DWORD *)(a2 + 28) + 32) )
            v21 = 1;
          v29 = v21;
        }
        else
        {
          v24 = v11;
        }
LABEL_15:
        v7 += 4;
        v8 = v14;
      }
      while ( v26 > v7 );
      if ( !v29 )
      {
LABEL_36:
        free(ptr);
        return 1;
      }
    }
  }
  if ( !sub_2A3BC8(a1) )
    return 1;
  ((void (__fastcall *)(int))loc_2A6C48)(8);
  return 0;
}
