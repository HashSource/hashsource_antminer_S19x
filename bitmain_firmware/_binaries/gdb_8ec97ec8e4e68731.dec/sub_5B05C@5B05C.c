int *__fastcall sub_5B05C(int *result, int *a2)
{
  int *v2; // r4
  _BYTE *v3; // r7
  _BYTE *v5; // r0
  _BYTE *v6; // r6
  int v7; // r3
  int v8; // r0
  size_t v9; // r5
  int v10; // r0
  size_t v11; // r3
  size_t v12[2]; // [sp+4h] [bp-8h] BYREF

  v2 = result;
  v3 = result + 2;
  if ( *a2 )
  {
    v5 = (_BYTE *)sub_9360C(*a2);
    *a2 = (int)v5;
    v6 = v5;
    v7 = (unsigned __int8)*v5;
    if ( !*v5 )
    {
LABEL_3:
      *v2 = (int)v3;
      v2[1] = v7;
      *((_BYTE *)v2 + 8) = v7;
      return v2;
    }
    v8 = sub_93610(v5 + 1);
    *a2 = v8;
    if ( v6 == (_BYTE *)v8 )
    {
      v7 = 0;
      goto LABEL_3;
    }
    v9 = v8 - (_DWORD)v6;
    *v2 = (int)v3;
    v12[0] = v8 - (_DWORD)v6;
    if ( (unsigned int)(v8 - (_DWORD)v6) > 0xF )
    {
      v10 = sub_33B2BC(v2, v12, 0);
      v11 = v12[0];
      v3 = (_BYTE *)v10;
      *v2 = v10;
      v2[2] = v11;
    }
    else
    {
      if ( v9 == 1 )
      {
        *((_BYTE *)v2 + 8) = *v6;
LABEL_8:
        v2[1] = v9;
        v3[v9] = 0;
        return v2;
      }
      if ( !v9 )
        goto LABEL_8;
    }
    memcpy(v3, v6, v9);
    v9 = v12[0];
    v3 = (_BYTE *)*v2;
    goto LABEL_8;
  }
  result[1] = 0;
  *((_BYTE *)result + 8) = 0;
  *result = (int)v3;
  return result;
}
