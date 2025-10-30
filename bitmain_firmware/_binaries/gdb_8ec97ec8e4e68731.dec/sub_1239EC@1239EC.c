unsigned __int8 *__fastcall sub_1239EC(void *a1, int a2, int a3, int *a4, int a5)
{
  int v8; // r2
  unsigned __int8 *result; // r0
  char v10; // r3
  int v11; // r2
  int v12; // r9
  int v13; // t1
  int v14; // r11
  unsigned __int8 *v15; // r8
  char *v16; // lr
  int v17; // r1
  unsigned __int8 v18; // r0
  bool v19; // zf
  int v20; // r0
  int v21; // r12
  int v22; // r2
  char v23; // t1
  unsigned int v24; // r6

  memset(a1, 0, 0x400u);
  if ( !a5 )
    return (unsigned __int8 *)a3;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)(a2 + 4) + 52))(a3);
  if ( (unsigned int)(v8 - 4) <= 1 )
  {
    v10 = *(_BYTE *)(a3 + 2);
    result = (unsigned __int8 *)(a3 + 3);
    if ( (v10 & 1) != 0 )
      v11 = 8;
    else
      v11 = 4;
    *a4 = v11;
    if ( (v10 & 2) != 0 )
      result += v11;
    if ( (v10 & 4) != 0 )
    {
      v13 = *result++;
      v12 = v13;
      if ( v13 )
      {
        v14 = 0;
        do
        {
          v15 = result + 1;
          v16 = (char *)(result + 2);
          v17 = 0;
          *((_DWORD *)a1 + *result) = result + 1;
          v18 = result[1];
          v19 = (v18 & 0x80) == 0;
          v20 = v18 & 0x7F;
          if ( v19 )
          {
            v21 = 1;
          }
          else
          {
            v22 = 0;
            v21 = 1;
            do
            {
              v23 = *v16++;
              v22 += 7;
              ++v21;
              v24 = v23 & 0x7F;
              v20 |= v24 << v22;
              v17 |= (v24 << (v22 - 32)) | (v24 >> (32 - v22));
            }
            while ( v23 < 0 );
          }
          ++v14;
          result = &v15[v21 + v20];
        }
        while ( v12 != v14 );
      }
    }
  }
  else
  {
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "unrecognized version `%d' in .debug_macro section", v8);
    return 0;
  }
  return result;
}
