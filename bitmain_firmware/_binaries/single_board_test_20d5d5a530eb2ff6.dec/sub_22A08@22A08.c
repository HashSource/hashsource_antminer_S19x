int __fastcall sub_22A08(int a1)
{
  int v2; // r4
  int oldstate; // [sp+4h] [bp-4h] BYREF

  pthread_setcancelstate(1, &oldstate);
  v2 = sub_224C0(a1);
  pthread_setcancelstate(oldstate, 0);
  return v2;
}
