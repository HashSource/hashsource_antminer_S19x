int __fastcall sub_17579C(int **a1, int *a2, int *a3, int ***a4)
{
  int **v6; // r11
  int **v8; // r1
  int *v9; // r8
  int **v10; // r1
  int **v11; // r6
  int **v12; // r1
  int *v13; // r7
  _BOOL4 v14; // r9
  int **v16; // r1
  int **v17; // r1
  int **v18; // r10
  int **v19; // r1
  int **v20; // r0
  int *v21; // r9
  int *v22; // r11
  int v23; // r8
  int v24; // r9
  _BOOL4 v25; // r0
  bool v26; // zf
  int v27; // r0
  int **v28; // [sp+Ch] [bp-10h]
  int **v29; // [sp+10h] [bp-Ch]
  int **v30; // [sp+10h] [bp-Ch]
  int v31; // [sp+14h] [bp-8h]

  if ( *a3 )
  {
    v6 = a1;
    sub_130BC0((int)a4);
    v9 = (int *)sub_130CCC(a4, v8);
    v11 = sub_130CCC(a4, v10);
    v13 = (int *)sub_130CCC(a4, v12);
    if ( v13 && sub_174D98((int)v9, a2, a3) )
    {
      if ( sub_B85B0((int)v9) )
      {
        sub_B8930(v6, 0);
        v14 = 1;
        goto LABEL_5;
      }
      if ( (*a3 & 1) != 0 )
      {
        if ( sub_B89E4((int)v11, (int)v9) )
        {
          if ( *a3 <= 2 )
          {
LABEL_33:
            if ( sub_174FF4((int)v13, v11, a3, a4) && sub_174BC8(v13, (int *)v11, v13) )
            {
              if ( !sub_B82F8(v13, v9) )
              {
                v14 = sub_B89E4((int)v6, (int)v11) != 0;
                goto LABEL_5;
              }
              sub_D0048(3, 135, 116, (int)"crypto/bn/bn_gf2m.c", 1066);
            }
          }
          else
          {
            v24 = 1;
            while ( 1 )
            {
              ++v24;
              if ( !sub_174FF4((int)v11, v11, a3, a4)
                || !sub_174FF4((int)v11, v11, a3, a4)
                || !sub_174BC8((int *)v11, (int *)v11, v9) )
              {
                break;
              }
              if ( v24 > (*a3 - 1) / 2 )
                goto LABEL_33;
            }
          }
        }
      }
      else
      {
        v29 = sub_130CCC(a4, v16);
        v18 = sub_130CCC(a4, v17);
        v20 = sub_130CCC(a4, v19);
        if ( v20 )
        {
          v31 = 0;
          v21 = (int *)v29;
          v30 = v6;
          v22 = (int *)v20;
          v28 = (int **)v9;
          while ( sub_136480((int **)v21, *a3, 0, 0) )
          {
            if ( !sub_174D98((int)v21, v21, a3) )
              break;
            sub_B8930(v11, 0);
            if ( !sub_B89E4((int)v13, (int)v21) )
              break;
            if ( *a3 > 1 )
            {
              v23 = 1;
              do
              {
                ++v23;
                if ( !sub_174FF4((int)v11, v11, a3, a4)
                  || !sub_174FF4((int)v18, v13, a3, a4)
                  || !sub_17513C((int)v22, v18, v28, a3, a4)
                  || !sub_174BC8((int *)v11, (int *)v11, v22)
                  || !sub_174BC8(v13, (int *)v18, v21) )
                {
                  goto LABEL_4;
                }
              }
              while ( v23 < *a3 );
            }
            ++v31;
            v25 = sub_B85B0((int)v13);
            v26 = v31 == 50;
            if ( v31 != 50 )
              v26 = !v25;
            v27 = !v26;
            if ( v26 )
            {
              v14 = v27;
              v9 = (int *)v28;
              v6 = v30;
              if ( !sub_B85B0((int)v13) )
                goto LABEL_33;
              sub_D0048(3, 135, 113, (int)"crypto/bn/bn_gf2m.c", 1056);
              goto LABEL_5;
            }
          }
        }
      }
    }
LABEL_4:
    v14 = 0;
LABEL_5:
    sub_130C74(a4);
    return v14;
  }
  sub_B8930(a1, 0);
  return 1;
}
