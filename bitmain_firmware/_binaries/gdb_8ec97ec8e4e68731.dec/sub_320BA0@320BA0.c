unsigned __int8 *__fastcall sub_320BA0(int *a1, int a2, int a3)
{
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r1
  int v7; // r3
  unsigned __int8 *v8; // r4
  unsigned __int8 *v9; // r0
  unsigned __int8 *v10; // r4
  int v11; // r6
  int v12; // r3
  int v13; // r6
  _BYTE *v14; // r0
  int v15; // r4
  __int64 v16; // r2
  bool v17; // zf
  int v18; // r3
  __int64 v19; // r0
  int v20; // r6
  unsigned __int8 *v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r2
  unsigned __int8 *v26; // r0
  void *ptr; // [sp+4h] [bp-10h] BYREF
  _BYTE *v28; // [sp+8h] [bp-Ch]
  int v29; // [sp+Ch] [bp-8h]

  v5 = sub_31FE74((int)a1, (unsigned __int8 *)(a2 + 2), 0);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *v5;
  if ( v7 == 90 )
  {
    v8 = v5 + 1;
    goto LABEL_34;
  }
  if ( v7 == 77 )
    v6 = v5 + 1;
  ptr = 0;
  v29 = 0;
  v28 = 0;
  v9 = sub_31E89C((int)&ptr, v6);
  v10 = v9;
  if ( v9 )
  {
    v11 = *a1;
    v12 = a1[1];
    switch ( *v9 )
    {
      case 'F':
      case 'R':
      case 'U':
      case 'V':
      case 'W':
      case 'Y':
        if ( v12 == v11 )
          v13 = 0;
        else
          v13 = v12 - v11;
        v14 = sub_31E970((int)a1, v9);
        v15 = (int)v14;
        if ( v14 )
        {
          if ( *v14 )
            v15 = sub_31EA78((int)a1, (int)v14);
          else
            v15 = (unsigned __int8)*v14;
        }
        v16 = *(_QWORD *)a1;
        v17 = (_DWORD)v16 == HIDWORD(v16);
        if ( (_DWORD)v16 == HIDWORD(v16) )
          v18 = v13;
        else
          v18 = HIDWORD(v16) - v16;
        if ( !v17 )
          v18 = v13 - v18;
        if ( v18 < 0 )
          a1[1] = v16 + v13;
        sub_31E858((int)a1, "(");
        v10 = sub_32081C((int)a1, (unsigned __int8 *)v15);
        sub_31E858((int)a1, ")");
        HIDWORD(v19) = ptr;
        if ( ptr != v28 && v28 != ptr )
        {
          LODWORD(v19) = a1;
          sub_31EC14(v19, v28 - (_BYTE *)ptr);
        }
        goto LABEL_25;
      default:
        break;
    }
  }
  else
  {
LABEL_25:
    v11 = *a1;
    v12 = a1[1];
  }
  if ( v12 != v11 )
  {
    v20 = v12 - v11;
    v21 = sub_3200E0((int)a1, v10);
    v22 = a1[1];
    v8 = v21;
    v23 = *a1;
    if ( *a1 == v22 )
    {
      v24 = 0;
      goto LABEL_30;
    }
LABEL_29:
    v24 = v22 - v23;
LABEL_30:
    if ( v20 - v24 < 0 )
      a1[1] = v23 + v20;
    goto LABEL_32;
  }
  v26 = sub_3200E0((int)a1, v10);
  v23 = *a1;
  v8 = v26;
  v22 = a1[1];
  if ( *a1 != v22 )
  {
    v20 = 0;
    goto LABEL_29;
  }
LABEL_32:
  if ( ptr )
    free(ptr);
LABEL_34:
  if ( a3 || v8 && !*v8 )
    return v8;
  return 0;
}
