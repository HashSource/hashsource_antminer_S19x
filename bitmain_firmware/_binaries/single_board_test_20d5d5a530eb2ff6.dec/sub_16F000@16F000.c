void *__fastcall sub_16F000(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  void *v9; // r4
  int *v10; // r0
  int *v11; // r0
  void *result; // r0
  int v13; // r2

  v8 = sub_E0740((void *)0xC);
  v9 = v8;
  if ( v8 )
  {
    *v8 = a2;
    v8[1] = a3;
    if ( a1 )
    {
      if ( sub_EAC84(*(_DWORD *)(a2 + 4)) == (char *)746 )
      {
        if ( *(_DWORD *)(a1 + 8) )
        {
LABEL_16:
          policy_node_free(v9);
          return 0;
        }
        *(_DWORD *)(a1 + 8) = v9;
      }
      else
      {
        v10 = *(int **)(a1 + 4);
        if ( !v10 )
        {
          v10 = (int *)sub_16EF78();
          v13 = 83;
          *(_DWORD *)(a1 + 4) = v10;
          if ( !v10 )
            goto LABEL_15;
        }
        if ( !sub_10BD3C(v10, (int)v9) )
        {
          v13 = 87;
LABEL_15:
          sub_D0048(34, 168, 65, (int)"crypto/x509v3/pcy_node.c", v13);
          goto LABEL_16;
        }
      }
    }
    if ( a4 )
    {
      v11 = *(int **)(a4 + 8);
      if ( !v11 )
      {
        v11 = (int *)sub_10BFCC();
        *(_DWORD *)(a4 + 8) = v11;
        if ( !v11 )
        {
          v13 = 97;
          goto LABEL_15;
        }
      }
      if ( !sub_10BD3C(v11, a2) )
      {
        v13 = 101;
        goto LABEL_15;
      }
    }
    result = v9;
    if ( a3 )
    {
      result = v9;
      ++*(_DWORD *)(a3 + 8);
    }
  }
  else
  {
    sub_D0048(34, 168, 65, (int)"crypto/x509v3/pcy_node.c", 68);
    return 0;
  }
  return result;
}
