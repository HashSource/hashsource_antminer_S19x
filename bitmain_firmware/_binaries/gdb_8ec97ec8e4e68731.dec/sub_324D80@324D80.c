void __fastcall sub_324D80(unsigned int *a1, unsigned int a2)
{
  _DWORD *v3; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r8
  unsigned int v7; // r5
  _DWORD *v8; // r9
  _DWORD *v9; // r4
  _DWORD *v10; // r7
  int v11; // r3
  _DWORD **v12; // r5
  _DWORD *v13; // r10
  void *v14; // r0
  _DWORD *v15; // r8

  v3 = (_DWORD *)a1[2];
  if ( !v3 )
LABEL_9:
    abort();
  v5 = v3;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v5[1];
      if ( !v7 )
        break;
      if ( (_DWORD *)a2 == v5 + 2 )
      {
        v9 = (_DWORD *)*v5;
        if ( v3 != v9 )
        {
          do
          {
            v10 = (_DWORD *)*v3;
            free(v3);
            v3 = v10;
          }
          while ( v9 != v10 );
        }
        v11 = v9[1];
        a1[2] = (unsigned int)v9;
        if ( v11 )
        {
          do
            v9 = (_DWORD *)*v9;
          while ( v9[1] );
        }
        *a1 = v7;
        a1[1] = (unsigned int)v9 - v7 + 4064;
        return;
      }
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        goto LABEL_9;
    }
    if ( (unsigned int)v5 < a2 )
    {
      v8 = v5 + 1016;
      if ( (unsigned int)(v5 + 1016) > a2 )
        break;
    }
    v6 = v5;
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      goto LABEL_9;
  }
  if ( v5 == v3 )
    goto LABEL_21;
  v12 = (_DWORD **)*v3;
  if ( !v6 )
  {
    v13 = v3;
    goto LABEL_25;
  }
  if ( v3 == v6 )
  {
    v13 = (_DWORD *)*v3;
  }
  else
  {
    free(v3);
    if ( v5 == v12 )
      goto LABEL_21;
    while ( 1 )
    {
      v13 = *v12;
      v14 = v12;
      if ( v6 == v12 )
        break;
      v12 = (_DWORD **)*v12;
      free(v14);
      if ( v5 == v13 )
        goto LABEL_21;
    }
  }
  free(v6);
  if ( v5 != v13 )
  {
    v12 = (_DWORD **)*v13;
LABEL_25:
    v15 = 0;
    while ( 1 )
    {
      if ( v13[1] <= a2 )
      {
        if ( v15 )
        {
          if ( v5 == v12 )
          {
            v5 = v15;
            break;
          }
        }
        else
        {
          if ( v5 == v12 )
          {
            v5 = v13;
            break;
          }
          v15 = v13;
        }
      }
      else
      {
        free(v13);
        if ( v5 == v12 )
        {
          if ( v15 )
            v5 = v15;
          break;
        }
      }
      v13 = v12;
      v12 = (_DWORD **)*v12;
    }
  }
LABEL_21:
  a1[2] = (unsigned int)v5;
  *a1 = a2;
  a1[1] = (unsigned int)v8 - a2;
}
