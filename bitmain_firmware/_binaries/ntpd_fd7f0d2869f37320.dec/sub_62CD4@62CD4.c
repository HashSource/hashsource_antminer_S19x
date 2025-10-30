_DWORD *__fastcall sub_62CD4(int a1)
{
  unsigned int v1; // r2
  int v2; // r0
  unsigned int v3; // r2
  int v4; // r6
  __int16 v5; // r1
  int v6; // r3
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r1
  size_t v10; // r8
  _DWORD *result; // r0
  _DWORD *v12; // r3
  int v13; // r6
  int v14; // r1
  int v15; // r2

  v1 = authnumfreekeys + authnumkeys;
  v2 = a1 - (authnumfreekeys + authnumkeys);
  if ( v2 > 0 )
  {
    sub_62AC0(v2);
    v1 = authnumfreekeys + authnumkeys;
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
  v9 = 1 << v8;
  authhashbuckets = v9;
  v10 = 4 * v9;
  authhashmask = v9 - 1;
  key_hash = sub_64B04(key_hash, 4 * v9, 0, 0);
  result = memset((void *)key_hash, 0, v10);
  v12 = (_DWORD *)dword_109D64;
  if ( (_UNKNOWN *)dword_109D64 != &key_listhead )
  {
    v13 = (unsigned __int16)authhashmask;
    do
    {
      v14 = key_hash;
      v15 = v12[6] & v13;
      result = (_DWORD *)v12[2];
      *v12 = *(_DWORD *)(key_hash + 4 * v15);
      *(_DWORD *)(v14 + 4 * v15) = v12;
      v12 = result;
    }
    while ( result != (_DWORD *)&key_listhead );
  }
  return result;
}
