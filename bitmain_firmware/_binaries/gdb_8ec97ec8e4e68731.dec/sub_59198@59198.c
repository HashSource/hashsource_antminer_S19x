int __fastcall sub_59198(int a1, char *a2)
{
  size_t v4; // r0
  _BYTE *v5; // r4
  int v6; // r3
  int v7; // t1
  bool v8; // zf
  _BYTE *v9; // lr
  _BYTE *v10; // r3
  int v11; // r2
  unsigned int v12; // r12
  _BOOL4 v13; // r1
  _BYTE *v14; // t1
  bool v15; // zf
  _BYTE *v16; // t1
  int v17; // r1
  int v18; // r2
  int v19; // r1
  _BYTE *v21; // [sp+8h] [bp-Ch] BYREF
  _BYTE *v22; // [sp+Ch] [bp-8h] BYREF

  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    sub_33BC54(a1, 0, 0, a2, v4);
    v5 = *(_BYTE **)a1;
LABEL_3:
    v6 = (unsigned __int8)*v5;
    if ( !*v5 )
      return a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v6 == 32;
        if ( v6 != 32 )
          v8 = v6 == 9;
        if ( !v8 )
          break;
        v7 = (unsigned __int8)*++v5;
        v6 = v7;
      }
      v21 = v5;
      v9 = v5;
      v10 = (_BYTE *)(unsigned __int8)*v5;
      if ( *v5 )
        break;
LABEL_28:
      v17 = *(_DWORD *)(a1 + 28);
      v18 = *(_DWORD *)(a1 + 32);
      v22 = v10;
      if ( v17 == v18 )
      {
        sub_5983C(a1 + 24, v17, &v21, &v22);
        goto LABEL_3;
      }
      v8 = v17 == 0;
      v19 = v17 + 8;
      if ( !v8 )
      {
        *(_DWORD *)(v19 - 8) = v9;
        *(_DWORD *)(v19 - 4) = v10;
      }
      *(_DWORD *)(a1 + 28) = v19;
      v6 = (unsigned __int8)*v5;
      if ( !*v5 )
        return a1;
    }
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v15 = v10 == (_BYTE *)9;
      if ( v10 != (_BYTE *)9 )
        v15 = v10 == (_BYTE *)32;
      if ( v15 && !(v13 | v12 | v11) )
      {
LABEL_27:
        v10 = (_BYTE *)(v5 - v9);
        goto LABEL_28;
      }
      if ( v11 )
        break;
      if ( v10 == (_BYTE *)92 )
      {
        v11 = 1;
        goto LABEL_12;
      }
      if ( v13 )
      {
        v13 = v10 != (_BYTE *)39;
LABEL_12:
        v14 = (_BYTE *)(unsigned __int8)*++v5;
        v10 = v14;
        if ( !v14 )
          goto LABEL_27;
      }
      else
      {
        if ( !v12 )
        {
          v11 = 0;
          if ( v10 == (_BYTE *)39 )
          {
            v13 = 1;
          }
          else
          {
            v13 = 0;
            v12 = __clz((unsigned int)(v10 - 34));
          }
          if ( v10 != (_BYTE *)39 )
            v12 >>= 5;
          goto LABEL_12;
        }
        v12 = (unsigned int)(v10 - 34);
        v8 = v10 == (_BYTE *)34;
        v16 = (_BYTE *)(unsigned __int8)*++v5;
        v10 = v16;
        if ( !v8 )
          v12 = 1;
        v11 = 0;
        if ( !v10 )
          goto LABEL_27;
      }
    }
    v11 = 0;
    goto LABEL_12;
  }
  return a1;
}
