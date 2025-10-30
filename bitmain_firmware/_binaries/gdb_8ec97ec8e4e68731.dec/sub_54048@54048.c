int __fastcall sub_54048(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  int v6; // r9
  _DWORD *v7; // r10
  int v8; // r3
  bool v9; // zf
  int v10; // t1
  bool v11; // zf
  unsigned __int8 *v12; // r0
  size_t v13; // r8
  size_t v14; // r7
  char *v15; // r0
  _DWORD *v16; // r0
  _DWORD **v17; // r3
  _DWORD *v19; // [sp+8h] [bp-34h] BYREF
  _DWORD *v20; // [sp+Ch] [bp-30h]
  int v21; // [sp+14h] [bp-28h] BYREF

  *a2 = 0;
  *a3 = 0;
  v6 = 0;
  *a4 = 0;
  v7 = (_DWORD *)dword_474744;
  v19 = a2;
  v20 = a3;
  while ( 1 )
  {
    v8 = *a1;
    v9 = v8 == 32;
    if ( v8 != 32 )
      v9 = v8 == 9;
    if ( v9 )
    {
      do
      {
        v10 = *++a1;
        v8 = v10;
        v11 = v10 == 9;
        if ( v10 != 9 )
          v11 = v8 == 32;
      }
      while ( v11 );
    }
    if ( v8 == 33 )
    {
      v14 = 1;
      v13 = 1;
    }
    else
    {
      v12 = sub_52FA4(a1);
      v13 = (size_t)v12;
      if ( !v12 )
        return 0;
      v14 = (size_t)v12;
    }
    v15 = (char *)memcpy(&v19, a1, v14);
    *((_BYTE *)&v19 + v14) = 0;
    *a4 = 0;
    v21 = 0;
    v16 = sub_53010(v15, v13, v7, 1, &v21);
    *a4 = (int)v16;
    if ( (unsigned int)v16 - 1 > 0xFFFFFFFD )
      return 0;
    if ( v16[24] )
    {
      *v19 = v16;
      *a4 = *(_DWORD *)(*a4 + 96);
    }
    *v20 = v6;
    v6 = *a4;
    v17 = *(_DWORD ***)(*a4 + 52);
    if ( !v17 )
      break;
    v7 = *v17;
    a1 += v14;
  }
  return 1;
}
