int __fastcall sub_CBEE0(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v5; // r4
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r9
  int v12; // r10
  int *v13; // r11
  int v14; // r0
  int v16; // r0
  int (__fastcall *v18)(_DWORD *, int *, int, int); // [sp+10h] [bp-24h]
  int v19; // [sp+14h] [bp-20h]
  int v20; // [sp+18h] [bp-1Ch]
  int (__fastcall *v21)(_DWORD *, int, int *, int *, int); // [sp+1Ch] [bp-18h]
  int v22; // [sp+20h] [bp-14h]
  int v23; // [sp+24h] [bp-10h]
  int v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]

  v5 = a5;
  if ( a3 == a4 )
    return sub_C6BFC(a1, (_DWORD *)a2, a3);
  v9 = sub_C6CD4(a1, a3);
  v10 = a4;
  if ( !v9 )
  {
    v11 = sub_C6CD4(a1, a4);
    if ( !v11 )
    {
      v12 = 0;
      v23 = a1[10];
      v21 = *(int (__fastcall **)(_DWORD *, int, int *, int *, int))(*a1 + 136);
      v18 = *(int (__fastcall **)(_DWORD *, int *, int, int))(*a1 + 140);
      if ( !a5 )
      {
        v16 = sub_130B08(0);
        v5 = v16;
        if ( !v16 )
          return v11;
        v12 = v16;
      }
      sub_130BC0(v5);
      v13 = (int *)sub_130CCC(v5);
      v22 = sub_130CCC(v5);
      v19 = sub_130CCC(v5);
      v20 = sub_130CCC(v5);
      v24 = sub_130CCC(v5);
      v25 = sub_130CCC(v5);
      v11 = sub_130CCC(v5);
      if ( !v11 )
      {
LABEL_17:
        sub_130C74(v5);
        sub_130B5C(v12);
        return v11;
      }
      if ( a4[5] )
      {
        v14 = sub_B89E4(v22, a3[2]);
        if ( !v14 )
          goto LABEL_22;
        v14 = sub_B89E4(v19, a3[3]);
        if ( !v14 )
          goto LABEL_22;
      }
      else
      {
        v14 = v18(a1, v13, a4[4], v5);
        if ( !v14 )
          goto LABEL_22;
        v14 = v21(a1, v22, (int *)a3[2], v13, v5);
        if ( !v14 )
          goto LABEL_22;
        v14 = v21(a1, (int)v13, v13, (int *)a4[4], v5);
        if ( !v14 )
          goto LABEL_22;
        if ( !v21(a1, v19, (int *)a3[3], v13, v5) )
        {
          v11 = 0;
          goto LABEL_17;
        }
      }
      if ( a3[5] )
      {
        v14 = sub_B89E4(v20, a4[2]);
        if ( !v14 )
          goto LABEL_22;
        v14 = sub_B89E4(v24, a4[3]);
        if ( !v14 )
          goto LABEL_22;
      }
      else
      {
        v14 = v18(a1, v13, a3[4], v5);
        if ( !v14 )
          goto LABEL_22;
        v14 = v21(a1, v20, (int *)a4[2], v13, v5);
        if ( !v14 )
          goto LABEL_22;
        v14 = v21(a1, (int)v13, v13, (int *)a3[4], v5);
        if ( !v14 )
          goto LABEL_22;
        if ( !v21(a1, v24, (int *)a4[3], v13, v5) )
        {
          v11 = 0;
          goto LABEL_17;
        }
      }
      v14 = sub_133F18(v25, v22, v20, v23);
      if ( !v14 )
        goto LABEL_22;
      v14 = sub_133F18(v11, v19, v24, v23);
      if ( !v14 )
        goto LABEL_22;
      if ( sub_B85B0(v25) )
      {
        if ( sub_B85B0(v11) )
        {
          sub_130C74(v5);
          v5 = 0;
          v11 = sub_C6BFC(a1, (_DWORD *)a2, a3);
        }
        else
        {
          sub_B8930(*(int ***)(a2 + 16), 0);
          v11 = 1;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_17;
      }
      v14 = sub_133AF8(v22, v22, v20, v23);
      if ( !v14 )
        goto LABEL_22;
      v14 = sub_133AF8(v19, v19, v24, v23);
      if ( !v14 )
        goto LABEL_22;
      if ( a3[5] )
      {
        if ( a4[5] )
        {
          if ( !sub_B89E4(*(_DWORD *)(a2 + 16), v25) )
          {
            v11 = 0;
            goto LABEL_17;
          }
          goto LABEL_41;
        }
        v14 = sub_B89E4((int)v13, a4[4]);
        if ( !v14 )
        {
LABEL_22:
          v11 = v14;
          goto LABEL_17;
        }
      }
      else if ( a4[5] )
      {
        if ( !sub_B89E4((int)v13, a3[4]) )
        {
          v11 = 0;
          goto LABEL_17;
        }
      }
      else if ( !v21(a1, (int)v13, (int *)a3[4], (int *)a4[4], v5) )
      {
        v11 = 0;
        goto LABEL_17;
      }
      v14 = v21(a1, *(_DWORD *)(a2 + 16), v13, (int *)v25, v5);
      if ( v14 )
      {
LABEL_41:
        *(_DWORD *)(a2 + 20) = 0;
        v14 = v18(a1, v13, v11, v5);
        if ( v14 )
        {
          v14 = v18(a1, (int *)v24, v25, v5);
          if ( v14 )
          {
            v14 = v21(a1, v20, (int *)v22, (int *)v24, v5);
            if ( v14 )
            {
              v14 = sub_133F18(*(_DWORD *)(a2 + 8), v13, v20, v23);
              if ( v14 )
              {
                v14 = sub_133FE4(v13, *(_DWORD *)(a2 + 8), v23);
                if ( v14 )
                {
                  v14 = sub_133F18(v13, v20, v13, v23);
                  if ( v14 )
                  {
                    v14 = v21(a1, (int)v13, v13, (int *)v11, v5);
                    if ( v14 )
                    {
                      v14 = v21(a1, v25, (int *)v24, (int *)v25, v5);
                      if ( v14 )
                      {
                        v14 = v21(a1, v22, (int *)v19, (int *)v25, v5);
                        if ( v14 )
                        {
                          if ( sub_133F18(v13, v13, v22, v23) )
                            v11 = (!sub_B870C((int)v13) || BN_add(v13, v13, v23))
                               && sub_BA324(*(_DWORD *)(a2 + 12), v13) != 0;
                          else
                            v11 = 0;
                          goto LABEL_17;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_22;
      }
      goto LABEL_22;
    }
    v10 = a3;
  }
  return sub_C6594((_DWORD *)a2, v10);
}
