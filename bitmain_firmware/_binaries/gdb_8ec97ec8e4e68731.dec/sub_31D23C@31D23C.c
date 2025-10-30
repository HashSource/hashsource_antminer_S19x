int __fastcall sub_31D23C(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  int v3; // r7
  int v4; // r3
  int *v5; // r5
  int v6; // r8
  _DWORD *v7; // r0
  unsigned __int8 *v8; // r3
  _DWORD *v9; // r12
  int v10; // r2
  unsigned __int8 *v11; // r3
  int v12; // r0
  int result; // r0
  int v14; // [sp+4h] [bp-4h] BYREF

  v1 = (unsigned __int8 *)a1[3];
  v3 = a1[10];
  v4 = *v1;
  if ( v4 != 69 )
  {
    v14 = 0;
    v5 = &v14;
    while ( 1 )
    {
      switch ( v4 )
      {
        case 'I':
        case 'J':
          v9 = (_DWORD *)sub_31D3A4(a1);
          goto LABEL_6;
        case 'L':
          v9 = (_DWORD *)sub_31D114(a1);
          goto LABEL_6;
        case 'X':
          v6 = a1[12];
          a1[3] = v1 + 1;
          a1[12] = 1;
          v7 = sub_31BA00(a1);
          v8 = (unsigned __int8 *)a1[3];
          v9 = v7;
          a1[12] = v6;
          v10 = *v8;
          v11 = v8 + 1;
          if ( v10 != 69 )
            return 0;
          a1[3] = v11;
LABEL_6:
          if ( !v9 )
            return 0;
          v12 = sub_313728(a1, 47, (unsigned int)v9);
          *v5 = v12;
          v5 = (int *)(v12 + 12);
          if ( !v12 )
            return 0;
          v1 = (unsigned __int8 *)a1[3];
          v4 = *v1;
          if ( v4 == 69 )
          {
            result = v14;
            a1[3] = v1 + 1;
            a1[10] = v3;
            return result;
          }
          break;
        default:
          v9 = sub_319DD0((int)a1);
          goto LABEL_6;
      }
    }
  }
  a1[3] = v1 + 1;
  return sub_313728(a1, 47, 0);
}
