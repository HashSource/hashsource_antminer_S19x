int __fastcall sub_1CF768(char *a1, char *a2, int a3, unsigned __int8 a4)
{
  int result; // r0
  int v6; // r2
  char *v7; // r8
  char *v8; // r4
  int v9; // r4
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r6
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r11
  char *v20; // r6
  int v21; // r10
  int v22; // r0
  char *v23; // r7
  char *v24; // r11
  int v25; // t1
  int v26; // r10
  int v27; // r0
  int v28; // r3
  int v29; // t1
  int v30; // r4
  int v31; // r6
  int *v32; // r8
  int v33; // t1
  int v35; // t1
  int v36; // r6
  int v37; // r0
  int v38; // r6
  int v39; // r4
  int v40; // r0
  int v41; // r7
  int v42; // r6
  int v43; // r0
  int v44; // r0
  int v45; // [sp+4h] [bp-10h]

  result = a3;
  v45 = a3;
  v6 = a2 - a1;
  if ( a2 - a1 > 64 )
  {
    if ( !result )
    {
      v23 = a2;
      goto LABEL_17;
    }
    v7 = a2;
    v8 = a2;
    while ( 1 )
    {
      --v45;
      v9 = (int)(((v8 - a1) >> 2) + ((unsigned int)(v8 - a1) >> 31)) >> 1;
      v10 = *(_DWORD *)&a1[4 * v9];
      v11 = sub_21B7DC(*((_DWORD *)a1 + 1));
      v12 = sub_21B7DC(v10);
      v13 = sub_25A8B8(v11, v12);
      v14 = *((_DWORD *)v7 - 1);
      if ( v13 >= 0 )
      {
        v36 = sub_21B7DC(*((_DWORD *)a1 + 1));
        v37 = sub_21B7DC(v14);
        if ( sub_25A8B8(v36, v37) < 0 )
          goto LABEL_23;
        v41 = *((_DWORD *)v7 - 1);
        v42 = sub_21B7DC(*(_DWORD *)&a1[4 * v9]);
        v43 = sub_21B7DC(v41);
        v44 = sub_25A8B8(v42, v43);
        v17 = *(_DWORD *)a1;
        if ( v44 < 0 )
          goto LABEL_26;
      }
      else
      {
        v15 = sub_21B7DC(*(_DWORD *)&a1[4 * v9]);
        v16 = sub_21B7DC(v14);
        if ( sub_25A8B8(v15, v16) >= 0 )
        {
          v38 = *((_DWORD *)v7 - 1);
          v39 = sub_21B7DC(*((_DWORD *)a1 + 1));
          v40 = sub_21B7DC(v38);
          if ( sub_25A8B8(v39, v40) < 0 )
          {
            v17 = *(_DWORD *)a1;
LABEL_26:
            *(_DWORD *)a1 = *((_DWORD *)v7 - 1);
            *((_DWORD *)v7 - 1) = v17;
            v18 = *((_DWORD *)a1 + 1);
            v19 = *(_DWORD *)a1;
            goto LABEL_8;
          }
LABEL_23:
          v18 = *(_DWORD *)a1;
          v19 = *((_DWORD *)a1 + 1);
          *((_DWORD *)a1 + 1) = *(_DWORD *)a1;
          *(_DWORD *)a1 = v19;
          goto LABEL_8;
        }
        v17 = *(_DWORD *)a1;
      }
      *(_DWORD *)a1 = *(_DWORD *)&a1[4 * v9];
      *(_DWORD *)&a1[4 * v9] = v17;
      v18 = *((_DWORD *)a1 + 1);
      v19 = *(_DWORD *)a1;
LABEL_8:
      v8 = a1 + 4;
      v20 = v7;
      while ( 1 )
      {
        v21 = sub_21B7DC(v18);
        v22 = sub_21B7DC(v19);
        v23 = v8;
        if ( sub_25A8B8(v21, v22) < 0 )
          goto LABEL_14;
        v24 = v20 - 4;
        do
        {
          v20 = v24;
          v25 = *(_DWORD *)v24;
          v24 -= 4;
          v26 = sub_21B7DC(*(_DWORD *)a1);
          v27 = sub_21B7DC(v25);
        }
        while ( sub_25A8B8(v26, v27) < 0 );
        if ( v8 >= v20 )
          break;
        v28 = *(_DWORD *)v8;
        *(_DWORD *)v8 = *(_DWORD *)v20;
        *(_DWORD *)v20 = v28;
LABEL_14:
        v29 = *((_DWORD *)v8 + 1);
        v8 += 4;
        v18 = v29;
        v19 = *(_DWORD *)a1;
      }
      result = sub_1CF768(v8, v7, v45, a4);
      v6 = v8 - a1;
      if ( v8 - a1 <= 64 )
        return result;
      v7 = v8;
      if ( !v45 )
      {
LABEL_17:
        v30 = v6 >> 2;
        v31 = ((v6 >> 2) - 2) >> 1;
        v32 = (int *)&a1[4 * v31];
        do
        {
          v33 = *v32--;
          sub_1CF5E8((int)a1, v31, v30, v33);
        }
        while ( v31-- != 0 );
        do
        {
          v35 = *((_DWORD *)v23 - 1);
          v23 -= 4;
          *(_DWORD *)v23 = *(_DWORD *)a1;
          result = sub_1CF5E8((int)a1, 0, (v23 - a1) >> 2, v35);
        }
        while ( v23 - a1 > 4 );
        return result;
      }
    }
  }
  return result;
}
