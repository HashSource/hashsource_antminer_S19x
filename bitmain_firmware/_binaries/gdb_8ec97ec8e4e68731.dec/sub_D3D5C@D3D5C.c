int __fastcall sub_D3D5C(_DWORD *a1)
{
  int v1; // r9
  int result; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  int v6; // r4
  int v7; // r9
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  _DWORD v14[3]; // [sp+8h] [bp-Ch] BYREF

  v1 = dword_4788C0;
  if ( dword_4788C0 )
    return 0;
  dword_4788C0 = 1;
  sub_243C78(v14);
  v4 = (_DWORD *)*a1;
  dword_478358 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)v4[4];
      v6 = v4[3];
      if ( v5 )
      {
        v8 = v5[1];
        v4[3] = 0;
        v4[4] = 0;
        v5[1] = v8;
        if ( !v8 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
          v9 = v5[2];
          v5[2] = v9 - 1;
          if ( v9 == 1 )
            (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
        }
      }
      else
      {
        v4[3] = 0;
      }
      if ( v6 )
      {
        if ( strcmp("silent", *(const char **)(v6 + 4)) )
          break;
        v6 = *(_DWORD *)v6;
        if ( v6 )
          break;
      }
      if ( dword_478358 )
        goto LABEL_13;
LABEL_19:
      if ( v5 )
      {
        v10 = v5[1];
        v5[1] = v10 - 1;
        if ( v10 == 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
          v11 = v5[2];
          v5[2] = v11 - 1;
          if ( v11 == 1 )
            (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
        }
      }
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        goto LABEL_15;
    }
    while ( 1 )
    {
      sub_58FE8(v6);
      if ( dword_478358 )
        break;
      v6 = *(_DWORD *)v6;
      if ( !v6 )
        goto LABEL_19;
    }
LABEL_13:
    v7 = *(_DWORD *)(dword_487668 + 36);
    if ( v5 )
    {
      v12 = v5[1];
      v5[1] = v12 - 1;
      if ( v12 == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
        v13 = v5[2];
        v5[2] = v13 - 1;
        if ( v13 == 1 )
          (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      }
    }
    v1 = v7 == 0;
  }
LABEL_15:
  result = v1;
  if ( v14[0] )
    *(_DWORD *)v14[0] = v14[1];
  dword_4788C0 = 0;
  return result;
}
