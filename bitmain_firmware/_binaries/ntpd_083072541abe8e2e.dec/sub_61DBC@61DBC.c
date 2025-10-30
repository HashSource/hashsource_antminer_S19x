_DWORD *__fastcall sub_61DBC(int a1)
{
  unsigned int v1; // r1
  int v2; // r0
  unsigned int v3; // r1
  int v4; // r4
  __int16 v5; // r2
  int v6; // r3
  int v7; // r0
  unsigned int v8; // r1
  size_t v9; // r7
  _DWORD *result; // r0
  _DWORD *v11; // r3
  int v12; // r4
  int v13; // r1
  int v14; // r2

  v1 = authnumkeys + authnumfreekeys;
  v2 = a1 - (authnumkeys + authnumfreekeys);
  if ( v2 > 0 )
  {
    sub_61BB0(v2);
    v1 = authnumkeys + authnumfreekeys;
  }
  v3 = v1 >> 2;
  v4 = 5;
  v5 = 0;
  v6 = 16;
  v7 = -1;
  do
  {
    v7 <<= v6;
    if ( (v7 & v3) != 0 )
      v5 += v6;
    else
      v3 <<= v6;
    --v4;
    v6 >>= 1;
  }
  while ( v4 );
  v8 = (unsigned __int16)(v5 + 1);
  if ( v8 < 4 )
    v8 = 4;
  if ( v8 >= 0xF )
    LOBYTE(v8) = 15;
  v9 = 4 << v8;
  authhashbuckets = 1 << v8;
  authhashmask = (1 << v8) - 1;
  key_hash = sub_63BA4(key_hash, 4 << v8, 0, 0);
  result = memset((void *)key_hash, 0, v9);
  v11 = (_DWORD *)dword_108D44;
  if ( (_UNKNOWN *)dword_108D44 != &key_listhead )
  {
    v12 = (unsigned __int16)authhashmask;
    v13 = key_hash;
    do
    {
      result = (_DWORD *)v11[2];
      v14 = v11[6] & v12;
      *v11 = *(_DWORD *)(v13 + 4 * v14);
      *(_DWORD *)(v13 + 4 * v14) = v11;
      v11 = result;
    }
    while ( result != (_DWORD *)&key_listhead );
  }
  return result;
}
