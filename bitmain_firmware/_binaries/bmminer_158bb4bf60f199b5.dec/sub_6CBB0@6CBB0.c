int __fastcall sub_6CBB0(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  int v7; // r6
  int v9; // r3
  int v10; // r8
  int v11; // r0
  int v12; // r7
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r3
  double v25; // [sp+0h] [bp-Ch] BYREF

  v4 = a1[13];
  if ( v4 == 257 )
  {
    if ( (a2 & 8) == 0 )
      return sub_6E400(a1[14], a1[15]);
    if ( !sub_6D750(a1 + 10, &v25) )
      return sub_6E480();
    sub_6BF34(a3, a1, "real number overflow");
    return 0;
  }
  if ( v4 <= 257 )
  {
    if ( v4 == 91 )
    {
      v7 = sub_6E144();
      if ( v7 )
      {
        sub_6C3F4(a1, a3);
        v19 = a1[13];
        if ( v19 == 93 )
          return v7;
        if ( v19 )
        {
          while ( 1 )
          {
            v12 = sub_6CBB0(a1, a2, a3);
            if ( !v12 )
              break;
            if ( *(_DWORD *)(v12 + 4) != -1 )
              ++*(_DWORD *)(v12 + 4);
            v20 = sub_6ED4C();
            v21 = *(_DWORD *)(v12 + 4);
            if ( v20 )
            {
              if ( v21 != -1 )
              {
LABEL_65:
                v24 = v21 - 1;
                *(_DWORD *)(v12 + 4) = v24;
                if ( !v24 )
                  sub_6E5DC(v12);
              }
              goto LABEL_33;
            }
            if ( v21 != -1 )
            {
              *(_DWORD *)(v12 + 4) = v21 - 1;
              if ( v21 == 1 )
                sub_6E5DC(v12);
            }
            sub_6C3F4(a1, a3);
            v22 = a1[13];
            if ( v22 != 44 )
            {
              if ( v22 == 93 )
                return v7;
              goto LABEL_63;
            }
            sub_6C3F4(a1, a3);
            if ( !a1[13] )
              goto LABEL_63;
          }
        }
        else
        {
LABEL_63:
          sub_6BF34(a3, a1, "']' expected");
        }
        goto LABEL_33;
      }
    }
    else if ( v4 <= 91 )
    {
      if ( v4 != -1 )
        goto LABEL_41;
      sub_6BF34(a3, a1, "invalid token");
    }
    else
    {
      if ( v4 != 123 )
      {
        if ( v4 == 256 )
          return sub_6E2B0(a1[14]);
        goto LABEL_41;
      }
      v7 = sub_6DF5C();
      if ( v7 )
      {
        sub_6C3F4(a1, a3);
        v9 = a1[13];
        if ( v9 == 125 )
          return v7;
        if ( v9 != 256 )
        {
LABEL_67:
          sub_6BF34(a3, a1, "string or '}' expected");
          goto LABEL_33;
        }
        v10 = a1[14];
        a1[14] = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) != 0 && sub_6DFCC(v7, v10) )
            {
              sub_6D518(v10);
              sub_6BF34(a3, a1, "duplicate object key");
              goto LABEL_33;
            }
            sub_6C3F4(a1, a3);
            if ( a1[13] != 58 )
            {
              sub_6D518(v10);
              sub_6BF34(a3, a1, "':' expected");
              goto LABEL_33;
            }
            sub_6C3F4(a1, a3);
            v11 = sub_6CBB0(a1, a2, a3);
            v12 = v11;
            if ( !v11 )
            {
              sub_6D518(v10);
              goto LABEL_33;
            }
            v13 = *(_DWORD *)(v11 + 4);
            if ( v13 != -1 )
              *(_DWORD *)(v11 + 4) = v13 + 1;
            if ( sub_6E894(v7, v10, v11) )
            {
              sub_6D518(v10);
              v21 = *(_DWORD *)(v12 + 4);
              if ( v21 != -1 )
                goto LABEL_65;
              goto LABEL_33;
            }
            v14 = *(_DWORD *)(v12 + 4);
            if ( v14 != -1 )
            {
              v15 = v14 - 1;
              *(_DWORD *)(v12 + 4) = v15;
              if ( !v15 )
                sub_6E5DC(v12);
            }
            sub_6D518(v10);
            sub_6C3F4(a1, a3);
            v16 = a1[13];
            if ( v16 != 44 )
              break;
            sub_6C3F4(a1, a3);
            if ( a1[13] != 256 )
              goto LABEL_67;
            v10 = a1[14];
            a1[14] = 0;
            if ( !v10 )
              return 0;
          }
          if ( v16 == 125 )
            return v7;
          sub_6BF34(a3, a1, "'}' expected");
LABEL_33:
          v17 = *(_DWORD *)(v7 + 4);
          if ( v17 != -1 )
          {
            v18 = v17 - 1;
            *(_DWORD *)(v7 + 4) = v18;
            if ( !v18 )
            {
              v23 = v7;
              v7 = 0;
              sub_6E5DC(v23);
              return v7;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( v4 == 259 )
    return sub_6E5B8();
  if ( v4 < 259 )
    return sub_6E480();
  if ( v4 == 260 )
    return sub_6E5C4();
  if ( v4 == 261 )
    return sub_6E5D0();
LABEL_41:
  sub_6BF34(a3, a1, "unexpected token");
  return 0;
}
