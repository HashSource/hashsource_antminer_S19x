_DWORD *__fastcall sub_1CA3F8(_DWORD *a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r6
  int v6; // r3
  int (__fastcall **v7)(_DWORD *); // r3
  int v8; // r0
  int *v9; // r4
  int *v10; // r7
  int v11; // r5
  int v12; // t1

  v3 = dword_487D2C;
  *a1 = 0;
  a1[1] = 0;
  v4 = *(_DWORD **)(v3 + 36);
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = v4[33];
      if ( v6 )
      {
        v7 = *(int (__fastcall ***)(_DWORD *))(v6 + 36);
        if ( v7 )
        {
          if ( v4[38] != -1 )
          {
            v8 = (*v7)(v4);
            v9 = *(int **)v8;
            v10 = *(int **)(v8 + 4);
            if ( *(int **)v8 != v10 )
              break;
          }
        }
      }
LABEL_11:
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        return a1;
    }
    while ( 1 )
    {
      v12 = *v9++;
      v11 = v12;
      if ( (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v12 + 8))(v12, v4) == a2 )
        break;
      if ( v10 == v9 )
        goto LABEL_11;
    }
    *a1 = v11;
    a1[1] = v4;
  }
  return a1;
}
