void __fastcall sub_B2CE0(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r5
  int v8; // r10
  int v9; // r8
  int v10; // r2
  int v11; // r3
  int v12; // r7
  int v13; // r5
  int v14; // r8
  int v15; // r3
  int v16; // r6
  int v17; // r11
  int v18; // r0
  int v19; // r2
  unsigned int v20; // r1
  int v21; // r3
  int v22; // r11
  int v23; // r5
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r5
  int v28; // r7
  char *v29; // r2
  int v30; // r3
  int v31; // r8
  int v32; // r3
  unsigned int v33; // r2
  int v35; // [sp+14h] [bp-8h]
  int v36; // [sp+14h] [bp-8h]

  v7 = a1;
  if ( sub_A0CFC(a1) )
    v7 = sub_A8678(v7);
  sub_25A418(a2, "array (");
  if ( !v7 )
  {
    sub_25A418(a2, "<undecipherable array type>");
    return;
  }
  v8 = sub_A0A54(v7);
  if ( !v8 )
  {
    v25 = sub_A1674(v7);
    v26 = v25;
    if ( v25 > 0 )
    {
      v36 = v7;
      v27 = v25;
      v28 = v25;
      do
      {
        if ( v28 == v27 )
          v29 = "";
        else
          v29 = ", ";
        sub_25A418(a2, "%s<>", v29, v26);
        --v27;
      }
      while ( v27 );
      v7 = v36;
    }
    v23 = sub_A1770(v7, -1);
    sub_25A418(a2, ") of ");
    sub_259B58("");
    v24 = a4 + 1;
    if ( a3 )
      goto LABEL_14;
LABEL_26:
    sub_B232C(v23, "", a2, a3, v24, a5);
    return;
  }
  v9 = sub_A0E38(v7, (const char *)&dword_375E30);
  ((void (*)(void))loc_A0928)();
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(__int16 *)(v10 + 4);
    if ( v11 > 0 )
    {
      v12 = v7;
      v35 = v7;
      v13 = v9;
      v14 = *(__int16 *)(v10 + 4);
      v15 = a3;
      v8 = 0;
      v16 = 0;
      v17 = v15;
      while ( 1 )
      {
        v18 = 3 * v16++;
        sub_B1F80(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 8 * v18 + 12), a2, 0);
        v19 = *(_DWORD *)(v12 + 24);
        v12 = *(_DWORD *)(v19 + 20);
        v20 = *(_DWORD *)(*(_DWORD *)(v19 + 24) + 8);
        if ( (v20 & 0xFFFFFFF0) != 0 )
          v8 = v20 >> 4;
        if ( v14 == v16 )
          break;
        sub_25A418(a2, ", ");
        v10 = *(_DWORD *)(v13 + 24);
      }
      v7 = v35;
      v21 = v17;
      v22 = v16;
      a3 = v21;
      goto LABEL_13;
    }
  }
  else
  {
    v30 = *(_DWORD *)(v7 + 24);
    if ( *(_BYTE *)v30 == 2 )
    {
      v8 = 0;
      v31 = v7;
      while ( 1 )
      {
        sub_B1B34(*(_DWORD *)(*(_DWORD *)(v30 + 24) + 12), a2, 0);
        v32 = *(_DWORD *)(v31 + 24);
        v31 = *(_DWORD *)(v32 + 20);
        v33 = *(_DWORD *)(*(_DWORD *)(v32 + 24) + 8);
        v30 = *(_DWORD *)(v31 + 24);
        if ( (v33 & 0xFFFFFFF0) != 0 )
          v8 = v33 >> 4;
        if ( *(_BYTE *)v30 != 2 )
          break;
        if ( v31 != v7 )
        {
          sub_25A418(a2, ", ");
          v30 = *(_DWORD *)(v31 + 24);
        }
      }
      v22 = -1;
LABEL_13:
      v23 = sub_A1770(v7, v22);
      sub_25A418(a2, ") of ");
      sub_259B58("");
      v24 = a4 + 1;
      if ( !a3 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v11 = -1;
  }
  v23 = sub_A1770(v7, v11);
  sub_25A418(a2, ") of ");
  sub_259B58("");
  v24 = a4 + 1;
  if ( !a3 )
    goto LABEL_26;
  v8 = 0;
LABEL_14:
  --a3;
LABEL_15:
  sub_B232C(v23, "", a2, a3, v24, a5);
  if ( v8 )
  {
    if ( !sub_172880(v23) )
      sub_25A418(a2, " <packed: %d-bit elements>");
  }
}
