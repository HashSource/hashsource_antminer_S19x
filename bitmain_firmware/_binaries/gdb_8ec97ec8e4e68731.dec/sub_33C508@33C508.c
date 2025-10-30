_DWORD *__fastcall sub_33C508(_DWORD *result, _DWORD *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  _DWORD *v6; // r3
  _DWORD *v7; // r7
  int v8; // r1
  int v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r12
  int v14; // r1
  int v15; // r2
  int v16; // r1
  _BYTE *v17; // r2
  int v18; // r12
  int v19; // r3
  int v20; // r8
  int v21; // lr
  int v22; // r12
  int v23; // r3
  int v24; // r1
  _BYTE *v25; // r3
  int v26; // [sp-2Ch] [bp-2Ch]
  int v27; // [sp-28h] [bp-28h]
  int v28; // [sp-24h] [bp-24h]

  if ( result != a2 )
  {
    v3 = result + 2;
    v2 = *result;
    v4 = result;
    v6 = a2 + 2;
    v7 = (_DWORD *)*a2;
    if ( result + 2 != (_DWORD *)*result )
    {
      v8 = result[2];
      if ( v7 == v6 )
      {
        v18 = v7[1];
        result = (_DWORD *)v7[2];
        v19 = v7[3];
        v4[2] = *v7;
        v3[1] = v18;
        v3[2] = result;
        v3[3] = v19;
        *a2 = v2;
        *v4 = v3;
      }
      else
      {
        *result = v7;
        v9 = a2[2];
        *a2 = v2;
        result[2] = v9;
      }
      a2[2] = v8;
      v10 = a2[1];
      v11 = v4[1];
      goto LABEL_6;
    }
    if ( v7 != v6 )
    {
      v12 = a2[2];
      v13 = result[3];
      result = (_DWORD *)result[4];
      v14 = v3[3];
      a2[2] = *v3;
      v6[1] = v13;
      v6[2] = result;
      v6[3] = v14;
      *v4 = v7;
      *a2 = v6;
      v4[2] = v12;
      v11 = v4[1];
      v10 = a2[1];
LABEL_6:
      v4[1] = v10;
      a2[1] = v11;
      return result;
    }
    v10 = a2[1];
    if ( result[1] )
    {
      if ( v10 )
      {
        v20 = result[3];
        v26 = v7[1];
        v27 = v7[2];
        v28 = v7[3];
        v21 = result[4];
        result = (_DWORD *)*v7;
        v22 = v3[3];
        *v7 = *v3;
        v7[1] = v20;
        v7[2] = v21;
        v7[3] = v22;
        v4[2] = result;
        v3[1] = v26;
        v3[2] = v27;
        v3[3] = v28;
        v10 = a2[1];
        v11 = v4[1];
        goto LABEL_6;
      }
      v15 = result[5];
      result = (_DWORD *)result[3];
      v16 = v3[2];
      *v7 = *v3;
      v7[1] = result;
      v7[2] = v16;
      v7[3] = v15;
      a2[1] = v4[1];
      v17 = (_BYTE *)*v4;
      v4[1] = 0;
      *v17 = 0;
    }
    else
    {
      if ( !v10 )
      {
        v11 = 0;
        goto LABEL_6;
      }
      v23 = v7[3];
      result = (_DWORD *)v7[1];
      v24 = v7[2];
      v4[2] = *v7;
      v3[1] = result;
      v3[2] = v24;
      v3[3] = v23;
      v4[1] = a2[1];
      v25 = (_BYTE *)*a2;
      a2[1] = 0;
      *v25 = 0;
    }
  }
  return result;
}
