int __fastcall sub_1323C8(int **a1, int a2, _DWORD *a3, int a4, int ***a5)
{
  int ***v9; // r7
  int v11; // r10
  int **v12; // r1
  int **v13; // r1
  int **v14; // r0
  int v15; // r11
  int v16; // r4
  int v17; // r5
  int v18; // r10
  bool v19; // nf
  int v20; // r11
  int v21; // r5
  int v22; // r9
  int v23; // r6
  int ***v24; // r3
  int v25; // r7
  int ***v26; // r11
  int v27; // r1
  char v28; // r2
  int v29; // r9
  int **v30; // r1
  int *v31; // r5
  int v32; // r9
  int **v33; // r0
  int v34; // r1
  int **v35; // [sp+8h] [bp-94h]
  int v36; // [sp+8h] [bp-94h]
  int i; // [sp+Ch] [bp-90h]
  int v38; // [sp+Ch] [bp-90h]
  int v39; // [sp+10h] [bp-8Ch]
  int v40; // [sp+14h] [bp-88h]
  _DWORD v41[33]; // [sp+18h] [bp-84h] BYREF

  v9 = a5;
  if ( sub_B87C0((int)a3, 4) || sub_B87C0(a2, 4) || sub_B87C0(a4, 4) )
  {
    sub_D0048(3, 126, 66, (int)"crypto/bn/bn_exp.c", 1299);
    return 0;
  }
  v11 = sub_B85BC(a3);
  if ( v11 )
  {
    sub_130BC0((int)a5);
    v35 = sub_130CCC(a5, v12);
    v14 = sub_130CCC(a5, v13);
    v15 = (int)v14;
    v41[0] = v14;
    if ( !v14 || !sub_1337FC(v14, a2, a4, a5) )
    {
LABEL_8:
      v16 = 0;
LABEL_9:
      sub_130C74(v9);
      return v16;
    }
    if ( sub_B85B0(v15) )
    {
      sub_B8930(a1, 0);
      v16 = 1;
      goto LABEL_9;
    }
    if ( v11 >= 672 )
    {
      v38 = 32;
      v39 = 6;
    }
    else if ( v11 > 239 )
    {
      v38 = 16;
      v39 = 5;
    }
    else if ( v11 > 79 )
    {
      v38 = 8;
      v39 = 4;
    }
    else
    {
      if ( v11 <= 23 )
      {
        v39 = 1;
LABEL_19:
        if ( sub_B8930(a1, 1) )
        {
          v36 = v11 - 1;
          v17 = v11 - 1;
          for ( i = 1; ; i = 0 )
          {
            while ( !sub_B83F0(a3, v17) )
            {
              if ( !i && !sub_133F3C(a1, a1, a1, a4, v9) )
                goto LABEL_8;
              if ( !v36 )
              {
LABEL_49:
                v16 = 1;
                goto LABEL_9;
              }
              v17 = --v36;
            }
            if ( v39 == 1 )
            {
              v21 = 1;
              v18 = 0;
            }
            else
            {
              v18 = 0;
              v20 = v17 - 1;
              v19 = v17 - 1 < 0;
              v21 = 1;
              if ( !v19 )
              {
                v22 = 1;
                v40 = a4;
                v23 = 1;
                v24 = v9;
                v25 = v20;
                v26 = v24;
                do
                {
                  v27 = v25--;
                  if ( sub_B83F0(a3, v27) )
                  {
                    v28 = v22 - v18;
                    v18 = v22;
                    v23 = (v23 << v28) | 1;
                  }
                  ++v22;
                }
                while ( v22 != v39 && v25 != -1 );
                v21 = v23;
                a4 = v40;
                v9 = v26;
              }
            }
            v29 = i;
            if ( !i )
              break;
LABEL_33:
            if ( !sub_133F3C(a1, a1, v41[v21 >> 1], a4, v9) )
              goto LABEL_8;
            v36 -= v18 + 1;
            if ( v36 < 0 )
              goto LABEL_49;
            v17 = v36;
          }
          while ( 1 )
          {
            ++v29;
            if ( !sub_133F3C(a1, a1, a1, a4, v9) )
              break;
            if ( v29 > v18 )
              goto LABEL_33;
          }
        }
        goto LABEL_8;
      }
      v38 = 4;
      v39 = 3;
    }
    if ( sub_133F3C(v35, v15, v15, a4, a5) )
    {
      v31 = v41;
      v32 = 1;
      while ( 1 )
      {
        ++v32;
        v33 = sub_130CCC(a5, v30);
        v31[1] = (int)v33;
        if ( !v33 )
          break;
        v34 = *v31++;
        if ( !sub_133F3C(v33, v34, v35, a4, a5) )
          break;
        if ( v38 <= v32 )
          goto LABEL_19;
      }
    }
    goto LABEL_8;
  }
  if ( !sub_B8590(a4, 1) )
    return sub_B8930(a1, 1);
  sub_B8930(a1, 0);
  return 1;
}
