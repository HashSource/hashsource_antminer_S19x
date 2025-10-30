int __fastcall sub_181A64(char *a1, int a2)
{
  char *v2; // r4
  int v4; // r8
  int result; // r0
  int v6; // r5
  char *v7; // r0
  int v8; // r4
  char *v9; // r7
  _BOOL4 v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // t1
  int v14; // r6
  int v15; // r7
  int v16; // r0
  int v17; // r7
  const char *v18; // r6
  int *v19; // r0
  int v20; // r10
  const char *v21; // r0
  int v22; // r6
  _DWORD *v23; // r0
  int v24; // r7
  int v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0

  v2 = a1;
  if ( !sub_22EB0C(a1) )
    sub_946E0("The program has no registers now.");
  v4 = sub_15F7E8(0);
  result = sub_15ECB4(v4);
  v6 = result;
  if ( v2 )
  {
LABEL_3:
    while ( *v2 )
    {
      while ( 1 )
      {
        v7 = (char *)sub_9360C(v2);
        v8 = (unsigned __int8)*v7;
        v9 = v7;
        if ( v8 == 36 )
        {
          v8 = (unsigned __int8)v7[1];
          v9 = v7 + 1;
        }
        v10 = isspace(v8) != 0;
        if ( v8 )
          v11 = v10;
        else
          v11 = 1;
        if ( v11 )
          sub_946E0("Missing register name");
        v2 = v9;
        do
        {
          v13 = (unsigned __int8)*++v2;
          v12 = v13;
        }
        while ( v13 && !isspace(v12) );
        v14 = sub_257E94(v6, v9);
        if ( v14 < 0 )
          break;
        v15 = ((int (__fastcall *)(int))loc_166E9C)(v6);
        v16 = v15 + ((int (__fastcall *)(int))loc_166F48)(v6);
        if ( v16 > v14 )
        {
          v26 = (_DWORD *)sub_242F8C(v16);
          result = ((int (__fastcall *)(int, _DWORD, int, int, int))loc_167ECC)(v6, *v26, v4, v14, a2);
          goto LABEL_3;
        }
        v17 = ((int (__fastcall *)(int, int))loc_258020)(v14, v4);
        v18 = (const char *)sub_257FBC(v6, v14);
        v19 = (int *)sub_242F8C(v18);
        result = sub_17E954(*v19, v18, v17);
        if ( !*v2 )
          return result;
      }
      v20 = ((int (__fastcall *)(int, _DWORD))loc_1E04EC)(v6, 0);
      if ( !v20 )
LABEL_27:
        sub_946E0("Invalid register `%.*s'", v2 - v9, v9);
      while ( 1 )
      {
        v21 = (const char *)sub_1E0454(v20);
        v22 = strncmp(v9, v21, v2 - v9);
        if ( !v22 )
          break;
        v20 = ((int (__fastcall *)(int, int))loc_1E04EC)(v6, v20);
        if ( !v20 )
          goto LABEL_27;
      }
      while ( 1 )
      {
        v24 = ((int (__fastcall *)(int))loc_166E9C)(v6);
        result = v24 + ((int (__fastcall *)(int))loc_166F48)(v6);
        if ( result <= v22 )
          break;
        v25 = ((int (__fastcall *)(int, int, int))loc_16AF90)(v6, v22, v20);
        if ( v25 )
        {
          v23 = (_DWORD *)sub_242F8C(v25);
          ((void (__fastcall *)(int, _DWORD, int, int, int))loc_167ECC)(v6, *v23, v4, v22, a2);
        }
        ++v22;
      }
    }
  }
  else
  {
    v27 = (_DWORD *)sub_242F8C(result);
    return ((int (__fastcall *)(int, _DWORD, int, int, int))loc_167ECC)(v6, *v27, v4, -1, a2);
  }
  return result;
}
