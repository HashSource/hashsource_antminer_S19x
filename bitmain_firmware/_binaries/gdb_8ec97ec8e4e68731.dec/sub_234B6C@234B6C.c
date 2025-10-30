int __fastcall sub_234B6C(int a1, signed int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  int v6; // r8
  int v7; // r5
  int v8; // r0
  bool v9; // zf
  int result; // r0
  int v11; // r0
  int v12; // r0
  int (__fastcall *v13)(int, signed int); // r3
  int v14; // r5
  int v15; // r5
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r5
  int v21; // r5
  int v22; // r5
  int v23; // r5
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r4
  _DWORD *v32; // r0
  _BYTE *v33; // r1

  v4 = (_DWORD *)sub_234AC0(a1, a2);
  v5 = v4;
  if ( !v4 )
  {
    v7 = ((int (__fastcall *)(int))loc_166E9C)(a1);
    v8 = ((int (__fastcall *)(int))loc_166F48)(a1);
    if ( a2 < v7 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v6 = *v4;
  v7 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v8 = ((int (__fastcall *)(int))loc_166F48)(a1);
  v9 = a2 == v7;
  if ( a2 >= v7 )
    v9 = v6 == 0;
  if ( v9 )
  {
LABEL_9:
    if ( v7 + v8 > a2 )
      goto LABEL_15;
LABEL_10:
    sub_1780B4();
    return *(_DWORD *)(v11 + 96);
  }
  if ( !v6 )
    goto LABEL_10;
  result = v5[1];
  if ( result )
    return result;
  v12 = *(_DWORD *)(v6 + 88);
  if ( v12 )
  {
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 12))(v12, a1);
    v5[1] = result;
  }
  else if ( sub_33CAA0(v6 + 64, "float") )
  {
    if ( sub_33CAA0(v6 + 64, "int") )
    {
      result = v5[1];
    }
    else
    {
      v19 = *(_DWORD *)(v6 + 60);
      if ( v19 != ((int (__fastcall *)(int))loc_165EE0)(a1) )
      {
        v20 = *(_DWORD *)(v6 + 60);
        if ( v20 == 8 )
        {
          sub_1780B4();
          result = *(_DWORD *)(v26 + 4);
          v5[1] = result;
          goto LABEL_13;
        }
        if ( v20 == ((int (__fastcall *)(int))loc_165DF0)(a1) )
        {
          sub_1780B4();
          result = *(_DWORD *)(v27 + 8);
          v5[1] = result;
          goto LABEL_13;
        }
        v21 = *(_DWORD *)(v6 + 60);
        if ( v21 == ((int (__fastcall *)(int))loc_165E68)(a1) )
        {
          sub_1780B4();
          result = *(_DWORD *)(v28 + 12);
          v5[1] = result;
          goto LABEL_13;
        }
        v22 = *(_DWORD *)(v6 + 60);
        if ( v22 == ((int (__fastcall *)(int))loc_165F58)(a1) )
        {
          sub_1780B4();
          result = *(_DWORD *)(v29 + 68);
          v5[1] = result;
          goto LABEL_13;
        }
        v23 = *(_DWORD *)(v6 + 60);
        if ( v23 == ((int (__fastcall *)(int))loc_1665F4)(a1) )
        {
          sub_1780B4();
          result = *(_DWORD *)(v30 + 152);
          v5[1] = result;
          goto LABEL_13;
        }
        sub_946B0("Register \"%s\" has an unsupported size (%d bits)", *(const char **)(v6 + 4), *(_DWORD *)(v6 + 60));
      }
      sub_1780B4();
      result = *(_DWORD *)(v24 + 16);
      v5[1] = result;
    }
  }
  else
  {
    v14 = *(_DWORD *)(v6 + 60);
    if ( v14 == ((int (__fastcall *)(int))loc_166138)(a1) )
    {
      sub_1780B4();
      result = *(_DWORD *)(v18 + 40);
      v5[1] = result;
    }
    else
    {
      v15 = *(_DWORD *)(v6 + 60);
      if ( v15 != ((int (__fastcall *)(int))loc_166228)(a1) )
      {
        v16 = *(_DWORD *)(v6 + 60);
        if ( v16 == ((int (__fastcall *)(int))loc_166318)(a1) )
        {
          sub_1780B4();
          result = *(_DWORD *)(v25 + 48);
          v5[1] = result;
          goto LABEL_13;
        }
        sub_946B0("Register \"%s\" has an unsupported size (%d bits)", *(const char **)(v6 + 4), *(_DWORD *)(v6 + 60));
      }
      sub_1780B4();
      result = *(_DWORD *)(v17 + 44);
      v5[1] = result;
    }
  }
LABEL_13:
  if ( result )
    return result;
  sub_94700(
    (int)"target-descriptions.c",
    1261,
    "Register \"%s\" has an unknown type \"%s\"",
    *(const char **)(v6 + 4),
    *(const char **)(v6 + 64));
LABEL_15:
  v13 = *(int (__fastcall **)(int, signed int))(((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_48A4B4) + 16);
  if ( v13 )
    return v13(a1, a2);
  sub_94700(
    (int)"target-descriptions.c",
    1207,
    "%s: Assertion `%s' failed.",
    "type* tdesc_register_type(gdbarch*, int)",
    "data->pseudo_register_type != NULL");
  v31 = sub_183688();
  v32 = *(_DWORD **)(v31 + 164);
  if ( !v32 )
  {
    v32 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v31 + 164) = v32;
  }
  v33 = (_BYTE *)v32[2];
  if ( v33 && *v33 )
    return sub_259F10("The target description will be read from \"%s\".\n");
  else
    return sub_259F10("The target description will be read from the target.\n");
}
