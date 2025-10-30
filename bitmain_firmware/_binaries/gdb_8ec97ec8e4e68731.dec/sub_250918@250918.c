int __fastcall sub_250918(int *a1, int *a2, int a3, int (__fastcall *a4)(int, int))
{
  int result; // r0
  int v6; // r2
  char *v8; // r4
  int *v9; // r8
  int v10; // kr00_4
  int *v11; // r4
  int v12; // r0
  int *v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r8
  char *v18; // r10
  int *v19; // r9
  char *v20; // r11
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r11
  int v25; // r10
  int *v26; // r4
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r1
  int v40; // r2
  int *v41; // [sp+14h] [bp-28h]
  int v42; // [sp+18h] [bp-24h]
  int *v43; // [sp+1Ch] [bp-20h]
  int v44; // [sp+2Ch] [bp-10h]
  int v45; // [sp+2Ch] [bp-10h]
  int v46; // [sp+2Ch] [bp-10h]
  int v47; // [sp+30h] [bp-Ch]
  int v48; // [sp+30h] [bp-Ch]
  int v49; // [sp+30h] [bp-Ch]
  int v50; // [sp+30h] [bp-Ch]
  int v51; // [sp+34h] [bp-8h]
  int v52; // [sp+34h] [bp-8h]
  int v53; // [sp+34h] [bp-8h]
  int v54; // [sp+34h] [bp-8h]

  result = a3;
  v42 = a3;
  v6 = (char *)a2 - (char *)a1;
  v41 = a2;
  if ( (char *)a2 - (char *)a1 > 192 )
  {
    if ( !result )
    {
      v19 = a2;
      goto LABEL_17;
    }
    v8 = (char *)a2;
    v43 = a1 + 3;
    while ( 1 )
    {
      --v42;
      v9 = v41 - 3;
      v10 = -1431655765 * ((v8 - (char *)a1) >> 2);
      v11 = &a1[3 * (v10 / 2)];
      v12 = a4((int)v43, (int)v11);
      v13 = v41 - 3;
      if ( v12 )
        break;
      if ( a4((int)v43, (int)v13) )
      {
        v44 = *a1;
        v47 = a1[1];
        v51 = a1[2];
LABEL_7:
        v15 = a1[4];
        v16 = a1[5];
        *a1 = *v43;
        a1[1] = v15;
        a1[2] = v16;
        *v43 = v44;
        a1[4] = v47;
        a1[5] = v51;
        goto LABEL_8;
      }
      v34 = a4((int)&a1[3 * (v10 / 2)], (int)v9);
      v44 = *a1;
      v47 = a1[1];
      v51 = a1[2];
      if ( v34 )
        goto LABEL_25;
      v35 = v11[1];
      v36 = v11[2];
      *a1 = *v11;
      a1[1] = v35;
      a1[2] = v36;
      *v11 = v44;
      v11[1] = v47;
      v11[2] = v51;
LABEL_8:
      v17 = a1 + 6;
      v18 = (char *)v41;
      while ( 1 )
      {
        v8 = (char *)(v17 - 3);
        v19 = v17 - 3;
        if ( a4((int)(v17 - 3), (int)a1) )
          goto LABEL_14;
        v20 = v18 - 12;
        do
        {
          v21 = a4((int)a1, (int)v20);
          v18 = v20;
          v20 -= 12;
        }
        while ( v21 );
        if ( v8 >= v18 )
          break;
        v45 = *(_DWORD *)v8;
        v48 = *(v17 - 2);
        v52 = *(v17 - 1);
        v22 = *((_DWORD *)v18 + 1);
        v23 = *((_DWORD *)v18 + 2);
        *(_DWORD *)v8 = *(_DWORD *)v18;
        *(v17 - 2) = v22;
        *(v17 - 1) = v23;
        *(_DWORD *)v18 = v45;
        *((_DWORD *)v18 + 1) = v48;
        *((_DWORD *)v18 + 2) = v52;
LABEL_14:
        v17 += 3;
      }
      result = sub_250918(v17 - 3, v41, v42, a4);
      v6 = v8 - (char *)a1;
      if ( v8 - (char *)a1 <= 192 )
        return result;
      v41 = v17 - 3;
      if ( !v42 )
      {
LABEL_17:
        v24 = -1431655765 * (v6 >> 2);
        v25 = (v24 - 2) >> 1;
        v26 = &a1[3 * v25];
        do
        {
          v27 = *v26;
          v28 = v26[1];
          v29 = v26[2];
          v26 -= 3;
          sub_250784((int)a1, v25, v24, v27, v28, v29, a4);
        }
        while ( v25-- != 0 );
        do
        {
          v19 -= 3;
          v49 = v19[1];
          v53 = v19[2];
          v31 = *v19;
          v32 = a1[1];
          v33 = a1[2];
          *v19 = *a1;
          v19[1] = v32;
          v19[2] = v33;
          result = sub_250784((int)a1, 0, -1431655765 * (v19 - a1), v31, v49, v53, a4);
        }
        while ( (char *)v19 - (char *)a1 > 12 );
        return result;
      }
    }
    if ( a4((int)&a1[3 * (v10 / 2)], (int)v13) )
    {
      v46 = *a1;
      v50 = a1[1];
      v54 = a1[2];
      v39 = v11[1];
      v40 = v11[2];
      *a1 = *v11;
      a1[1] = v39;
      a1[2] = v40;
      *v11 = v46;
      v11[1] = v50;
      v11[2] = v54;
      goto LABEL_8;
    }
    v14 = a4((int)v43, (int)v9);
    v44 = *a1;
    v47 = a1[1];
    v51 = a1[2];
    if ( v14 )
    {
LABEL_25:
      v37 = *(v41 - 2);
      v38 = *(v41 - 1);
      *a1 = *v9;
      a1[1] = v37;
      a1[2] = v38;
      *v9 = v44;
      *(v41 - 2) = v47;
      *(v41 - 1) = v51;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  return result;
}
