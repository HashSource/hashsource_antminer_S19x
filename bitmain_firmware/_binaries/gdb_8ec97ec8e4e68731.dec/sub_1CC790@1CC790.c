int __fastcall sub_1CC790(int a1, int *a2, int a3, int (__fastcall *a4)(int, int *))
{
  int result; // r0
  int v6; // r2
  int *v8; // r8
  int *v9; // r4
  int *v10; // r11
  int v11; // r4
  int *v12; // r7
  int v13; // r0
  int *v14; // r1
  int v15; // r0
  __int64 v16; // r2
  int v17; // r1
  int v18; // r7
  int *v19; // r10
  int *v20; // r11
  int *v21; // r9
  int v22; // r0
  int v23; // r12
  int v24; // r3
  int v25; // r1
  int v26; // r8
  int v27; // r4
  int v29; // r1
  int v30; // r12
  int v31; // r3
  int v32; // r0
  __int64 v33; // r2
  int v34; // r1
  int v35; // r0
  int v36; // r1
  int v37; // r1
  __int64 v38; // r2
  int v39; // r1
  int v40; // [sp+Ch] [bp-18h]
  int *v41; // [sp+10h] [bp-14h]

  result = a3;
  v40 = a3;
  v6 = (int)a2 - a1;
  if ( (int)a2 - a1 > 128 )
  {
    if ( !result )
    {
      v20 = a2;
      goto LABEL_17;
    }
    v8 = a2;
    v9 = a2;
    v41 = (int *)(a1 + 8);
    while ( 1 )
    {
      v10 = v8 - 2;
      --v40;
      v11 = (int)((((int)v9 - a1) >> 3) + (((unsigned int)v9 - a1) >> 31)) >> 1;
      v12 = (int *)(a1 + 8 * v11);
      v13 = a4((int)v41, v12);
      v14 = v8 - 2;
      if ( !v13 )
        break;
      if ( a4(a1 + 8 * v11, v14) )
      {
        v38 = *(_QWORD *)a1;
        v39 = v12[1];
        *(_DWORD *)a1 = *v12;
        *(_DWORD *)(a1 + 4) = v39;
        *(_DWORD *)(a1 + 8 * v11) = v38;
        v12[1] = HIDWORD(v38);
        goto LABEL_8;
      }
      v15 = a4((int)v41, v8 - 2);
      LODWORD(v16) = *(_DWORD *)a1;
      if ( !v15 )
        goto LABEL_26;
      HIDWORD(v16) = *(_DWORD *)(a1 + 4);
      v17 = *(v8 - 1);
      *(_DWORD *)a1 = *v10;
      *(_DWORD *)(a1 + 4) = v17;
      *((_QWORD *)v8 - 1) = v16;
LABEL_8:
      v18 = a1 + 16;
      v19 = v8;
      while ( 1 )
      {
        v9 = (int *)(v18 - 8);
        v20 = (int *)(v18 - 8);
        if ( a4(v18 - 8, (int *)a1) )
          goto LABEL_14;
        v21 = v19 - 2;
        do
        {
          v22 = a4(a1, v21);
          v19 = v21;
          v21 -= 2;
        }
        while ( v22 );
        if ( v9 >= v19 )
          break;
        v23 = *(_DWORD *)(v18 - 8);
        v24 = *(_DWORD *)(v18 - 4);
        v25 = v19[1];
        *v9 = *v19;
        *(_DWORD *)(v18 - 4) = v25;
        *v19 = v23;
        v19[1] = v24;
LABEL_14:
        v18 += 8;
      }
      result = sub_1CC790(v18 - 8, v8, v40, a4);
      v6 = (int)v9 - a1;
      if ( (int)v9 - a1 <= 128 )
        return result;
      v8 = (int *)(v18 - 8);
      if ( !v40 )
      {
LABEL_17:
        v26 = v6 >> 3;
        v27 = ((v6 >> 3) - 2) >> 1;
        do
          sub_1CC624(a1, v27, v26, *(_DWORD *)(a1 + 8 * v27), *(_DWORD *)(a1 + 8 * v27 + 4), a4);
        while ( v27-- != 0 );
        do
        {
          v20 -= 2;
          v29 = *(_DWORD *)(a1 + 4);
          v30 = v20[1];
          v31 = *v20;
          *v20 = *(_DWORD *)a1;
          v20[1] = v29;
          result = sub_1CC624(a1, 0, ((int)v20 - a1) >> 3, v31, v30, a4);
        }
        while ( (int)v20 - a1 > 8 );
        return result;
      }
    }
    if ( !a4((int)v41, v14) )
    {
      v32 = a4(a1 + 8 * v11, v8 - 2);
      v33 = *(_QWORD *)a1;
      if ( v32 )
      {
        v37 = *(v8 - 1);
        *(_DWORD *)a1 = *v10;
        *(_DWORD *)(a1 + 4) = v37;
        *((_QWORD *)v8 - 1) = v33;
      }
      else
      {
        v34 = v12[1];
        *(_DWORD *)a1 = *v12;
        *(_DWORD *)(a1 + 4) = v34;
        *(_DWORD *)(a1 + 8 * v11) = v33;
        v12[1] = HIDWORD(v33);
      }
      goto LABEL_8;
    }
    LODWORD(v16) = *(_DWORD *)a1;
LABEL_26:
    v35 = *v41;
    v36 = *(_DWORD *)(a1 + 12);
    HIDWORD(v16) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v16;
    *(_DWORD *)a1 = v35;
    *(_DWORD *)(a1 + 4) = v36;
    *(_DWORD *)(a1 + 12) = HIDWORD(v16);
    goto LABEL_8;
  }
  return result;
}
