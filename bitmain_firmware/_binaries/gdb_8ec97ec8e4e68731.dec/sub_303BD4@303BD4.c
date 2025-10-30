unsigned int __fastcall sub_303BD4(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r7
  int v3; // r4
  unsigned int v4; // r3
  int v5; // r6
  unsigned int v6; // r12
  bool v7; // cc
  int v8; // r8
  unsigned int v9; // r3
  unsigned int v10; // r3
  int v11; // lr
  unsigned int v12; // r2
  int v13; // r9
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r10
  int v17; // r11
  unsigned __int8 *v18; // r3
  unsigned int v19; // r8
  unsigned __int8 *v21; // r3
  unsigned __int8 *v22; // r0
  int v23; // r12
  int v24; // t1
  int v25; // t1
  _BOOL4 v26; // r1
  int v27; // r0
  unsigned __int8 *v28; // [sp+4h] [bp-20h]
  int v29; // [sp+8h] [bp-1Ch]
  unsigned int v30; // [sp+Ch] [bp-18h]
  unsigned int v31; // [sp+10h] [bp-14h]
  unsigned int v33; // [sp+1Ch] [bp-8h]

  v3 = a1[11];
  v4 = a1[27];
  v5 = a1[14];
  v6 = a1[30];
  v7 = v4 > v3 - 262;
  if ( v4 > v3 - 262 )
    v2 = v4 + 260;
  v28 = (unsigned __int8 *)(v5 + v4);
  v8 = v5 + v4;
  v9 = v4 + 258;
  if ( v7 )
    v2 += 2;
  v10 = v5 + v9;
  if ( v7 )
    v2 -= v3;
  v31 = v10;
  v11 = a1[30];
  if ( !v7 )
    v2 = 0;
  v12 = a1[31];
  v13 = *(unsigned __int8 *)(v8 + v6);
  v14 = *(unsigned __int8 *)(v8 + v6 - 1);
  v15 = a1[29];
  if ( v6 >= a1[35] )
    v12 >>= 2;
  v16 = a1[16];
  v17 = a1[13];
  v30 = a1[29];
  if ( a1[36] < v15 )
    v15 = a1[36];
  v29 = v15;
  do
  {
    v18 = (unsigned __int8 *)(v5 + a2);
    v19 = v11;
    if ( *(unsigned __int8 *)(v5 + a2 + v11) == v13 && v18[v11 - 1] == v14 && *v18 == *v28 && v18[1] == v28[1] )
    {
      v21 = v18 + 2;
      v22 = v28 + 2;
      v33 = a2;
      while ( 1 )
      {
        if ( v22[1] != v21[1] )
        {
          ++v22;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[2] != v21[2] )
        {
          v22 += 2;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[3] != v21[3] )
        {
          v22 += 3;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[4] != v21[4] )
        {
          v22 += 4;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[5] != v21[5] )
        {
          v22 += 5;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[6] != v21[6] )
        {
          v22 += 6;
          a2 = v33;
          goto LABEL_35;
        }
        if ( v22[7] != v21[7] )
          break;
        v24 = v22[8];
        v22 += 8;
        v23 = v24;
        v25 = v21[8];
        v21 += 8;
        v26 = v23 == v25;
        if ( v31 <= (unsigned int)v22 )
          v26 = 0;
        if ( !v26 )
        {
          a2 = v33;
          goto LABEL_35;
        }
      }
      v22 += 7;
      a2 = v33;
LABEL_35:
      v27 = 258 - (v31 - (_DWORD)v22);
      if ( v11 < v27 )
      {
        v19 = v27;
        a1[28] = a2;
        if ( v27 >= v29 )
          break;
        v11 = v27;
        v13 = v28[v27];
        v14 = v28[v27 - 1];
      }
    }
    a2 = *(unsigned __int16 *)(v16 + 2 * (a2 & v17));
    if ( v2 >= a2 )
      break;
    --v12;
  }
  while ( v12 );
  if ( v30 >= v19 )
    return v19;
  else
    return v30;
}
