bool __fastcall sub_133164(int *a1, int **a2, int **a3, int ***a4)
{
  int v8; // r4
  int **v9; // r1
  int *v10; // r9
  int **v11; // r1
  int **v12; // r0
  int *v13; // r8
  _BOOL4 v14; // r4
  int v16; // r0
  int v17; // r0
  int v18; // r7
  int v19; // lr
  int v20; // r0
  int v21; // r1
  int *v22; // r11
  int v23; // r12
  int v24; // r10
  int v25; // r5
  int v26; // t1
  int v27; // r2
  int v28; // t1
  unsigned int v29; // r3
  _DWORD *v30; // r3
  int v31; // r10
  int v32; // r7
  int v33; // r0
  int v34; // r0
  int v35; // r11
  int v36; // r3
  int v37; // r0
  int v38; // r0
  int v39; // r11
  int v40; // [sp+0h] [bp-Ch]
  int v41; // [sp+4h] [bp-8h]

  if ( sub_B85B0((int)a3) )
  {
    v17 = sub_B89E4((int)a1, (int)a2);
    a1[3] = 0;
    return v17 != 0;
  }
  else
  {
    v8 = sub_B85B0((int)a2);
    if ( !v8 )
    {
      sub_130BC0((int)a4);
      v10 = (int *)sub_130CCC(a4, v9);
      v12 = sub_130CCC(a4, v11);
      v13 = (int *)v12;
      if ( v12 && sub_BA234(v12, a3) && sub_BA234((int **)a1, a2) )
      {
        v18 = a1[2];
        if ( v18 > 0 )
        {
          v19 = v13[2];
          if ( v19 > 0 )
          {
            v20 = 0;
            v21 = 1;
            v22 = a1;
            v23 = *a1 - 4;
            v24 = *v13 - 4;
            do
            {
              v26 = *(_DWORD *)(v23 + 4);
              v23 += 4;
              v25 = v26;
              v27 = 64;
              v28 = *(_DWORD *)(v24 + 4);
              v24 += 4;
              v29 = ~(v28 | v25);
              do
              {
                --v27;
                v21 &= v29;
                v8 += v21;
                v29 >>= 1;
              }
              while ( v27 );
              ++v20;
            }
            while ( v18 != v20 && v19 != v20 );
            a1 = v22;
          }
        }
        if ( sub_BA7EC(a1, a1, v8) && sub_BA7EC(v13, v13, v8) )
        {
          v30 = (_DWORD *)v13[1];
          if ( (int)v30 < a1[1] )
            v30 = (_DWORD *)a1[1];
          v31 = (int)v30 + 1;
          if ( sub_B89D8((int)a1, (int)v30 + 1) )
          {
            if ( sub_B89D8((int)v13, v31) && sub_B89D8((int)v10, v31) )
            {
              sub_B84C4(!(*(_BYTE *)*a1 & 1), (int)a1, (int)v13, v31);
              v32 = sub_B85BC(a1);
              v33 = sub_B85BC(v13);
              if ( v33 < v32 )
                v33 = v32;
              v34 = 3 * v33;
              if ( v34 < -3 )
              {
LABEL_35:
                a1[3] = 0;
                if ( sub_BA5F8((void **)a1, a1, v8) )
                {
                  v14 = sub_BA324((int)a1, a1) != 0;
                  goto LABEL_6;
                }
              }
              else
              {
                v35 = 1;
                v41 = v34 + 4;
                v36 = 0;
                while ( 1 )
                {
                  v37 = *(_DWORD *)*v13;
                  v40 = v36 + 1;
                  if ( v13[1] < 1 )
                    LOBYTE(v37) = 0;
                  v38 = (unsigned __int8)v37 & (v35 > 0);
                  a1[3] ^= v38;
                  v39 = -v38 & -v35 | (v38 - 1) & v35;
                  sub_B84C4(v38, (int)a1, (int)v13, v31);
                  v35 = v39 + 1;
                  if ( !BN_add(v10, v13, a1) )
                    break;
                  sub_B84C4(*(_DWORD *)*v13 & 1 & ~((v13[1] - 1) >> 31), (int)v13, (int)v10, v31);
                  if ( !sub_BA324((int)v13, v13) )
                    break;
                  v36 = v40;
                  if ( v40 == v41 )
                    goto LABEL_35;
                }
              }
            }
          }
        }
      }
      v14 = 0;
LABEL_6:
      sub_130C74(a4);
      return v14;
    }
    v16 = sub_B89E4((int)a1, (int)a3);
    a1[3] = 0;
    return v16 != 0;
  }
}
