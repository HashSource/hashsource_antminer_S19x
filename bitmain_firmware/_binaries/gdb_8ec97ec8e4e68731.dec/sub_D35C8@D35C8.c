int sub_D35C8()
{
  _DWORD *v0; // r10
  int v1; // r9
  _DWORD *v2; // r5
  int v3; // r0
  int *v4; // r6
  int v5; // r9
  int *i; // r8
  int v7; // t1
  int v8; // r0
  int v9; // r5
  void *v10; // r3
  int v11; // r1
  int j; // r6
  __int16 *v14; // r3
  const char *v15; // r8
  int v16; // r12
  int v17; // r7
  size_t v18; // r0
  int v19; // r1
  int v20; // r3
  void *v21; // r0
  __int16 *v22; // r0
  void *v23; // r1
  __int64 v24; // r0
  int v25; // r0
  int v26; // [sp+0h] [bp-54h] BYREF
  int *v27; // [sp+4h] [bp-50h]
  _DWORD *v28; // [sp+8h] [bp-4Ch]
  char *v29; // [sp+Ch] [bp-48h]
  int v30; // [sp+14h] [bp-40h] BYREF
  void *ptr; // [sp+18h] [bp-3Ch] BYREF
  void *v32; // [sp+1Ch] [bp-38h]

  v27 = &dword_487D2C;
  v28 = (_DWORD *)dword_487D28;
  v26 = dword_487D2C;
  if ( dword_487D28 )
  {
    do
    {
      ((void (__fastcall *)(_DWORD *))loc_1CD290)(v28);
      v0 = *(_DWORD **)(*v27 + 36);
      if ( !v0 )
        goto LABEL_12;
      v29 = "longjmp";
      do
      {
        while ( 1 )
        {
          v1 = sub_1B7250(v0);
          v2 = (_DWORD *)sub_CB2B4((int)v0);
          if ( !v2[10] )
          {
            sub_1CA870(&ptr, v0, "libc", v29);
            if ( v32 != ptr && !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)ptr + 16))(*(_DWORD *)ptr) )
              v32 = ptr;
            sub_DF848(v2 + 11, &ptr);
            v21 = ptr;
            v2[10] = 1;
            if ( v21 )
              sub_339E64(v21);
          }
          if ( v2[11] != v2[12] )
          {
            v3 = sub_1B7250(v0);
            v4 = (int *)v2[11];
            v5 = v3;
            for ( i = (int *)v2[12]; i != v4; *(_DWORD *)(v9 + 16) = 0 )
            {
              v7 = *v4++;
              v8 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 8))(v7, v0);
              v9 = sub_D03A0(v5, v8, 23, (int)&unk_47849C);
              sub_19CE30(&ptr, "-probe-stap libc:longjmp");
              v10 = ptr;
              ptr = 0;
              v11 = *(_DWORD *)(v9 + 76);
              *(_DWORD *)(v9 + 76) = v10;
              if ( v11 )
              {
                ((void (__fastcall *)(int))loc_19D154)(v9 + 76);
                if ( ptr )
                  ((void (__fastcall *)(void **))loc_19D154)(&ptr);
              }
            }
            goto LABEL_11;
          }
          if ( ((int (__fastcall *)(int))loc_1683C4)(v1) )
            break;
LABEL_11:
          v0 = (_DWORD *)*v0;
          if ( !v0 )
            goto LABEL_12;
        }
        for ( j = 0; j != 4; ++j )
        {
          v14 = (__int16 *)v2[2];
          if ( v14 == (__int16 *)&unk_478868 )
            goto LABEL_23;
          v15 = (const char *)*(&off_37E720 + j);
          if ( !v14 )
          {
            sub_1B1FB8((int)&ptr, (char *)*(&off_37E720 + j));
            if ( !ptr )
            {
              v2[2] = &unk_478868;
              goto LABEL_23;
            }
            v22 = (__int16 *)ptr;
            v23 = v32;
            v2[2] = ptr;
            v2[3] = v23;
            v14 = v22;
          }
          v16 = v14[11];
          if ( v16 == -1 )
          {
            v24 = sub_94700((int)"breakpoint.c", 3356, "Section index is uninitialized");
            v25 = ((int (__fastcall *)(int, _DWORD))loc_1CD290)(v26, HIDWORD(v24));
            sub_338FFC(v25);
          }
          v17 = sub_D03A0(
                  v1,
                  *((_DWORD *)v14 + 2) + *(_DWORD *)(*(_DWORD *)(v2[3] + 144) + 4 * v16),
                  23,
                  (int)&unk_47849C);
          sub_19CC78(&ptr);
          v18 = strlen(v15);
          v32 = memcpy(&v26, v15, v18 + 1);
          sub_19D0B8(&v30, &ptr);
          v19 = *(_DWORD *)(v17 + 76);
          v20 = v30;
          v30 = 0;
          *(_DWORD *)(v17 + 76) = v20;
          if ( v19 )
          {
            ((void (__fastcall *)(int))loc_19D154)(v17 + 76);
            if ( v30 )
              ((void (__fastcall *)(int *))loc_19D154)(&v30);
          }
          *(_DWORD *)(v17 + 16) = 0;
LABEL_23:
          v2 += 2;
        }
        v0 = (_DWORD *)*v0;
      }
      while ( v0 );
LABEL_12:
      v28 = (_DWORD *)*v28;
    }
    while ( v28 );
  }
  return ((int (__fastcall *)(int))loc_1CD290)(v26);
}
