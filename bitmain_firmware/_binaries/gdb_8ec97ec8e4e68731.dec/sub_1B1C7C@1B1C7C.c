unsigned int __fastcall sub_1B1C7C(int a1, int a2, int (__fastcall *a3)(unsigned int, int), int a4)
{
  const char *v8; // r6
  unsigned int v9; // r1
  const char *v10; // r0
  unsigned int v11; // r3
  int v12; // r2
  unsigned int v13; // t1
  int v14; // r3
  unsigned int result; // r0
  unsigned int v16; // r7
  int (*v17)(const char *, const char *); // r9
  bool v18; // zf
  int v19; // r3
  int v20; // r9
  int v21; // r3
  int v22; // r9
  int v23; // r6
  int v24; // t1
  int v25; // r10
  char **v26; // r0
  int (__fastcall *v27)(int, int, _DWORD, int, _DWORD, _DWORD); // r7
  int v28; // r0
  unsigned int i; // r6
  int v30; // r0
  int v31; // r3
  _DWORD *v32; // r3
  __int64 v33; // [sp+0h] [bp-1Ch]
  int v34; // [sp+Ch] [bp-10h]

  if ( off_46D5A4[0][2] == (char *)14 )
  {
    if ( !*(_BYTE *)(a2 + 60) )
    {
      sub_A3C94(a2 + 32, a2);
      *(_BYTE *)(a2 + 60) = 1;
    }
    v8 = *(const char **)(a2 + 32);
  }
  else
  {
    v8 = *(const char **)(a2 + 8);
  }
  v9 = *(unsigned __int8 *)v8;
  if ( *v8 )
  {
    v10 = v8;
    v11 = 0;
    do
    {
      v12 = byte_438798[v9];
      v13 = *(unsigned __int8 *)++v10;
      v9 = v13;
      v11 = 67 * v11 - 113 + v12;
    }
    while ( v13 );
    v9 = v11 % 0x7F7;
  }
  v14 = *(_DWORD *)(a1 + 40);
  result = dword_4879F4;
  v16 = *(_DWORD *)(v14 + 4 * (v9 + 24));
  v17 = strcasecmp;
  if ( !dword_4879F4 )
    v17 = strcmp;
  if ( v16 )
  {
    do
    {
      v18 = v17(*(const char **)v16, v8) == 0;
      result = v16;
      if ( v18 )
        result = a3(v16, a4);
      v16 = *(_DWORD *)(v16 + 36);
    }
    while ( v16 );
    v14 = *(_DWORD *)(a1 + 40);
  }
  v19 = v14 + 0x4000;
  v20 = *(_DWORD *)(v19 + 24);
  v21 = *(_DWORD *)(v19 + 28);
  if ( v21 != v20 )
  {
    v22 = v20 - 4;
    v34 = v21 - 4;
    do
    {
      v24 = *(_DWORD *)(v22 + 4);
      v22 += 4;
      v23 = v24;
      v25 = a2 + v24;
      v26 = sub_194438(v24);
      v27 = (int (__fastcall *)(int, int, _DWORD, int, _DWORD, _DWORD))sub_194570((int)v26, a2);
      if ( *(_BYTE *)(a2 + v24 + 208) )
      {
        v28 = *(_DWORD *)(a2 + 4 * v23 + 148);
      }
      else
      {
        switch ( v23 )
        {
          case 4:
            v32 = (_DWORD *)(a2 + 64);
            if ( !*(_BYTE *)(a2 + 88) )
            {
              sub_21C928(a2 + 64, a2, 4);
              *(_BYTE *)(a2 + 88) = 1;
              v32 = (_DWORD *)(a2 + 64);
            }
            break;
          case 5:
            v32 = (_DWORD *)(a2 + 92);
            if ( !*(_BYTE *)(a2 + 116) )
            {
              sub_21C928(a2 + 92, a2, 5);
              *(_BYTE *)(a2 + 116) = 1;
              v32 = (_DWORD *)(a2 + 92);
            }
            break;
          case 6:
            v32 = (_DWORD *)(a2 + 120);
            if ( !*(_BYTE *)(a2 + 144) )
            {
              sub_21C928(a2 + 120, a2, 6);
              *(_BYTE *)(a2 + 144) = 1;
              v32 = (_DWORD *)(a2 + 120);
            }
            break;
          case 14:
            v32 = (_DWORD *)(a2 + 32);
            if ( !*(_BYTE *)(a2 + 60) )
            {
              sub_A3C94(a2 + 32, a2);
              *(_BYTE *)(a2 + 60) = 1;
              v32 = (_DWORD *)(a2 + 32);
            }
            break;
          default:
            v32 = (_DWORD *)(a2 + 8);
            break;
        }
        v28 = sub_21CBA8(v23, *v32);
        *(_DWORD *)(a2 + 4 * v23 + 148) = v28;
        *(_BYTE *)(v25 + 208) = 1;
      }
      v33 = 18957679LL * (unsigned int)v28;
      result = *(_DWORD *)(a1 + 40)
             + 4 * (v28 - 2039 * ((HIDWORD(v33) + ((unsigned int)(v28 - HIDWORD(v33)) >> 1)) >> 10) + 2062);
      for ( i = *(_DWORD *)(result + 4); i; i = *(_DWORD *)(i + 40) )
      {
        v30 = sub_21B7DC(i);
        v18 = v27(v30, a2, 0, v31, v33, HIDWORD(v33)) == 0;
        result = i;
        if ( !v18 )
          result = a3(i, a4);
      }
    }
    while ( v34 != v22 );
  }
  return result;
}
