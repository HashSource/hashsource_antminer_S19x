void __fastcall sub_122518(int *a1)
{
  _DWORD *v1; // r6
  char *v2; // r9
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r4
  int v6; // r10
  int v7; // t1
  const char *v8; // r0
  char *v9; // r11
  int v10; // r5
  size_t v11; // r0
  unsigned int v12; // r1
  size_t v13; // r6
  int v14; // r4
  void *v15; // r0
  int v16; // r2
  char *v17; // r6
  char *v18; // r3
  int v19; // r0
  bool v20; // zf
  int v21; // r3
  int v22; // r7
  int v23; // r4
  size_t v24; // r0
  int v25; // r0
  const char *v26; // r2

  v1 = (_DWORD *)dword_4788F4;
  if ( !dword_4788F4 )
    return;
  v2 = 0;
  do
  {
    v3 = v1[1];
    if ( v3 > 0 )
    {
      v4 = v1 + 1;
      v5 = 0;
      while ( 1 )
      {
        v7 = v4[1];
        ++v4;
        v6 = v7;
        if ( (*(_BYTE *)(v7 + 20) & 0x1F) != 6
          || *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v6 + 32) >> 3)) != 10 )
        {
          goto LABEL_5;
        }
        v8 = (const char *)((int (__fastcall *)(int))loc_17C5E0)(v6);
        v9 = (char *)v8;
        if ( v8 )
        {
          if ( v2 )
          {
            if ( strcmp(v2, v8) && dword_47AC88 > 0 )
            {
              if ( sub_2209DC(v6) )
              {
                v25 = sub_2209DC(v6);
                v26 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v25);
              }
              else
              {
                v26 = (const char *)sub_1B87A8(*a1);
              }
              sub_F43B4(&off_46D334, "Symtab %s has objects from two different Go packages: %s and %s", v26, v9, v2);
            }
            free(v9);
            goto LABEL_13;
          }
          v3 = v1[1];
          v2 = (char *)v8;
LABEL_5:
          if ( v3 <= ++v5 )
            break;
        }
        else
        {
LABEL_13:
          v3 = v1[1];
          if ( v3 <= ++v5 )
            break;
        }
      }
    }
    v1 = (_DWORD *)*v1;
  }
  while ( v1 );
  if ( v2 )
  {
    v10 = *a1;
    v11 = strlen(v2);
    v12 = v11 + 1;
    v13 = v11;
    v14 = *(_DWORD *)(*a1 + 40);
    v15 = *(void **)(v14 + 12);
    if ( *(_DWORD *)(v14 + 16) - (int)v15 < v12 )
    {
      obstack_newchunk(*(struct obstack **)(v10 + 40), v12);
      v15 = *(void **)(v14 + 12);
    }
    memcpy(v15, v2, v13);
    v16 = *(_DWORD *)(v14 + 12);
    *(_DWORD *)(v14 + 12) = v16 + v13 + 1;
    *(_BYTE *)(v16 + v13) = 0;
    v17 = *(char **)(v14 + 8);
    v18 = *(char **)(v14 + 12);
    v19 = *(_DWORD *)(v14 + 16);
    v20 = v17 == v18;
    if ( v17 == v18 )
      LOBYTE(v16) = *(_BYTE *)(v14 + 40);
    v21 = (unsigned int)&v18[*(_DWORD *)(v14 + 24)] & ~*(_DWORD *)(v14 + 24);
    *(_DWORD *)(v14 + 12) = v21;
    if ( v20 )
      *(_BYTE *)(v14 + 40) = v16 | 2;
    if ( v21 - *(_DWORD *)(v14 + 4) > (unsigned int)(v19 - *(_DWORD *)(v14 + 4)) )
    {
      v21 = v19;
      *(_DWORD *)(v14 + 12) = v19;
    }
    *(_DWORD *)(v14 + 8) = v21;
    v22 = ((int (__fastcall *)(int, int, _DWORD, char *))loc_1734E0)(v10, 26, 0, v17);
    *(_DWORD *)(*(_DWORD *)(v22 + 24) + 12) = *(_DWORD *)(*(_DWORD *)(v22 + 24) + 8);
    v23 = sub_220854(v10);
    ((void (__fastcall *)(int, int, int))loc_21AEC4)(v23, 6, v10 + 48);
    v24 = strlen(v17);
    sub_21AF48(v23, v17, v24, 0, v10);
    *(_DWORD *)(v23 + 24) = v22;
    *(_BYTE *)(v23 + 32) = 66;
    sub_E5AA8((_DWORD *)v23, (_DWORD **)&dword_4788F4);
    free(v2);
  }
}
