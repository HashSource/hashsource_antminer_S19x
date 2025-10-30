int __fastcall sub_2F95B4(int *a1)
{
  _DWORD *v1; // r9
  int v2; // r2
  int v3; // r3
  _DWORD *v5; // r10
  _DWORD *v6; // r7
  int v7; // r4
  int v8; // r3
  _DWORD *v9; // r5
  int v10; // r12
  bool v11; // zf
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  int v14; // r4
  int v15; // r3
  _DWORD *v16; // r5
  bool v17; // zf
  _DWORD *v18; // r3
  _DWORD *v19; // r2

  v2 = *a1;
  v3 = a1[33];
  if ( *a1 != v3 )
  {
    if ( v3 )
      v1 = *(_DWORD **)(v3 + 4);
    if ( !v3 )
      v1 = (_DWORD *)a1[1];
    if ( !v1 )
    {
LABEL_48:
      a1[33] = v2;
      return 1;
    }
    while ( 1 )
    {
      v5 = (_DWORD *)a1[31];
      v6 = (_DWORD *)a1[32];
      if ( a1[34] == 2 )
        sub_2A6BBC("./dwarf2.c", 3725);
      if ( !sub_2F9368(v1, a1) )
      {
LABEL_49:
        a1[34] = 2;
        return 0;
      }
      if ( v1[25] )
      {
        sub_2A6BBC("./dwarf2.c", 3730);
        v7 = v1[17];
        if ( v7 )
        {
          v8 = 0;
          goto LABEL_15;
        }
      }
      else
      {
        v7 = v1[17];
        if ( v7 )
        {
          v8 = 0;
LABEL_15:
          while ( 1 )
          {
            v9 = *(_DWORD **)v7;
            *(_DWORD *)v7 = v8;
            v8 = v7;
            if ( !v9 )
              break;
            v7 = (int)v9;
          }
          v10 = 1;
          v1[17] = v7;
          do
          {
            if ( *(_DWORD *)(v7 + 32) )
              v10 = sub_2F8724(v5, *(const char **)(v7 + 32), v7);
            v7 = *(_DWORD *)v7;
            v11 = v7 == 0;
            if ( v7 )
              v11 = v10 == 0;
          }
          while ( !v11 );
          v12 = (_DWORD *)v1[17];
          if ( v12 )
          {
            while ( 1 )
            {
              v13 = (_DWORD *)*v12;
              *v12 = v9;
              v9 = v12;
              if ( !v13 )
                break;
              v12 = v13;
            }
          }
          v1[17] = v12;
          if ( !v10 )
            goto LABEL_49;
          v14 = v1[20];
          if ( !v14 )
          {
LABEL_54:
            v1[25] = 1;
            goto LABEL_46;
          }
          goto LABEL_29;
        }
      }
      v14 = v1[20];
      if ( !v14 )
        goto LABEL_54;
      v10 = 1;
LABEL_29:
      v15 = 0;
      while ( 1 )
      {
        v16 = *(_DWORD **)v14;
        *(_DWORD *)v14 = v15;
        v15 = v14;
        if ( !v16 )
          break;
        v14 = (int)v16;
      }
      v1[20] = v14;
      do
      {
        if ( (*(_BYTE *)(v14 + 28) & 1) == 0 && *(_DWORD *)(v14 + 4) && *(_DWORD *)(v14 + 16) )
          v10 = sub_2F8724(v6, *(const char **)(v14 + 16), v14);
        v14 = *(_DWORD *)v14;
        v17 = v14 == 0;
        if ( v14 )
          v17 = v10 == 0;
      }
      while ( !v17 );
      v18 = (_DWORD *)v1[20];
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = (_DWORD *)*v18;
          *v18 = v16;
          v16 = v18;
          if ( !v19 )
            break;
          v18 = v19;
        }
      }
      v1[20] = v18;
      v1[25] = 1;
      if ( !v10 )
        goto LABEL_49;
LABEL_46:
      v1 = (_DWORD *)v1[1];
      if ( !v1 )
      {
        v2 = *a1;
        goto LABEL_48;
      }
    }
  }
  return 1;
}
