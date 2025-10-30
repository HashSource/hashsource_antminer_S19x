int __fastcall sub_5431C(unsigned __int8 **a1, int a2, int *a3, int a4)
{
  unsigned __int8 *v6; // r9
  int v7; // r3
  unsigned __int8 *v8; // r5
  bool v9; // zf
  bool v10; // zf
  unsigned __int8 *v11; // r0
  size_t v12; // r8
  size_t v13; // r6
  char *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r8
  int result; // r0
  _DWORD *v19; // r5
  bool v20; // zf
  unsigned __int8 *v21; // r6
  _DWORD *v22; // r2
  int v23; // r0
  int v24; // [sp+8h] [bp-34h] BYREF
  int v25; // [sp+Ch] [bp-30h]
  int v26; // [sp+14h] [bp-28h] BYREF

  v6 = *a1;
  v24 = a4;
  v25 = a2;
  v7 = *v6;
  v8 = v6;
  v9 = v7 == 32;
  if ( v7 != 32 )
    v9 = v7 == 9;
  if ( v9 )
  {
    do
    {
      *a1 = ++v8;
      v7 = *v8;
      v10 = v7 == 9;
      if ( v7 != 9 )
        v10 = v7 == 32;
    }
    while ( v10 );
  }
  if ( v7 == 33 )
  {
    v13 = 1;
    v12 = 1;
  }
  else
  {
    v11 = sub_52FA4(v8);
    v12 = (size_t)v11;
    if ( !v11 )
      return 0;
    v13 = (size_t)v11;
  }
  v14 = (char *)memcpy(&v24, v8, v13);
  v26 = 0;
  *((_BYTE *)&v24 + v13) = 0;
  v15 = sub_53010(v14, v12, (_DWORD *)v25, v24, &v26);
  v16 = v15;
  if ( !v26 )
    return 0;
  if ( v26 > 1 )
  {
    if ( a3 )
      *a3 = 0;
    return -1;
  }
  v19 = (_DWORD *)v15[24];
  v20 = v19 == 0;
  v21 = &(*a1)[v13];
  if ( !v19 )
    v19 = v15;
  *a1 = v21;
  if ( !v20 && (v15[3] & 2) != 0 )
  {
    sub_5418C(v6);
    v19 = (_DWORD *)v16[24];
  }
  v22 = (_DWORD *)v19[13];
  if ( v22 )
  {
    v23 = sub_5431C(a1, *v22, a3, v24);
    if ( v23 )
    {
      if ( v23 != -1 )
        return v23;
      if ( a3 && !*a3 )
      {
        *a3 = (int)v19;
        return -1;
      }
      return -1;
    }
  }
  result = (int)v19;
  if ( a3 )
    *a3 = v25;
  return result;
}
