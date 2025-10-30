int __fastcall sub_AEC94(int result, char *a2, int a3)
{
  int v3; // r3
  char *v4; // r5
  int v5; // r7
  char *v6; // r6
  char *v7; // r4
  int v8; // r4
  char *v9; // r8
  _BOOL4 v10; // r0
  int v11; // r1
  int v12; // r11
  int v13; // r10
  int v14; // r0
  int v15; // r1
  int v16; // r8
  char *v17; // r10
  char *v18; // r9
  int v19; // r11
  _BOOL4 v20; // r0
  int v21; // r12
  int v22; // r2
  int v23; // r1
  int v24; // r1
  int v25; // r6
  int v26; // r4
  int v28; // r1
  int v29; // lr
  int v30; // r3
  int v31; // r1
  int v32; // [sp+4h] [bp-3Ch]
  int *v33; // [sp+8h] [bp-38h]
  int v34; // [sp+Ch] [bp-34h]

  v3 = (int)&a2[-result];
  if ( (int)&a2[-result] > 128 )
  {
    v4 = (char *)result;
    v5 = a3;
    if ( !a3 )
    {
      v18 = a2;
      goto LABEL_20;
    }
    v6 = a2;
    v7 = a2;
    v33 = (int *)(result + 8);
    v34 = result + 16;
    while ( 1 )
    {
      --v5;
      v8 = (int)(((v7 - v4) >> 3) + ((unsigned int)(v7 - v4) >> 31)) >> 1;
      v9 = &v4[8 * v8];
      v10 = sub_A3BBC((int)v33, (int)v9);
      v11 = (int)(v6 - 8);
      v12 = *(_DWORD *)v4;
      v13 = *((_DWORD *)v4 + 1);
      if ( v10 )
      {
        if ( sub_A3BBC((int)&v4[8 * v8], v11) )
          goto LABEL_25;
        if ( sub_A3BBC((int)v33, (int)(v6 - 8)) )
          goto LABEL_17;
      }
      else if ( !sub_A3BBC((int)v33, v11) )
      {
        if ( !sub_A3BBC((int)&v4[8 * v8], (int)(v6 - 8)) )
        {
LABEL_25:
          v31 = *((_DWORD *)v9 + 1);
          *(_DWORD *)v4 = *(_DWORD *)v9;
          *((_DWORD *)v4 + 1) = v31;
          *(_DWORD *)&v4[8 * v8] = v12;
          *((_DWORD *)v9 + 1) = v13;
          goto LABEL_8;
        }
LABEL_17:
        v24 = *((_DWORD *)v6 - 1);
        *(_DWORD *)v4 = *((_DWORD *)v6 - 2);
        *((_DWORD *)v4 + 1) = v24;
        *((_DWORD *)v6 - 2) = v12;
        *((_DWORD *)v6 - 1) = v13;
        goto LABEL_8;
      }
      v14 = *v33;
      v15 = v33[1];
      *((_DWORD *)v4 + 2) = v12;
      *((_DWORD *)v4 + 3) = v13;
      *(_DWORD *)v4 = v14;
      *((_DWORD *)v4 + 1) = v15;
LABEL_8:
      v16 = v34;
      v17 = v6;
      while ( 1 )
      {
        v7 = (char *)(v16 - 8);
        v18 = (char *)(v16 - 8);
        if ( sub_A3BBC(v16 - 8, (int)v4) )
          goto LABEL_14;
        v19 = (int)(v17 - 8);
        do
        {
          v20 = sub_A3BBC((int)v4, v19);
          v17 = (char *)v19;
          v19 -= 8;
        }
        while ( v20 );
        if ( v17 <= v7 )
          break;
        v21 = *(_DWORD *)(v16 - 8);
        v22 = *(_DWORD *)(v16 - 4);
        v23 = *((_DWORD *)v17 + 1);
        *(_DWORD *)v7 = *(_DWORD *)v17;
        *(_DWORD *)(v16 - 4) = v23;
        *(_DWORD *)v17 = v21;
        *((_DWORD *)v17 + 1) = v22;
LABEL_14:
        v16 += 8;
      }
      result = sub_AEC94(v16 - 8, v6, v5);
      v3 = v7 - v4;
      if ( v7 - v4 <= 128 )
        return result;
      v6 = (char *)(v16 - 8);
      if ( !v5 )
      {
LABEL_20:
        v25 = v3 >> 3;
        v26 = ((v3 >> 3) - 2) >> 1;
        do
        {
          LOBYTE(v32) = 0;
          sub_AF988(v4, v26, v25, *(_DWORD *)&v4[8 * v26], *(_DWORD *)&v4[8 * v26 + 4], v32);
        }
        while ( v26-- != 0 );
        do
        {
          v18 -= 8;
          v28 = *((_DWORD *)v4 + 1);
          v29 = *((_DWORD *)v18 + 1);
          v30 = *(_DWORD *)v18;
          *(_DWORD *)v18 = *(_DWORD *)v4;
          *((_DWORD *)v18 + 1) = v28;
          LOBYTE(v32) = 0;
          result = sub_AF988(v4, 0, (v18 - v4) >> 3, v30, v29, v32);
        }
        while ( v18 - v4 > 8 );
        return result;
      }
    }
  }
  return result;
}
