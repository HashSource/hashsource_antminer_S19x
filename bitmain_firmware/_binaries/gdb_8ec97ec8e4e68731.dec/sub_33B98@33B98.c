int __fastcall sub_33B98(
        _BYTE *a1,
        __int64 *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _QWORD *a6,
        _DWORD *a7,
        int *a8,
        _QWORD *a9,
        int *a10)
{
  __int64 v13; // r0
  _BYTE *v14; // r3
  _BYTE *v15; // r10
  _BYTE *v16; // r9
  int v17; // r0
  _BYTE *v18; // r7
  _BYTE *v19; // r6
  int v20; // r0
  int result; // r0
  int v22; // r10
  _BYTE *v23; // [sp+4h] [bp-8h] BYREF

  v23 = a1;
  v13 = sub_9335C(a1, &v23, 16);
  v14 = v23;
  *a2 = v13;
  if ( *v14 == 45 )
    v23 = ++v14;
  *a3 = sub_9335C(v14, &v23, 16);
  v15 = (_BYTE *)sub_9360C(v23);
  *a4 = v15;
  v23 = v15;
  v16 = v15;
  v17 = (unsigned __int8)*v15;
  if ( *v15 )
  {
    do
    {
      if ( isspace(v17) )
        break;
      v23 = ++v16;
      v17 = (unsigned __int8)*v16;
    }
    while ( *v16 );
    v22 = v16 - v15;
  }
  else
  {
    v22 = 0;
  }
  *a5 = v22;
  *a6 = sub_9335C(v16, &v23, 16);
  v18 = (_BYTE *)sub_9360C(v23);
  *a7 = v18;
  v23 = v18;
  v19 = v18;
  v20 = (unsigned __int8)*v18;
  if ( *v18 )
  {
    do
    {
      if ( isspace(v20) )
        break;
      v23 = ++v19;
      v20 = (unsigned __int8)*v19;
    }
    while ( *v19 );
    v20 = v19 - v18;
  }
  *a8 = v20;
  *a9 = sub_9335C(v19, &v23, 10);
  result = sub_9360C(v23);
  *a10 = result;
  return result;
}
