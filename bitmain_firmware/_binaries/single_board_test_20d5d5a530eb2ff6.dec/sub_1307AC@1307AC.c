pthread_t __fastcall sub_1307AC(int a1)
{
  pthread_t result; // r0

  result = sub_10C5DC();
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
