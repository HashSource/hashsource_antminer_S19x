int sub_D05D8()
{
  _DWORD *v0; // r10
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r2
  int v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r5
  int v12; // r3
  bool v13; // zf
  int v14; // r0
  char *v15; // r1
  __int64 v17; // r0
  int v18; // r0
  char v19[24]; // [sp-18h] [bp-64h] BYREF
  int v20; // [sp+0h] [bp-4Ch]
  int *v21; // [sp+4h] [bp-48h]
  int v22; // [sp+Ch] [bp-40h] BYREF
  int v23; // [sp+10h] [bp-3Ch] BYREF
  char *v24; // [sp+14h] [bp-38h]

  v0 = (_DWORD *)dword_487D28;
  v21 = &dword_487D2C;
  v20 = dword_487D2C;
  if ( dword_487D28 )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(_DWORD *))loc_1CD290)(v0);
      v1 = *(_DWORD **)(*v21 + 36);
      if ( v1 )
        break;
LABEL_18:
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        return ((int (__fastcall *)(int))loc_1CD290)(v20);
    }
    while ( 1 )
    {
      v9 = sub_CB2B4((int)v1);
      v10 = *(_DWORD *)(v9 + 56);
      v11 = v9;
      if ( (_UNKNOWN *)v10 != &unk_478868 )
      {
        if ( v10 )
          goto LABEL_4;
        sub_1B141C((int)&v23, "std::terminate()");
        if ( v23 )
        {
          v12 = *(_BYTE *)(v23 + 32) & 0xF;
          v13 = v12 == 8;
          if ( v12 != 8 )
            v13 = v12 == 1;
          if ( v13 )
          {
            v14 = v23;
            v15 = v24;
            *(_DWORD *)(v11 + 56) = v23;
            *(_DWORD *)(v11 + 60) = v15;
            v10 = v14;
LABEL_4:
            v2 = *(__int16 *)(v10 + 22);
            v3 = *(_DWORD *)(v10 + 8);
            if ( v2 == -1 )
            {
              v17 = sub_94700((int)"breakpoint.c", 3410, "Section index is uninitialized");
              v18 = ((int (__fastcall *)(int, _DWORD))loc_1CD290)(v20, HIDWORD(v17));
              sub_338FFC(v18);
            }
            v4 = v3 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 60) + 144) + 4 * v2);
            v5 = sub_1B7250(v1);
            v6 = sub_D03A0(v5, v4, 24, (int)&unk_47849C);
            sub_19CC78(&v23);
            v24 = v19;
            strcpy(v19, "std::terminate()");
            sub_19D0B8(&v22, &v23);
            v7 = *(_DWORD *)(v6 + 76);
            v8 = v22;
            v22 = 0;
            *(_DWORD *)(v6 + 76) = v8;
            if ( v7 )
            {
              ((void (__fastcall *)(int))loc_19D154)(v6 + 76);
              if ( v22 )
                ((void (__fastcall *)(int *))loc_19D154)(&v22);
            }
            *(_DWORD *)(v6 + 16) = 0;
            goto LABEL_9;
          }
        }
        *(_DWORD *)(v11 + 56) = &unk_478868;
      }
LABEL_9:
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        goto LABEL_18;
    }
  }
  return ((int (__fastcall *)(int))loc_1CD290)(v20);
}
