_DWORD *__fastcall sub_8570C(_DWORD *result, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD *a8, _DWORD **a9)
{
  unsigned int v9; // r10
  bool v11; // zf
  int v12; // r6
  _DWORD *v13; // r5
  _DWORD *v14; // r9
  _DWORD *v15; // r3
  _DWORD *v16; // r12
  _DWORD *v17; // r2
  bool v18; // zf
  int v19; // r1
  _DWORD *v20; // r2
  _DWORD *v21; // r7
  bool v22; // zf
  _DWORD *v23; // r1
  bool v24; // zf
  bool v25; // zf

  v9 = (unsigned int)result;
  v11 = a6 == 6;
  if ( a6 != 6 )
    v11 = a6 == 3;
  if ( v11 )
  {
    v12 = 1;
    v13 = (_DWORD *)*a8;
    v14 = (_DWORD *)*a8;
    v15 = *a9;
  }
  else
  {
    v12 = 0;
    v15 = (_DWORD *)*a8;
    v13 = *a9;
    v14 = (_DWORD *)*a8;
  }
  v16 = *a9;
  v17 = 0;
  while ( 1 )
  {
    v18 = v15 == 0;
    if ( v15 )
      v18 = v17 == v13;
    if ( v18 )
      break;
    v19 = v15[3];
    v20 = (_DWORD *)v15[4];
    v21 = (_DWORD *)*v15;
    if ( v12 )
      result = (_DWORD *)v15[4];
    else
      result = (_DWORD *)v15[3];
    if ( a7 >= 0 )
    {
      if ( a7 != v21[14] )
        goto LABEL_8;
    }
    else if ( v9 && (v9 & v21[4]) == 0
           || a2 && (a2 & v21[5]) == 0
           || a3 && (a3 & v21[6]) == 0
           || a4 && (a4 & v21[7]) == 0
           || a5 && a5 != v21[8] )
    {
      goto LABEL_8;
    }
    switch ( a6 )
    {
      case 1:
        if ( !v15[1] )
        {
          if ( v15 != v16 )
          {
            if ( v15 == v14 )
              v14 = (_DWORD *)v15[3];
            if ( v20 )
            {
              v20[3] = v19;
              v19 = v15[3];
            }
            if ( v19 )
              *(_DWORD *)(v19 + 16) = v20;
            v16[3] = v15;
            v15[4] = v16;
            v16 = v15;
            v15[3] = 0;
          }
          v15[1] = 1;
        }
        break;
      case 4:
        v24 = v15 == v16;
        if ( v15 != v16 )
          v24 = v15[1] == 0;
        if ( !v24 )
        {
          if ( v15 == v14 )
            v14 = (_DWORD *)v15[3];
          if ( v20 )
          {
            v20[3] = v19;
            v19 = v15[3];
          }
          if ( v19 )
            *(_DWORD *)(v19 + 16) = v20;
          v16[3] = v15;
          v15[4] = v16;
          v16 = v15;
          v15[3] = 0;
        }
        break;
      case 3:
        if ( v15[1] )
        {
          if ( v15 != v14 )
          {
            if ( v15 == v16 )
              v16 = (_DWORD *)v15[4];
            if ( v19 )
            {
              *(_DWORD *)(v19 + 16) = v20;
              v20 = (_DWORD *)v15[4];
            }
            if ( v20 )
              v20[3] = v19;
            v14[4] = v15;
            v15[3] = v14;
            v14 = v15;
            v15[4] = 0;
          }
          v15[1] = 0;
        }
        break;
      case 6:
        v25 = v15 == v14;
        if ( v15 != v14 )
          v25 = v15[1] == 0;
        if ( !v25 )
        {
          if ( v15 == v16 )
            v16 = (_DWORD *)v15[4];
          if ( v19 )
          {
            *(_DWORD *)(v19 + 16) = v20;
            v20 = (_DWORD *)v15[4];
          }
          if ( v20 )
            v20[3] = v19;
          v14[4] = v15;
          v15[3] = v14;
          v14 = v15;
          v15[4] = 0;
        }
        break;
      case 2:
        v22 = v15 == v14;
        if ( v15 == v14 )
          v14 = (_DWORD *)v15[3];
        else
          v20[3] = v19;
        if ( v22 )
          v23 = v14;
        else
          v23 = (_DWORD *)v15[3];
        v15[1] = 0;
        if ( v15 == v16 )
          v16 = v20;
        if ( v23 )
        {
          v23[4] = v20;
          v20 = (_DWORD *)v15[4];
        }
        if ( v20 )
          v20[3] = v23;
        v15[3] = 0;
        v15[4] = 0;
        break;
    }
LABEL_8:
    v17 = v15;
    v15 = result;
  }
  *a8 = v14;
  *a9 = v16;
  return result;
}
