void sub_D3928()
{
  _DWORD *v0; // r4
  int v1; // r0
  __int16 *v2; // r2
  int v3; // r5
  int v4; // r3
  int v5; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r3
  _DWORD *v9; // r7
  int v10; // r0
  int *v11; // r5
  int *v12; // r9
  int v13; // t1
  int v14; // r0
  int v15; // r10
  void *v16; // r2
  int v17; // r1
  void *v18; // r0
  __int16 *v19; // r0
  char *v20; // r1
  void *v21; // r0
  char v22[36]; // [sp-20h] [bp-74h] BYREF
  const char *v23; // [sp+4h] [bp-50h]
  const char *v24; // [sp+8h] [bp-4Ch]
  int v25; // [sp+Ch] [bp-48h]
  int v26; // [sp+14h] [bp-40h] BYREF
  void *ptr; // [sp+18h] [bp-3Ch] BYREF
  char *v28; // [sp+1Ch] [bp-38h]

  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( v0 )
  {
    v24 = "unwind";
    v23 = "libgcc";
    do
    {
      while ( 1 )
      {
        v9 = (_DWORD *)sub_CB2B4((int)v0);
        if ( !v9[18] )
        {
          sub_1CA870(&ptr, v0, v23, v24);
          if ( ptr != v28 && !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)ptr + 16))(*(_DWORD *)ptr) )
            v28 = (char *)ptr;
          sub_DF848(v9 + 19, &ptr);
          v18 = ptr;
          v9[18] = 1;
          if ( v18 )
            sub_339E64(v18);
        }
        if ( v9[19] != v9[20] )
          break;
        if ( (_UNKNOWN *)v9[16] != &unk_478868 )
        {
          v1 = sub_1B7250(v0);
          v2 = (__int16 *)v9[16];
          v3 = v1;
          if ( v2 )
            goto LABEL_5;
          sub_1B141C((int)&ptr, "_Unwind_DebugHook");
          if ( ptr )
          {
            v19 = (__int16 *)ptr;
            v20 = v28;
            v9[16] = ptr;
            v9[17] = v20;
            v2 = v19;
LABEL_5:
            v4 = v2[11];
            if ( v4 == -1 )
            {
              sub_94700((int)"breakpoint.c", 3502, "Section index is uninitialized");
              v21 = ptr;
              if ( ptr )
                sub_339E64(ptr);
              sub_338FFC(v21);
            }
            v5 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(
                   v3,
                   *((_DWORD *)v2 + 2) + *(_DWORD *)(*(_DWORD *)(v9[17] + 144) + 4 * v4),
                   &dword_4899A0);
            v6 = sub_D03A0(v3, v5, 25, (int)&unk_47849C);
            sub_19CC78(&ptr);
            v28 = v22;
            strcpy(v22, "_Unwind_DebugHook");
            sub_19D0B8(&v26, &ptr);
            v7 = *(_DWORD *)(v6 + 76);
            v8 = v26;
            v26 = 0;
            *(_DWORD *)(v6 + 76) = v8;
            if ( v7 )
            {
              ((void (__fastcall *)(int))loc_19D154)(v6 + 76);
              if ( v26 )
                ((void (__fastcall *)(int *))loc_19D154)(&v26);
            }
            *(_DWORD *)(v6 + 16) = 0;
            goto LABEL_10;
          }
          v9[16] = &unk_478868;
        }
LABEL_10:
        v0 = (_DWORD *)*v0;
        if ( !v0 )
          return;
      }
      v10 = sub_1B7250(v0);
      v11 = (int *)v9[19];
      v12 = (int *)v9[20];
      v25 = v10;
      if ( v12 == v11 )
        goto LABEL_10;
      do
      {
        v13 = *v11++;
        v14 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 8))(v13, v0);
        v15 = sub_D03A0(v25, v14, 25, (int)&unk_47849C);
        sub_19CE30(&ptr, "-probe-stap libgcc:unwind");
        v16 = ptr;
        ptr = 0;
        v17 = *(_DWORD *)(v15 + 76);
        *(_DWORD *)(v15 + 76) = v16;
        if ( v17 )
        {
          ((void (__fastcall *)(int))loc_19D154)(v15 + 76);
          if ( ptr )
            ((void (__fastcall *)(void **))loc_19D154)(&ptr);
        }
        *(_DWORD *)(v15 + 16) = 0;
      }
      while ( v12 != v11 );
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
}
