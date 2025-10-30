char *sub_31E60()
{
  char *v0; // r3
  int v1; // r2
  int v2; // r1
  char *result; // r0
  int v4; // r1

  v0 = (char *)&unk_BD3E0;
  v1 = dword_BBEA0;
  do
  {
    v2 = (int)v0;
    *(_DWORD *)v0 = v1;
    v0 -= 776;
    v1 = v2;
  }
  while ( v0 != (char *)&unk_BBBA0 );
  result = byte_8;
  v4 = 1952;
  dword_BBEA0 = (int)&unk_BBEA8;
  total_peer_structs = (int)byte_8;
  peer_free_count = (int)byte_8;
  do
  {
    result = (char *)(unsigned __int16)sub_69A2C(result, v4);
    word_BD6E8 = (__int16)result;
  }
  while ( !(_WORD)result );
  word_BD6EA = (__int16)result;
  return result;
}
