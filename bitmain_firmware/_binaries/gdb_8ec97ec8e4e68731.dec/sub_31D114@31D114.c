int __fastcall sub_31D114(_DWORD *a1)
{
  _BYTE *v1; // r3
  int v3; // r3
  bool v4; // zf
  int result; // r0
  _BYTE *v6; // r3
  _DWORD *v7; // r0
  unsigned __int8 *v8; // r2
  _DWORD *v9; // r5
  int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  int v13; // r6
  _BYTE *v14; // r2
  int v15; // r2
  _DWORD *v16; // r0

  v1 = (_BYTE *)a1[3];
  if ( *v1 == 76 )
  {
    a1[3] = v1 + 1;
    v3 = (unsigned __int8)v1[1];
    v4 = v3 == 90;
    if ( v3 != 90 )
      v4 = v3 == 95;
    if ( v4 )
    {
      result = sub_31CFBC(a1, 0);
      v6 = (_BYTE *)a1[3];
      if ( *v6 == 69 )
        goto LABEL_7;
    }
    else
    {
      v7 = sub_319DD0((int)a1);
      v9 = v7;
      if ( !v7 )
        return 0;
      if ( *v7 == 39 )
      {
        v10 = v7[2];
        v8 = *(unsigned __int8 **)(v10 + 16);
        if ( v8 )
        {
          v8 = *(unsigned __int8 **)(v10 + 4);
          a1[11] -= v8;
        }
      }
      v11 = (unsigned __int8 *)a1[3];
      v12 = *v11;
      if ( v12 == 110 )
      {
        v8 = v11 + 1;
        v13 = 61;
        a1[3] = v11 + 1;
      }
      else
      {
        v13 = 60;
      }
      if ( v12 == 110 )
      {
        v12 = v11[1];
        v11 = v8;
      }
      if ( v12 == 69 )
      {
        v15 = 0;
        goto LABEL_23;
      }
      if ( v12 )
      {
        v14 = v11;
        while ( 1 )
        {
          a1[3] = ++v14;
          if ( *v14 == 69 )
            break;
          if ( !*v14 )
            return 0;
        }
        v15 = v14 - v11;
LABEL_23:
        v16 = sub_314104(a1, (int)v11, v15);
        result = sub_313728(a1, v13, __SPAIR64__((unsigned int)v16, (unsigned int)v9));
        v6 = (_BYTE *)a1[3];
        if ( *v6 != 69 )
          return 0;
LABEL_7:
        a1[3] = v6 + 1;
        return result;
      }
    }
    return 0;
  }
  return 0;
}
