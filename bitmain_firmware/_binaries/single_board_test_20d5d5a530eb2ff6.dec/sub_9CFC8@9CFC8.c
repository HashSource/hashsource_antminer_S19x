int __fastcall sub_9CFC8(int a1, int *a2, int *a3, _DWORD *a4)
{
  int v4; // r4
  int *v5; // r4
  int v6; // r8
  _DWORD *v7; // r5
  _DWORD *v8; // r4
  int v9; // r10
  int v10; // r7
  int v11; // r3
  int *v12; // r9
  int v13; // r3
  int v14; // r6
  int (__fastcall *v15)(int); // r3
  int result; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r3
  bool v20; // zf

  v4 = **(_DWORD **)(a1 + 4);
  if ( v4 == 0x10000 )
  {
    v5 = &dword_2165F0;
  }
  else
  {
    if ( v4 != 0x1FFFF )
    {
      v17 = *(_DWORD *)a1;
      *a3 = v17;
      *a2 = v17;
      result = 68;
      if ( !a4 )
        return 0;
      return result;
    }
    v5 = &dword_216638;
  }
  *a2 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*v5 )
  {
    *a3 = 0;
    return 191;
  }
  v6 = 0;
  v7 = (_DWORD *)a1;
  v8 = v5 + 9;
  v9 = 0;
  v10 = 1;
  do
  {
    while ( 1 )
    {
      v15 = (int (__fastcall *)(int))*(v8 - 8);
      if ( !v15 )
        break;
      a1 = v15(a1);
      if ( v6 )
        v11 = 0;
      else
        v11 = v10;
      v12 = (int *)a1;
      if ( v11 )
        v6 = *(v8 - 9);
      v13 = v7[317];
      v14 = *(_DWORD *)a1;
      if ( v13 && v14 != v13 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(v7[1] + 100) + 48) & 8) != 0 )
        {
          if ( v14 == 256 )
          {
            if ( v13 == 256 )
              goto LABEL_17;
            v18 = 65280;
          }
          else
          {
            v18 = *(_DWORD *)a1;
            if ( v13 == 256 )
              v13 = 65280;
          }
          if ( v13 < v18 )
            goto LABEL_18;
        }
        else if ( v14 < v13 )
        {
          goto LABEL_18;
        }
      }
LABEL_17:
      a1 = sub_854EC((int)v7, 9);
      if ( !a1 )
        goto LABEL_18;
      v19 = v7[318];
      if ( !v19 || v14 == v19 )
        goto LABEL_35;
      if ( (*(_DWORD *)(*(_DWORD *)(v7[1] + 100) + 48) & 8) == 0 )
      {
        if ( v14 >= v19 )
          goto LABEL_18;
LABEL_35:
        if ( (v7[315] & v12[2]) == 0 && ((v12[1] & 2) == 0 || (*(_DWORD *)(v7[257] + 16) & 0x30000) == 0) )
        {
          if ( v10 )
          {
            v10 = 0;
            v20 = a4 == 0;
            if ( a4 )
              v20 = v6 == 0;
            if ( !v20 )
              *a4 = v6;
            v9 = *v12;
            *a2 = *v12;
          }
          else
          {
            *a2 = *v12;
          }
          goto LABEL_19;
        }
        goto LABEL_18;
      }
      if ( v14 == 256 )
      {
        if ( v19 == 256 )
          goto LABEL_18;
        v14 = 65280;
      }
      else if ( v19 == 256 )
      {
        v19 = 65280;
      }
      if ( v19 < v14 )
        goto LABEL_35;
LABEL_18:
      v10 = 1;
LABEL_19:
      __pld(v8);
      v8 += 3;
      if ( !*(v8 - 9) )
        goto LABEL_22;
    }
    __pld(v8);
    v8 += 3;
    v6 = 0;
    v10 = 1;
  }
  while ( *(v8 - 9) );
LABEL_22:
  *a3 = v9;
  if ( !v9 )
    return 191;
  return 0;
}
