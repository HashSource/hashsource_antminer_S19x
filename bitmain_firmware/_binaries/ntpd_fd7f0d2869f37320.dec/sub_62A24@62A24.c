void *sub_62A24()
{
  size_t v0; // r5
  void *result; // r0

  v0 = 4 * (unsigned __int16)authhashbuckets;
  key_hash = sub_64B04(key_hash, v0, 0, 0);
  result = memset((void *)key_hash, 0, v0);
  dword_109D64 = (int)&key_listhead;
  dword_109D60 = (int)&key_listhead;
  return result;
}
