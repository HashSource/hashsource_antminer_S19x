int __fastcall sub_1D1F20(int result, unsigned int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v8; // r9
  int v9; // r5
  int v10; // r10
  int v11; // r4
  int v12; // r2
  _DWORD *v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r3
  _QWORD *v16; // r1
  unsigned int v17; // [sp+4h] [bp-14h] BYREF
  unsigned int v18; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v19[8]; // [sp+10h] [bp-8h] BYREF

  v17 = a2;
  if ( a6 > 0 )
  {
    v8 = result;
    v9 = 0;
    v10 = a3 + 4;
    v11 = 4 * a5;
    while ( 1 )
    {
      v12 = *(_DWORD *)(*a4 + v11);
      if ( (*(_BYTE *)(v12 + 24) & 0xF8) != 0x10 )
        goto LABEL_3;
      v13 = *(_DWORD **)(a3 + 8);
      v14 = *(_DWORD *)(v12 + 8);
      v18 = v14;
      if ( v13 )
      {
        result = v10;
        do
        {
          v15 = v13[4];
          if ( v14 > v15 )
            v13 = (_DWORD *)v13[3];
          else
            result = (int)v13;
          if ( v14 <= v15 )
            v13 = (_DWORD *)v13[2];
        }
        while ( v13 );
        if ( v10 != result && v14 >= *(_DWORD *)(result + 16) )
          goto LABEL_3;
      }
      result = sub_1D2988(v19, a3, &v18);
      v16 = *(_QWORD **)(v8 + 100);
      if ( v16 == *(_QWORD **)(v8 + 104) )
      {
        result = sub_1D2AA0(v8 + 96, v16, &v18, &v17);
LABEL_3:
        ++v9;
        v11 += 4;
        if ( a6 == v9 )
          return result;
      }
      else
      {
        if ( v16 )
          *v16 = __PAIR64__(v17, v18);
        ++v9;
        *(_DWORD *)(v8 + 100) = v16 + 1;
        v11 += 4;
        if ( a6 == v9 )
          return result;
      }
    }
  }
  return result;
}
