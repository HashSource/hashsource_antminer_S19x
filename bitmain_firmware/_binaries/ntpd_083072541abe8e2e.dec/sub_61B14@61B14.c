void *sub_61B14()
{
  size_t v0; // r5
  void *result; // r0

  v0 = 4 * (unsigned __int16)authhashbuckets;
  key_hash = sub_63BA4(key_hash, v0, 0, 0);
  result = memset((void *)key_hash, 0, v0);
  dword_108D44 = (int)&key_listhead;
  dword_108D40 = (int)&key_listhead;
  return result;
}
