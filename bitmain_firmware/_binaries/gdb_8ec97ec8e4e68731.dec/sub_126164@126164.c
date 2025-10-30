int __fastcall sub_126164(char *a1, char *a2, int a3, int a4, int (__fastcall **a5)(int, int))
{
  int result; // r0
  int v7; // r2
  char *v8; // r9
  int v9; // r5
  char *v10; // r7
  int v11; // r8
  int v12; // r0
  bool v13; // nf
  int v14; // r3
  int v15; // r8
  int v16; // r0
  __int64 v17; // r2
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r8
  int v21; // r1
  char *v22; // r7
  int v23; // r5
  int v24; // r0
  char *v25; // r5
  int v26; // r11
  int v27; // r0
  int v28; // t1
  __int64 v29; // r2
  int v30; // r1
  int v31; // r9
  int v32; // r4
  int *v34; // r11
  int v35; // r1
  int v36; // r12
  int v37; // r3
  int v38; // r8
  int v39; // r0
  __int64 v40; // r2
  int v41; // r0
  int v42; // r1
  int v43; // r5
  int v44; // r0
  int v45; // r0
  int v46; // r3
  int v47; // r1
  int v48; // r8
  int v49; // r0
  int v50; // r0
  int v51; // r1
  int *v52; // [sp+14h] [bp-30h]
  char *v53; // [sp+18h] [bp-2Ch]
  int v54; // [sp+1Ch] [bp-28h]
  int varg_r3; // [sp+6Ch] [bp+28h]

  result = a3;
  v54 = a3;
  v7 = a2 - a1;
  v53 = a2;
  if ( a2 - a1 > 128 )
  {
    if ( !result )
    {
      v52 = (int *)a2;
      goto LABEL_18;
    }
    v8 = a2;
    while ( 1 )
    {
      --v54;
      v9 = (int)(((v8 - a1) >> 3) + ((unsigned int)(v8 - a1) >> 31)) >> 1;
      v10 = &a1[8 * v9];
      v11 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)a1 + 3));
      v12 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v10 + 1));
      v13 = (*a5)(v11 + *((_DWORD *)a1 + 2), v12 + *(_DWORD *)v10) < 0;
      v14 = *(_DWORD *)varg_r3;
      if ( v13 )
      {
        v15 = (*(int (__fastcall **)(int, _DWORD))(v14 + 4))(varg_r3, *((_DWORD *)v10 + 1));
        v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v53 - 1));
        if ( (*a5)(v15 + *(_DWORD *)&a1[8 * v9], v16 + *((_DWORD *)v53 - 2)) >= 0 )
        {
          v43 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)a1 + 3));
          v44 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v53 - 1));
          v45 = (*a5)(v43 + *((_DWORD *)a1 + 2), v44 + *((_DWORD *)v53 - 2));
          LODWORD(v40) = *(_DWORD *)a1;
          if ( v45 < 0 )
          {
            v46 = *((_DWORD *)a1 + 1);
            v47 = *((_DWORD *)v53 - 1);
            *(_DWORD *)a1 = *((_DWORD *)v53 - 2);
            *((_DWORD *)a1 + 1) = v47;
            *((_QWORD *)v53 - 1) = v40;
            v19 = *((_DWORD *)a1 + 3);
            goto LABEL_9;
          }
          goto LABEL_26;
        }
        v17 = *(_QWORD *)a1;
      }
      else
      {
        v38 = (*(int (__fastcall **)(int, _DWORD))(v14 + 4))(varg_r3, *((_DWORD *)a1 + 3));
        v39 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v53 - 1));
        if ( (*a5)(v38 + *((_DWORD *)a1 + 2), v39 + *((_DWORD *)v53 - 2)) < 0 )
        {
          LODWORD(v40) = *(_DWORD *)a1;
LABEL_26:
          v41 = *((_DWORD *)a1 + 2);
          v42 = *((_DWORD *)a1 + 3);
          v19 = *((_DWORD *)a1 + 1);
          *((_DWORD *)a1 + 2) = v40;
          *(_DWORD *)a1 = v41;
          *((_DWORD *)a1 + 1) = v42;
          *((_DWORD *)a1 + 3) = v19;
          goto LABEL_9;
        }
        v48 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v10 + 1));
        v49 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v53 - 1));
        v50 = (*a5)(v48 + *(_DWORD *)&a1[8 * v9], v49 + *((_DWORD *)v53 - 2));
        v17 = *(_QWORD *)a1;
        if ( v50 < 0 )
        {
          v51 = *((_DWORD *)v53 - 1);
          *(_DWORD *)a1 = *((_DWORD *)v53 - 2);
          *((_DWORD *)a1 + 1) = v51;
          *((_QWORD *)v53 - 1) = v17;
          v19 = *((_DWORD *)a1 + 3);
          goto LABEL_9;
        }
      }
      v18 = *((_DWORD *)v10 + 1);
      *(_DWORD *)a1 = *(_DWORD *)v10;
      *((_DWORD *)a1 + 1) = v18;
      *(_DWORD *)&a1[8 * v9] = v17;
      *((_DWORD *)v10 + 1) = HIDWORD(v17);
      v19 = *((_DWORD *)a1 + 3);
LABEL_9:
      v20 = a1 + 16;
      v21 = v19;
      v22 = v53;
      while ( 1 )
      {
        v8 = (char *)(v20 - 2);
        v23 = (*(int (__fastcall **)(int, int))(*(_DWORD *)varg_r3 + 4))(varg_r3, v21);
        v52 = v20 - 2;
        v24 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)a1 + 1));
        if ( (*a5)(v23 + *(v20 - 2), v24 + *(_DWORD *)a1) < 0 )
          goto LABEL_15;
        v25 = v22 - 8;
        do
        {
          v22 = v25;
          v26 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)a1 + 1));
          v27 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)varg_r3 + 4))(varg_r3, *((_DWORD *)v25 + 1));
          v28 = *(_DWORD *)v25;
          v25 -= 8;
        }
        while ( (*a5)(v26 + *(_DWORD *)a1, v27 + v28) < 0 );
        if ( v22 <= v8 )
          break;
        v29 = *((_QWORD *)v20 - 1);
        v30 = *((_DWORD *)v22 + 1);
        *(_DWORD *)v8 = *(_DWORD *)v22;
        *(v20 - 1) = v30;
        *(_QWORD *)v22 = v29;
LABEL_15:
        v21 = v20[1];
        v20 += 2;
      }
      result = sub_126164(v20 - 2, v53, v54, varg_r3, a5);
      v7 = v8 - a1;
      if ( v8 - a1 <= 128 )
        return result;
      v53 = (char *)(v20 - 2);
      if ( !v54 )
      {
LABEL_18:
        v31 = v7 >> 3;
        v32 = ((v7 >> 3) - 2) >> 1;
        do
          sub_125E8C((int)a1, v32, v31, *(_DWORD *)&a1[8 * v32], *(_DWORD *)&a1[8 * v32 + 4], varg_r3, a5);
        while ( v32-- != 0 );
        v34 = v52;
        do
        {
          v34 -= 2;
          v35 = *((_DWORD *)a1 + 1);
          v36 = v34[1];
          v37 = *v34;
          *v34 = *(_DWORD *)a1;
          v34[1] = v35;
          result = sub_125E8C((int)a1, 0, ((char *)v34 - a1) >> 3, v37, v36, varg_r3, a5);
        }
        while ( (char *)v34 - a1 > 8 );
        return result;
      }
    }
  }
  return result;
}
