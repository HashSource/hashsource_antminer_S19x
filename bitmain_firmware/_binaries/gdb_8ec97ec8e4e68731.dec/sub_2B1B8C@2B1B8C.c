_DWORD *__fastcall sub_2B1B8C(_DWORD *result, int *a2, _BYTE *a3, int a4, __int64 a5, int a6, int a7)
{
  _BYTE *v8; // r8
  int v9; // r9
  _BYTE *v10; // r4
  unsigned int v11; // r7
  _BYTE *v12; // r8
  int v13; // r9
  unsigned int v14; // r6
  unsigned int v15; // r5
  int v16; // [sp+4h] [bp-8h]

  v8 = a3;
  v16 = (int)result;
  if ( a5 )
    result = (_DWORD *)sub_2A6BBC("tekhex.c", 638);
  v9 = *a2;
  if ( a6 )
  {
    v10 = v8;
    v11 = 1;
    v12 = &v8[a6];
    v13 = v9 - (_DWORD)v10;
    result = 0;
    do
    {
      while ( 1 )
      {
        v14 = (unsigned int)&v10[v13] & 0xFFFFE000;
        v15 = (unsigned int)&v10[v13] & 0x1FFF;
        if ( !a7 )
          break;
        if ( v14 != v11 )
          result = sub_2B14F0(v16, (unsigned int)&v10[v13] & 0xFFFFE000, 0);
        ++v10;
        if ( result )
          LOBYTE(a3) = *((_BYTE *)result + v15);
        else
          *(v10 - 1) = 0;
        v11 = v14;
        if ( result )
          *(v10 - 1) = (_BYTE)a3;
        if ( v12 == v10 )
          return result;
      }
      LOBYTE(a3) = *v10;
      if ( *v10 )
      {
        if ( v14 == v11 )
        {
          if ( !result )
          {
            result = sub_2B14F0(v16, v11, 1);
            LOBYTE(a3) = *v10;
          }
        }
        else
        {
          v11 = (unsigned int)&v10[v13] & 0xFFFFE000;
          result = sub_2B14F0(v16, v11, 1);
          LOBYTE(a3) = *v10;
        }
        *((_BYTE *)result + v15) = (_BYTE)a3;
        LOBYTE(a3) = (_BYTE)result + (v15 >> 5);
        *((_BYTE *)result + (v15 >> 5) + 0x2000) = 1;
      }
      else if ( v14 != v11 )
      {
        v11 = (unsigned int)&v10[v13] & 0xFFFFE000;
        result = sub_2B14F0(v16, v11, 0);
      }
      ++v10;
    }
    while ( v12 != v10 );
  }
  return result;
}
