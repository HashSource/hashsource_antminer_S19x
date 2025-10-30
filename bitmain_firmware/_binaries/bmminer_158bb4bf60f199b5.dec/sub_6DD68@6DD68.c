bool __fastcall sub_6DD68(int *a1, int a2)
{
  int v2; // r3
  int v6; // r8
  int v7; // r0
  char *v8; // r7
  int v9; // r1
  int v10; // r0
  int v11; // r10
  int v12; // r7
  int v13; // r2
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r1
  bool v17; // zf

  v2 = *a1;
  if ( *a1 != *(_DWORD *)a2 )
    return 0;
  if ( a1 == (int *)a2 )
    return 1;
  switch ( v2 )
  {
    case 0:
      if ( a1[2] != *(_DWORD *)(a2 + 8) )
        return 0;
      v6 = (int)(a1 + 2);
      v7 = sub_6BD80((int)(a1 + 2));
      if ( v7 )
      {
        v8 = (char *)sub_6BE20(v7);
        if ( v8 )
        {
          while ( 1 )
          {
            v11 = sub_6BE30((int)(v8 - 16));
            if ( !v11 )
              break;
            if ( *(_DWORD *)a2 )
              return 0;
            v9 = sub_6BBAC(a2 + 8, v8);
            if ( !v9 || !sub_6DD68(v11, v9) )
              return 0;
            if ( !*a1 )
            {
              v10 = sub_6BE08(v6, (int)(v8 - 16));
              if ( v10 )
              {
                v8 = (char *)sub_6BE20(v10);
                if ( v8 )
                  continue;
              }
            }
            return 1;
          }
        }
      }
      return 1;
    case 1:
      v12 = a1[3];
      if ( v12 != *(_DWORD *)(a2 + 12) )
        return 0;
      if ( v12 )
      {
        v13 = 1;
        v14 = 0;
        while ( 1 )
        {
          v15 = v2 == 1 && a1[3] > v14 ? *(_DWORD *)(a1[4] + 4 * v14) : 0;
          if ( v13 != 1 || *(_DWORD *)(a2 + 12) <= v14 )
            break;
          v16 = *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4 * v14);
          v17 = v16 == 0;
          if ( v16 )
            v17 = v15 == 0;
          if ( v17 || !sub_6DD68(v15, v16) )
            break;
          if ( v12 == ++v14 )
            return 1;
          v2 = *a1;
          v13 = *(_DWORD *)a2;
        }
        return 0;
      }
      return 1;
    case 2:
      return strcmp((const char *)a1[2], *(const char **)(a2 + 8)) == 0;
    case 3:
      return *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
  }
  if ( v2 != 4 )
    return 0;
  return *((double *)a1 + 1) == *(double *)(a2 + 8);
}
