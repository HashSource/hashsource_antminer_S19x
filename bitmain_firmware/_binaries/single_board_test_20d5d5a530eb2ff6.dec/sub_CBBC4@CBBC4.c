int __fastcall sub_CBBC4(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r9
  int result; // r0
  int *v11; // r8
  int (__fastcall *v12)(int *, int, int *, int); // r6
  int (__fastcall *v13)(int *, int, int, int); // r4
  int v14; // r4

  if ( sub_B85BC(a2) > 2 && sub_B870C((int)a2) )
  {
    v9 = 0;
    result = a5;
    if ( a5 )
    {
LABEL_4:
      sub_130BC0(result);
      v11 = (int *)sub_130CCC(a5);
      if ( !v11 )
        goto LABEL_17;
      if ( !sub_B89E4(a1[10], (int)a2) )
        goto LABEL_17;
      sub_B86BC(a1[10], 0);
      if ( !sub_1337FC(v11, a3, a2, a5) )
        goto LABEL_17;
      v12 = *(int (__fastcall **)(int *, int, int *, int))(*a1 + 152);
      if ( v12 )
      {
        if ( !v12(a1, a1[17], v11, a5) )
          goto LABEL_17;
      }
      else if ( !sub_B89E4(a1[17], (int)v11) )
      {
        goto LABEL_17;
      }
      if ( sub_1337FC(a1[18], a4, a2, a5) )
      {
        v13 = *(int (__fastcall **)(int *, int, int, int))(*a1 + 152);
        if ( !v13 || v13(a1, a1[18], a1[18], a5) )
        {
          if ( sub_BAD28((int)v11, 3u) )
          {
            v14 = 1;
            a1[19] = sub_B8354(v11, (int *)a1[10]) == 0;
LABEL_18:
            sub_130C74(a5);
            sub_130B5C(v9);
            return v14;
          }
        }
      }
LABEL_17:
      v14 = 0;
      goto LABEL_18;
    }
    result = sub_130B08(0);
    a5 = result;
    if ( result )
    {
      v9 = result;
      goto LABEL_4;
    }
  }
  else
  {
    sub_D0048(16, 166, 103, "crypto/ec/ecp_smpl.c", 144);
    return 0;
  }
  return result;
}
