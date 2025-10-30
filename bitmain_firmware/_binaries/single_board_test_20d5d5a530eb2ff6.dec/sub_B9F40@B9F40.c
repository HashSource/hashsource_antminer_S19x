int __fastcall sub_B9F40(int **a1, int **a2, int **a3, int a4)
{
  int v4; // r4
  int v5; // r5
  bool v6; // zf
  int v11; // r11
  bool v12; // zf
  int *v13; // r9
  bool v14; // zf
  int v15; // r3
  bool v16; // cc
  bool v17; // r0
  int v18; // r0
  bool v19; // cc
  int *v20; // r3
  int *v21; // r1
  int v22; // r0
  int v24; // r0
  int *v25; // r2
  int *v26; // r1
  int v27; // [sp+14h] [bp-10h]
  int v28; // [sp+14h] [bp-10h]
  int v29; // [sp+14h] [bp-10h]
  int *v30; // [sp+18h] [bp-Ch]
  int v31; // [sp+1Ch] [bp-8h]
  int v32; // [sp+1Ch] [bp-8h]

  v4 = (int)a2[1];
  v5 = (int)a3[1];
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  if ( !v6 )
  {
    v11 = v4 + v5;
    sub_130BC0(a4);
    v12 = a3 == a1;
    if ( a3 != a1 )
      v12 = a2 == a1;
    if ( v12 )
    {
      v24 = sub_130CCC(a4);
      v13 = (int *)v24;
      if ( !v24 )
        goto LABEL_35;
    }
    else
    {
      v13 = (int *)a1;
    }
    v14 = v4 == 8;
    if ( v4 == 8 )
      v14 = v5 == 8;
    v15 = v4 - v5;
    if ( v14 )
    {
      if ( sub_B89D8((int)v13, 16) )
      {
        v25 = *a3;
        v26 = *a2;
        v13[1] = 16;
        sub_12FCE4(*v13, v26, v25);
        goto LABEL_27;
      }
    }
    else
    {
      v16 = v4 <= 15;
      if ( v4 > 15 )
        v16 = v5 <= 15;
      if ( v16 || (unsigned int)(v15 + 1) > 2 )
      {
        if ( sub_B89D8((int)v13, v4 + v5) )
        {
          v20 = *a3;
          v21 = *a2;
          v22 = *v13;
          v13[1] = v11;
          sub_B9890(v22, v21, v4, v20, v5);
LABEL_27:
          if ( v13 == (int *)a1 )
            v4 = 1;
          v13[3] = (unsigned int)a3[3] ^ (unsigned int)a2[3];
          if ( v13 != (int *)a1 )
            v4 = sub_B89E4((int)a1, (int)v13) != 0;
          goto LABEL_31;
        }
      }
      else
      {
        if ( v15 == -1 )
          v17 = sub_B8208(v5);
        else
          v17 = sub_B8208(v4);
        v27 = 1 << (v17 - 1);
        v18 = sub_130CCC(a4);
        v30 = (int *)v18;
        if ( v18 )
        {
          v19 = v5 <= v27;
          if ( v5 <= v27 )
            v19 = v4 <= v27;
          if ( v19 )
          {
            v32 = v27;
            v29 = 4 * v27;
            if ( sub_B89D8(v18, v29) && sub_B89D8((int)v13, v29) )
            {
              v4 -= v32;
              sub_B9930(*v13, *a2, *a3, v32, v4, v5 - v32, *v30);
              goto LABEL_40;
            }
          }
          else
          {
            v31 = v27;
            v28 = 8 * v27;
            if ( sub_B89D8(v18, v28) && sub_B89D8((int)v13, v28) )
            {
              v4 -= v31;
              sub_B9C28(*v13, *a2, *a3, v31, v4, v5 - v31, (_DWORD *)*v30);
LABEL_40:
              v13[1] = v11;
              goto LABEL_27;
            }
          }
        }
      }
    }
LABEL_35:
    v4 = 0;
LABEL_31:
    sub_130C74(a4);
    return v4;
  }
  sub_B8930(a1, 0);
  return 1;
}
