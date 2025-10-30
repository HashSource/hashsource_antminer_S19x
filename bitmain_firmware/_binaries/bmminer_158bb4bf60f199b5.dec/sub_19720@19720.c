int __fastcall sub_19720(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v2; // r6

  v2 = __PAIR64__(a1, a2);
  pthread_mutex_lock(&stru_A05F4);
  *(_QWORD *)&dword_A060C = v2;
  return pthread_mutex_unlock(&stru_A05F4);
}
