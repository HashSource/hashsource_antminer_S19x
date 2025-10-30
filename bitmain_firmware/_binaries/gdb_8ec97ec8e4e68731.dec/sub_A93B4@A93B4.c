int __fastcall sub_A93B4(int a1, char *a2, int a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r0
  char *v8; // r3
  int v9; // r6
  int v10; // r2
  int v11; // r4
  int v12; // r0
  int v13; // r0
  char *v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r0
  _BOOL4 v18; // r0
  int v19; // r3
  int result; // r0
  int v21; // r0
  int v22; // r7
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r0
  int v29; // [sp+18h] [bp-1Ch]
  int v30; // [sp+20h] [bp-14h] BYREF
  int v31; // [sp+24h] [bp-10h] BYREF
  int v32; // [sp+28h] [bp-Ch] BYREF
  int v33[2]; // [sp+2Ch] [bp-8h] BYREF

  v5 = a1;
  v6 = sub_26BC70(a1);
  v7 = sub_A0870(v6);
  v8 = *(char **)(v7 + 24);
  v9 = v7;
  v10 = *v8;
  if ( v10 == 18 )
  {
    v23 = *((_DWORD *)v8 + 5);
    if ( !v23 )
      goto LABEL_31;
    v11 = sub_A0870(v23);
    if ( **(_BYTE **)(v11 + 24) == 1 )
    {
      v9 = v11;
      v27 = sub_26EA24(v5);
      v8 = *(char **)(v11 + 24);
      v5 = v27;
    }
    else
    {
      v8 = *(char **)(v9 + 24);
    }
    v10 = *v8;
  }
  else
  {
    v11 = v7;
  }
  if ( v10 == 1 )
  {
    v12 = *((_DWORD *)v8 + 5);
    if ( !v12 )
      goto LABEL_31;
    while ( 1 )
    {
      v11 = sub_A0870(v12);
      v16 = **(char **)(v11 + 24);
      if ( v16 != 1 )
        break;
      v13 = sub_26210C(v5);
      v14 = *(char **)(v11 + 24);
      v5 = v13;
      v15 = *v14;
      if ( v15 != 1 )
      {
        if ( (unsigned __int8)(v15 - 3) <= 1u )
          goto LABEL_42;
        goto LABEL_31;
      }
      v12 = *((_DWORD *)v14 + 5);
      v9 = v11;
      if ( !v12 )
        goto LABEL_31;
    }
  }
  else
  {
    LOBYTE(v16) = **(_BYTE **)(v11 + 24);
  }
  if ( (unsigned __int8)(v16 - 3) > 1u )
  {
LABEL_31:
    if ( !a3 )
      sub_946E0("Attempt to extract a component of a value that is not a record.");
    return 0;
  }
  if ( v11 == v9 )
  {
LABEL_42:
    result = sub_A7A24(a2, v5, 0, v11);
    v19 = result;
    if ( result )
      v19 = 1;
  }
  else
  {
    if ( **(_BYTE **)(v9 + 24) == 1 )
      v17 = sub_AB378(v5);
    else
      v17 = sub_AB07C(v5);
    v29 = ((int (__fastcall *)(int))loc_26C09C)(v17);
    if ( sub_A2974(v11, "_tag", 0, 1)
      || (v24 = *(_DWORD *)(v11 + 24), *(_BYTE *)v24 == 18) && sub_A2974(*(_DWORD *)(v24 + 20), "_tag", 0, 1) )
    {
      if ( !sub_A19AC(a2, v11, 0, v33, &v32, &v30, &v31, 0) )
      {
        v28 = sub_A2598(v11);
        v11 = sub_A9EE8(v28, 0, v29);
      }
      v18 = sub_A19AC(a2, v11, 0, v33, &v32, &v30, &v31, 0);
    }
    else
    {
      v25 = sub_A2598(v11);
      v26 = sub_A9EE8(v25, 0, v29);
      v18 = sub_A19AC(a2, v26, 0, v33, &v32, &v30, &v31, 0);
    }
    v19 = v18;
    if ( v18 )
    {
      if ( v31 )
      {
        if ( **(_BYTE **)(v9 + 24) == 18 )
          v21 = sub_AB07C(v5);
        else
          v21 = sub_AB378(v5);
        result = sub_A75F8(v21, 0, v32, v30, v31, v33[0]);
        v19 = result;
        if ( result )
          v19 = 1;
      }
      else
      {
        result = sub_260F84(v33[0], v29 + v32);
        v19 = result;
        if ( result )
          v19 = 1;
      }
    }
    else
    {
      result = 0;
    }
  }
  if ( a3 )
    v22 = 1;
  else
    v22 = v19;
  if ( !v22 )
    sub_946E0("There is no member named %s.", a2);
  return result;
}
