__int64 __fastcall sub_2AAD74(int *a1, _BYTE *a2, _DWORD *a3)
{
  int v4; // r6
  int v6; // r5
  __int64 v7; // r0
  _DWORD *v8; // r2
  _DWORD *v9; // r1
  unsigned __int8 *v10; // r0
  int v11; // r1
  unsigned int v12; // r3
  int v13; // r2
  int v14; // t1
  unsigned int v15; // r0
  __int64 result; // r0

  v4 = a1[3];
  v6 = *a1;
  v7 = sub_347674(a3[2], v4);
  v8 = *(_DWORD **)(v6 + 4 * HIDWORD(v7));
  v9 = (_DWORD *)(v6 + 4 * HIDWORD(v7));
  if ( !v8 )
LABEL_7:
    sub_2A6BF0((int)"hash.c", 579, (int)"bfd_hash_rename");
  if ( v8 != a3 )
  {
    while ( 1 )
    {
      if ( !*v8 )
        goto LABEL_7;
      if ( (_DWORD *)*v8 == a3 )
        break;
      v8 = (_DWORD *)*v8;
    }
    v9 = v8;
  }
  v10 = a2 + 1;
  *v9 = *a3;
  a3[1] = a2;
  v11 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v12 = 0;
    do
    {
      v13 = 131073 * v11;
      v14 = *v10++;
      v11 = v14;
      v12 = (v13 + v12) ^ ((v13 + v12) >> 2);
    }
    while ( v14 );
  }
  else
  {
    v12 = (unsigned __int8)*a2;
  }
  v15 = (v10 - a2 - 1 + v12 + ((v10 - a2 - 1) << 17)) ^ ((v10 - a2 - 1 + v12 + ((v10 - a2 - 1) << 17)) >> 2);
  a3[2] = v15;
  result = sub_347674(v15, v4);
  *a3 = *(_DWORD *)(v6 + 4 * HIDWORD(result));
  *(_DWORD *)(v6 + 4 * HIDWORD(result)) = a3;
  return result;
}
