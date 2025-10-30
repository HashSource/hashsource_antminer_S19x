int __fastcall sub_58C5C(int a1)
{
  int v2; // r4
  void *v4; // r0
  const char *v5; // r4
  size_t v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r5
  int v13; // r8
  int v14; // r9
  bool v15; // zf
  const char *v16; // r4
  size_t v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  _DWORD *v21; // r5
  int v22; // r7
  int v23; // r8
  void *v24; // r0
  int v25; // [sp+0h] [bp-3Ch] BYREF
  void *ptr; // [sp+4h] [bp-38h] BYREF
  void *v27[2]; // [sp+8h] [bp-34h] BYREF
  _BYTE v28[16]; // [sp+10h] [bp-2Ch] BYREF

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
      sub_58BE4(v27, *(char **)(a1 + 4));
      sub_2435B0(v27[0], 0);
      v4 = v27[0];
      v2 = *(_DWORD *)(a1 + 8);
      if ( v27[0] == v28 )
        return v2;
      goto LABEL_5;
    case 1:
      sub_57D7C((int)"loop_break");
      return *(_DWORD *)(a1 + 8);
    case 2:
      sub_57D7C((int)"loop_continue");
      return *(_DWORD *)(a1 + 8);
    case 3:
      v5 = *(const char **)(a1 + 4);
      v6 = strlen(v5);
      sub_93170(&v25, v6 + 7, "while %s", v5);
      sub_57D7C((int)&v25);
      sub_58BE4(v27, *(char **)(a1 + 4));
      v7 = sub_1C42A8(&ptr, v27[0]);
      v2 = 0;
LABEL_9:
      while ( 1 )
      {
        v8 = sub_258BD4(v7);
        v9 = sub_26C1E0(v8);
        v10 = sub_14CD3C(ptr);
        v11 = sub_194324(v10);
        v7 = sub_26C300(v9);
        if ( !v11 )
          break;
        v12 = **(_DWORD ***)(a1 + 24);
        if ( v12 )
        {
          v13 = dword_46B144;
          v14 = dword_46B144 + 1;
          while ( 1 )
          {
            dword_46B144 = v14;
            v7 = sub_58C5C(v12);
            v15 = v7 == 1;
            if ( v7 != 1 )
              v15 = v7 == 10;
            v2 = v7;
            if ( v15 )
              break;
            if ( v7 == 2 )
            {
              dword_46B144 = v13;
              goto LABEL_9;
            }
            v12 = (_DWORD *)*v12;
            dword_46B144 = v13;
            if ( !v12 )
              goto LABEL_9;
          }
          dword_46B144 = v13;
          break;
        }
      }
      v24 = ptr;
      if ( v2 == 1 )
        v2 = 0;
      if ( !ptr )
        goto LABEL_28;
      goto LABEL_26;
    case 4:
      v16 = *(const char **)(a1 + 4);
      v17 = strlen(v16);
      sub_93170(&v25, v17 + 4, "if %s", v16);
      sub_57D7C((int)&v25);
      sub_58BE4(v27, *(char **)(a1 + 4));
      v18 = sub_1C42A8(&ptr, v27[0]);
      v19 = sub_26C1E0(v18);
      v20 = sub_14CD3C(ptr);
      if ( sub_194324(v20) )
      {
        v21 = **(_DWORD ***)(a1 + 24);
      }
      else
      {
        if ( *(_DWORD *)(a1 + 20) != 2 )
        {
          sub_26C300(v19);
          goto LABEL_24;
        }
        v21 = *(_DWORD **)(*(_DWORD *)(a1 + 24) + 4);
      }
      sub_26C300(v19);
      if ( !v21 )
      {
LABEL_24:
        v2 = 0;
        goto LABEL_25;
      }
      v22 = dword_46B144;
      v23 = dword_46B144 + 1;
      while ( 1 )
      {
        dword_46B144 = v23;
        v2 = sub_58C5C(v21);
        if ( v2 )
          break;
        v21 = (_DWORD *)*v21;
        dword_46B144 = v22;
        if ( !v21 )
          goto LABEL_24;
      }
      dword_46B144 = v22;
LABEL_25:
      v24 = ptr;
      if ( ptr )
LABEL_26:
        free(v24);
LABEL_28:
      v4 = v27[0];
      if ( v27[0] == v28 )
        return v2;
LABEL_5:
      sub_339E64(v4);
      return v2;
    case 5:
      sub_58BE4(v27, *(char **)(a1 + 4));
      v2 = sub_D46B8(v27[0], a1);
      goto LABEL_28;
    case 6:
    case 8:
      sub_157AA8();
      return 0;
    case 7:
      v2 = 0;
      sub_277AB4(a1, 0, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16));
      return v2;
    default:
      sub_946B0("Invalid control type in canned commands structure.");
      return 10;
  }
}
