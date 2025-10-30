_DWORD *__fastcall sub_6C81C(_DWORD *a1)
{
  _DWORD *v2; // r3

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (_DWORD *)sub_9836C(8);
  *a1 = v2;
  a1[2] = v2 + 2;
  *v2 = "semaphore";
  v2[1] = "Semaphore";
  a1[1] = v2 + 2;
  return a1;
}
