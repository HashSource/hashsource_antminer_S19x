int __fastcall sub_326A24(int a1, int a2)
{
  _DWORD *v3; // r4
  int result; // r0
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  _BOOL4 v9; // r0
  bool v10; // cc
  unsigned int v11; // r6
  _BOOL4 v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r2
  _DWORD *v16; // r3
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r3

  v3 = *(_DWORD **)a1;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(int, _DWORD))(a1 + 4))(a2, *v3);
    v6 = result;
    if ( !result )
      return result;
    v7 = (_DWORD *)v3[2];
    if ( result >= 0 )
      v7 = (_DWORD *)v3[3];
    if ( !v7 )
      return result;
    result = (*(int (__fastcall **)(int, _DWORD))(a1 + 4))(a2, *v7);
    if ( !result )
      goto LABEL_26;
    if ( result < 0 )
    {
      v16 = (_DWORD *)v7[2];
      if ( !v16 )
      {
LABEL_26:
        if ( v6 >= 0 )
          v21 = v7[2];
        else
          v21 = v7[3];
        if ( v6 >= 0 )
          v7[2] = v3;
        else
          v7[3] = v3;
        if ( v6 >= 0 )
          v3[3] = v21;
        else
          v3[2] = v21;
        *(_DWORD *)a1 = v7;
        return result;
      }
      if ( v6 < 0 )
      {
        v17 = v16[3];
        v16[3] = v7;
        v7[2] = v17;
        goto LABEL_19;
      }
      v9 = 0;
      v12 = v6 > 0;
      v11 = 0;
      v13 = 1;
    }
    else
    {
      v8 = (_DWORD *)v7[3];
      if ( !v8 )
        goto LABEL_26;
      v9 = result > 0;
      v10 = v6 <= 0;
      v11 = (unsigned int)v6 >> 31;
      v12 = !v10;
      v13 = v12 && v9;
      if ( v12 && v9 )
      {
        v14 = v8[2];
        v8[2] = v7;
        v7[3] = v14;
        goto LABEL_15;
      }
    }
    if ( (v11 & v9) != 0 )
    {
      v16 = (_DWORD *)v7[3];
      v19 = v16[2];
      v16[2] = v7;
      v7[3] = v19;
LABEL_19:
      v3[2] = v16;
      v18 = v16[3];
      v16[3] = v3;
      v3[2] = v18;
      v3 = v16;
      *(_DWORD *)a1 = v16;
    }
    else if ( (v12 & v13) != 0 )
    {
      v8 = (_DWORD *)v7[2];
      v20 = v8[3];
      v8[3] = v7;
      v7[2] = v20;
LABEL_15:
      v3[3] = v8;
      v15 = v8[2];
      v8[2] = v3;
      v3[3] = v15;
      v3 = v8;
      *(_DWORD *)a1 = v8;
    }
    else
    {
      v3 = *(_DWORD **)a1;
    }
  }
}
