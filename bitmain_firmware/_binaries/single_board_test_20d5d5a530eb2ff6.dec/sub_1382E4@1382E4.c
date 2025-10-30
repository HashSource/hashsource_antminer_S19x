int __fastcall sub_1382E4(int a1)
{
  _DWORD *v2; // r7
  int result; // r0
  int v4; // r8
  int v5; // r4
  _DWORD *v6; // r5
  int *v7; // r0
  bool v8; // cc
  unsigned int v9; // r1
  int *v10; // r6
  int v11; // r3
  void *v12; // r0
  size_t v13; // r1
  void *v14; // r0
  int *v15; // r5
  int v16; // r4
  unsigned int v17; // r1
  int v18; // r3
  int v19; // r4
  unsigned int v20; // r1
  int v21; // r4
  unsigned int v22; // r1
  int v23; // r0

  v2 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 12);
  result = sub_17916C(v2);
  v4 = result;
  if ( result && v2[3] )
  {
    v5 = 0;
    v6 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 8);
    while ( 1 )
    {
      v8 = v5 < sub_10C010((int)v6);
      v9 = v5++;
      if ( !v8 )
        break;
      v7 = (int *)sub_10C01C(v6, v9);
      if ( sub_138094(a1, v7) <= 0 )
      {
        sub_D0048(46, 125, 116, (int)"crypto/cms/cms_env.c", 886);
        v13 = v2[5];
        v14 = (void *)v2[4];
        v2[3] = 0;
        sub_E0758(v14, v13, (size_t)"crypto/cms/cms_env.c");
        v2[4] = 0;
        v2[5] = 0;
        BIO_vfree_0(v4);
        return 0;
      }
    }
    v10 = *(int **)(a1 + 4);
    v11 = *v10;
    if ( *v10 <= 3 )
    {
      v15 = (int *)v10[1];
      if ( v15 )
      {
        v16 = 0;
        while ( 1 )
        {
          v8 = v16 < sub_10C010(*v15);
          v17 = v16++;
          if ( !v8 )
            break;
          v18 = *(_DWORD *)sub_10C01C((_DWORD *)*v15, v17);
          if ( v18 == 4 )
            goto LABEL_22;
          if ( v18 == 3 && *v10 <= 2 )
            *v10 = 3;
        }
        v19 = 0;
        do
        {
          v8 = v19 < sub_10C010(v15[1]);
          v20 = v19++;
          if ( !v8 )
          {
            v11 = *v10;
            goto LABEL_26;
          }
        }
        while ( *(_DWORD *)sub_10C01C((_DWORD *)v15[1], v20) != 1 );
        v18 = 4;
      }
      else
      {
LABEL_26:
        if ( v11 > 2 )
          goto LABEL_7;
        v21 = 0;
        while ( 1 )
        {
          v8 = v21 < sub_10C010(v10[2]);
          v22 = v21++;
          if ( !v8 )
            break;
          v23 = sub_10C01C((_DWORD *)v10[2], v22);
          if ( (unsigned int)(*(_DWORD *)v23 - 3) <= 1 )
          {
            *v10 = 3;
            goto LABEL_7;
          }
          if ( *(_DWORD *)v23 || **(_DWORD **)(v23 + 4) )
            *v10 = 2;
        }
        if ( v10[1] || (v18 = v10[4]) != 0 )
        {
          *v10 = 2;
          goto LABEL_7;
        }
        if ( *v10 == 2 )
          goto LABEL_7;
      }
LABEL_22:
      *v10 = v18;
    }
LABEL_7:
    v12 = (void *)v2[4];
    v2[3] = 0;
    sub_E0758(v12, v2[5], (size_t)"crypto/cms/cms_env.c");
    v2[4] = 0;
    v2[5] = 0;
    return v4;
  }
  return result;
}
