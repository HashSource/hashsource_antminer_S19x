bool __fastcall sub_134F20(int *a1, int a2, int ***a3, int a4, _DWORD *a5)
{
  _BOOL4 v9; // r8
  int *v11; // r0
  int ***v12; // r8
  int **v13; // r1
  int **v14; // r10
  int **v15; // r1
  int **v16; // r1
  int **v17; // r1
  int *v18; // r11
  int *v19; // r9
  int v20; // r4
  unsigned __int16 *v21; // r8
  int v22; // r9
  int v23; // t1
  int v24; // r0
  int v25; // r9
  int *v26; // r0
  int v27; // r5
  int **v28; // [sp+Ch] [bp-18h]
  int **v29; // [sp+10h] [bp-14h]
  int ***v30; // [sp+14h] [bp-10h]
  int v31; // [sp+18h] [bp-Ch]
  int v32; // [sp+1Ch] [bp-8h]

  if ( !sub_B86F0((int)a1, 2) )
  {
    v9 = sub_B86F0((int)a1, 3);
    if ( !v9 )
    {
      if ( !sub_B870C((int)a1) )
        return v9;
      v11 = (int *)sub_B81FC();
      if ( sub_B8354(a1, v11) <= 0 )
        return v9;
      if ( !a2 )
      {
        if ( sub_B85BC(a1) <= 3746 )
        {
          if ( sub_B85BC(a1) <= 1344 )
          {
            if ( sub_B85BC(a1) < 476 )
            {
              if ( sub_B85BC(a1) < 400 )
              {
                if ( sub_B85BC(a1) <= 346 )
                {
                  if ( sub_B85BC(a1) < 308 )
                  {
                    if ( sub_B85BC(a1) <= 54 )
                      a2 = 34;
                    else
                      a2 = 27;
                  }
                  else
                  {
                    a2 = 8;
                  }
                }
                else
                {
                  a2 = 7;
                }
              }
              else
              {
                a2 = 6;
              }
            }
            else
            {
              a2 = 5;
            }
          }
          else
          {
            a2 = 4;
          }
        }
        else
        {
          a2 = 3;
        }
      }
      if ( a4 )
      {
        v21 = (unsigned __int16 *)&unk_1CB504;
        while ( 1 )
        {
          v23 = v21[1];
          ++v21;
          v22 = v23;
          v24 = sub_BAC74((int)a1, v23);
          if ( v24 == -1 )
            break;
          if ( !v24 )
            return sub_B86F0((int)a1, v22);
          if ( &unk_1CC502 == (_UNKNOWN *)v21 )
          {
            if ( !sub_134EE0(a5, 1, -1) )
              break;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        v12 = a3;
        if ( a3 || (v12 = (int ***)sub_130B08()) != 0 )
        {
          sub_130BC0((int)v12);
          v14 = sub_130CCC(v12, v13);
          v28 = sub_130CCC(v12, v15);
          v29 = sub_130CCC(v12, v16);
          v18 = (int *)sub_130CCC(v12, v17);
          if ( !v18 )
            goto LABEL_13;
          if ( !sub_B89E4((int)v14, (int)a1) )
            goto LABEL_13;
          if ( !sub_BACA0(v14, 1u) )
            goto LABEL_13;
          if ( !sub_B89E4((int)v28, (int)a1) )
            goto LABEL_13;
          v25 = 1;
          if ( !sub_BACA0(v28, 3u) )
            goto LABEL_13;
          while ( !sub_B83F0(v14, v25) )
            ++v25;
          v32 = v25;
          if ( sub_BA7EC(v29, v14, v25) && (v26 = sub_B9478(), (v19 = v26) != 0) )
          {
            if ( sub_B94F0((int)v26, (int **)a1, (int)v12) )
            {
              if ( a2 <= 0 )
              {
LABEL_63:
                v20 = 1;
              }
              else
              {
                v30 = a3;
                v31 = 0;
                while ( 1 )
                {
                  if ( !sub_1365E8(v18, v28)
                    || !sub_BAD28((int)v18, 2u)
                    || !BN_mod_exp_mont(v18, v18, v29, (int **)a1, v12, v19) )
                  {
LABEL_58:
                    a3 = v30;
                    goto LABEL_59;
                  }
                  if ( !sub_B86D8((int)v18) && sub_B8354(v18, (int *)v14) )
                    break;
LABEL_43:
                  if ( !sub_134EE0(a5, 1, v31) )
                    goto LABEL_58;
                  if ( ++v31 == a2 )
                  {
                    a3 = v30;
                    goto LABEL_63;
                  }
                }
                v27 = v32;
                while ( --v27 )
                {
                  if ( !sub_133F3C(v18, (int **)v18, (int **)v18, a1, v12) )
                    goto LABEL_58;
                  if ( sub_B86D8((int)v18) )
                    break;
                  if ( !sub_B8354(v18, (int *)v14) )
                    goto LABEL_43;
                }
                a3 = v30;
                v20 = 0;
              }
            }
            else
            {
LABEL_59:
              v20 = -1;
            }
          }
          else
          {
LABEL_13:
            v19 = 0;
            v20 = -1;
          }
          sub_130C74(v12);
          if ( !a3 )
            sub_130B5C((void **)v12);
          goto LABEL_16;
        }
      }
      v20 = -1;
      v19 = 0;
LABEL_16:
      v9 = v20;
      sub_B94B4(v19);
      return v9;
    }
  }
  return 1;
}
