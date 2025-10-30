int *__fastcall sub_DB6A8(int a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r6
  int *v5; // r0
  int *v6; // r4
  int (*v7)(void); // r3

  if ( a1 == -1 )
    return 0;
  v3 = (int)a2;
  if ( a2 )
  {
    if ( !sub_CDD6C(a2) )
    {
      sub_D0048(6, 157, 38, (int)"crypto/evp/pmeth_lib.c", 119);
      return 0;
    }
    goto LABEL_4;
  }
  v3 = sub_CF2F0(a1);
  if ( v3 )
  {
LABEL_4:
    v4 = sub_CF304(v3, a1);
    goto LABEL_5;
  }
  v4 = sub_DB290(a1);
LABEL_5:
  if ( v4 )
  {
    v5 = (int *)sub_E0740(40, "crypto/evp/pmeth_lib.c", 144);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(int (**)(void))(v4 + 8);
      v5[1] = v3;
      *v5 = v4;
      v5[4] = 0;
      v5[2] = 0;
      if ( v7 && v7() <= 0 )
      {
        *v6 = 0;
        sub_DB4BC((int)v6);
        return 0;
      }
      else
      {
        return v6;
      }
    }
    else
    {
      sub_CDDF8(v3);
      sub_D0048(6, 157, 65, (int)"crypto/evp/pmeth_lib.c", 149);
      return 0;
    }
  }
  else
  {
    sub_CDDF8(v3);
    sub_D0048(6, 157, 156, (int)"crypto/evp/pmeth_lib.c", 140);
    return 0;
  }
}
