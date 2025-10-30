int *sub_31958()
{
  int *result; // r0
  int *v1; // r1

  result = &dword_BAE98;
  dword_BBDC8 = (int)&dword_BC0D0;
  dword_BBAC0 = (int)&dword_BBDC8;
  dword_BB7B8 = (int)&dword_BBAC0;
  dword_BB4B0 = (int)&dword_BB7B8;
  dword_BB1A8 = (int)&dword_BB4B0;
  dword_BAEA0 = (int)&dword_BB1A8;
  dword_BC0D0 = (int)&dword_BC3D8;
  dword_BC3D8 = dword_BAE98;
  dword_BAE98 = (int)&dword_BAEA0;
  v1 = &total_peer_structs;
  total_peer_structs = 8;
  peer_free_count = 8;
  do
  {
    result = (int *)(unsigned __int16)sub_68AE4(result, v1);
    word_BAE9C = (__int16)result;
  }
  while ( !(_WORD)result );
  word_BAE9E = (__int16)result;
  return result;
}
