int __fastcall sub_10EE64(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r8
  int v7; // r0
  _BOOL4 v8; // r3
  int v9; // r4
  bool v10; // cc
  unsigned int v11; // r1
  _DWORD *v12; // r0
  int *v13; // r0
  int v14; // r2
  size_t v15; // r0
  int v17; // [sp+0h] [bp+0h] BYREF
  char *v18; // [sp+4h] [bp+4h]
  char v19; // [sp+8h] [bp+8h] BYREF
  int v20; // [sp+14h] [bp+14h]
  char v21; // [sp+90h] [bp+90h] BYREF
  int v22; // [sp+B8h] [bp+B8h]

  v17 = a2;
  switch ( a2 )
  {
    case 1:
      v22 = a3;
      v18 = &v21;
      break;
    case 0:
      return -1;
    case 2:
      v20 = a3;
      v18 = &v19;
      break;
  }
  v7 = sub_10BC4C(a1, (int)&v17);
  v8 = v7 >= 0;
  if ( !a4 )
    v8 = 0;
  v4 = v7;
  if ( v8 )
  {
    v9 = v7 + 1;
    *a4 = 1;
    v10 = v7 + 1 < sub_10C010(a1);
    v11 = v9;
    v12 = (_DWORD *)a1;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = (int *)sub_10C01C(v12, v11);
        v14 = *v13;
        if ( *v13 != v17 )
          return v4;
        if ( v14 == 1 )
          break;
        if ( v14 == 2 )
        {
          v15 = sub_10E768(v13[1], (int)v18);
          goto LABEL_15;
        }
LABEL_16:
        ++v9;
        ++*a4;
        v10 = v9 < sub_10C010(a1);
        v11 = v9;
        v12 = (_DWORD *)a1;
        if ( !v10 )
          return v4;
      }
      v15 = sub_10E760(v13[1], (int)v18);
LABEL_15:
      if ( v15 )
        return v4;
      goto LABEL_16;
    }
  }
  return v4;
}
