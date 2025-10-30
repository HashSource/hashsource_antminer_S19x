int __fastcall sub_131618(int **a1, int a2, _DWORD *a3, int a4, int ***a5)
{
  int v10; // r6
  int **v11; // r1
  int **v12; // r1
  int **v13; // r9
  int v14; // r4
  int v15; // r10
  int v16; // r11
  int v17; // r9
  int v18; // r8
  int v19; // r6
  int v20; // r1
  char v21; // r1
  int v22; // r6
  int v23; // r11
  int **v24; // r1
  _DWORD *v25; // r9
  int v26; // r10
  int **v27; // r0
  int **v28; // [sp+8h] [bp-C4h]
  int i; // [sp+8h] [bp-C4h]
  int v30; // [sp+Ch] [bp-C0h]
  _BYTE v31[52]; // [sp+14h] [bp-B8h] BYREF
  _DWORD v32[33]; // [sp+48h] [bp-84h] BYREF

  if ( sub_B87C0((int)a3, 4) || sub_B87C0(a2, 4) || sub_B87C0(a4, 4) )
  {
    sub_D0048(3, 125, 66, (int)"crypto/bn/bn_exp.c", 175);
    return 0;
  }
  v10 = sub_B85BC(a3);
  if ( v10 )
  {
    sub_136750(v31);
    sub_130BC0((int)a5);
    v28 = sub_130CCC(a5, v11);
    v13 = sub_130CCC(a5, v12);
    v32[0] = v13;
    if ( v13 )
    {
      if ( *(_DWORD *)(a4 + 12) )
      {
        if ( !sub_B89E4((int)v28, a4) )
          goto LABEL_11;
        v28[3] = 0;
        if ( sub_1367E4(v31, v28, a5) <= 0 )
          goto LABEL_11;
      }
      else if ( sub_1367E4(v31, a4, a5) <= 0 )
      {
        goto LABEL_11;
      }
      if ( sub_1337FC(v13, a2, a4, a5) )
      {
        if ( sub_B85B0((int)v13) )
        {
          sub_B8930(a1, 0);
          v14 = 1;
          goto LABEL_12;
        }
        if ( v10 >= 672 )
        {
          v23 = 32;
          v30 = 6;
        }
        else if ( v10 > 239 )
        {
          v23 = 16;
          v30 = 5;
        }
        else if ( v10 > 79 )
        {
          v23 = 8;
          v30 = 4;
        }
        else
        {
          if ( v10 <= 23 )
          {
            v30 = 1;
LABEL_24:
            if ( sub_B8930(a1, 1) )
            {
              v15 = v10 - 1;
              for ( i = 1; ; i = 0 )
              {
                while ( !sub_B83F0(a3, v15) )
                {
                  if ( !i && !sub_1369D8(a1, a1, a1, v31, a5) )
                    goto LABEL_11;
                  if ( !v15 )
                  {
LABEL_51:
                    v14 = 1;
                    goto LABEL_12;
                  }
                  --v15;
                }
                if ( v30 == 1 )
                {
                  v17 = 1;
                  v18 = 0;
                }
                else
                {
                  v16 = v15 - 1;
                  v17 = 1;
                  v18 = 0;
                  if ( v15 - 1 >= 0 )
                  {
                    v19 = 1;
                    do
                    {
                      v20 = v16--;
                      if ( sub_B83F0(a3, v20) )
                      {
                        v21 = v19 - v18;
                        v18 = v19;
                        v17 = (v17 << v21) | 1;
                      }
                      ++v19;
                    }
                    while ( v19 != v30 && v16 != -1 );
                  }
                }
                v22 = i;
                if ( !i )
                  break;
LABEL_37:
                if ( !sub_1369D8(a1, a1, v32[v17 >> 1], v31, a5) )
                  goto LABEL_11;
                v15 -= v18 + 1;
                if ( v15 < 0 )
                  goto LABEL_51;
              }
              while ( 1 )
              {
                ++v22;
                if ( !sub_1369D8(a1, a1, a1, v31, a5) )
                  break;
                if ( v22 > v18 )
                  goto LABEL_37;
              }
            }
            goto LABEL_11;
          }
          v23 = 4;
          v30 = 3;
        }
        if ( sub_1369D8(v28, v13, v13, v31, a5) )
        {
          v25 = v32;
          v26 = 1;
          while ( 1 )
          {
            ++v26;
            v27 = sub_130CCC(a5, v24);
            v25[1] = v27;
            if ( !v27 )
              break;
            if ( !sub_1369D8(v27, *v25++, v28, v31, a5) )
              break;
            if ( v26 >= v23 )
              goto LABEL_24;
          }
        }
      }
    }
LABEL_11:
    v14 = 0;
LABEL_12:
    sub_130C74(a5);
    sub_1367B4(v31);
    return v14;
  }
  if ( !sub_B8590(a4, 1) )
    return sub_B8930(a1, 1);
  sub_B8930(a1, 0);
  return 1;
}
