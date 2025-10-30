int __fastcall sub_1EE098(int a1, _DWORD *a2, __int64 *a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int v9; // r1
  __int64 v10; // r2
  char *v11; // r5
  int v12; // r0
  int v13; // r0
  char *v14; // r4
  char *v15; // r8
  char v16; // r5
  int v18; // r0
  const char *v19; // r0
  char v20; // [sp+7h] [bp-2Dh] BYREF
  int v21; // [sp+8h] [bp-2Ch] BYREF
  int v22; // [sp+Ch] [bp-28h]

  v22 = a1;
  v5 = sub_1DD58C(a1);
  v6 = sub_16F654(v5);
  ((void (__fastcall *)(int))loc_1E2770)(v6);
  v7 = v5;
  v8 = dword_488C94;
  ((void (__fastcall *)(int, _DWORD))loc_1DD420)(v7, *a2);
  if ( ((int (__fastcall *)(int))loc_1E2198)(4) == 2 || *a3 == -1 )
    return 0;
  v9 = *(_DWORD *)v8 + 1;
  **(_BYTE **)v8 = 112;
  v10 = *a3;
  v21 = v9;
  *(_BYTE *)(v9 + sub_1E0F74(v9, v10)) = 0;
  sub_1E7DEC(*(const char **)v8);
  sub_1E4EB8((char **)v8, (size_t *)(v8 + 4), 0, 0, 0);
  v11 = *(char **)v8;
  v12 = sub_1E1768(v11, dword_48872C);
  if ( !v12 )
  {
    v18 = sub_1DD58C(v22);
    v19 = (const char *)((int (__fastcall *)(int, _DWORD))loc_1677C0)(v18, *a2);
    sub_946E0("Could not fetch register \"%s\"; remote failure reply '%s'", v19, v11);
  }
  if ( v12 == 2 )
    return 0;
  v13 = (unsigned __int8)*v11;
  if ( v13 == 120 )
  {
    ((void (__fastcall *)(int, _DWORD, _DWORD))loc_1DE9C8)(v22, *a2, 0);
    return 1;
  }
  else
  {
    if ( *v11 )
    {
      if ( !v11[1] )
LABEL_16:
        sub_946E0("fetch_register_using_p: early buf termination");
      v14 = v11;
      v15 = &v20;
      while ( 1 )
      {
        v16 = sub_990E4(v13);
        *++v15 = sub_990E4((unsigned __int8)v14[1]) + 16 * v16;
        v13 = (unsigned __int8)v14[2];
        if ( !v14[2] )
          break;
        v14 += 2;
        if ( !v14[1] )
          goto LABEL_16;
      }
    }
    ((void (__fastcall *)(int, _DWORD, int *))loc_1DE9C8)(v22, *a2, &v21);
    return 1;
  }
}
