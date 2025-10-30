int __fastcall sub_90024(void (*a1)(void *))
{
  int *v1; // r2

  v1 = &dword_B2734;
  if ( &dword_B2734 )
    v1 = (int *)dword_B2734;
  return j___cxa_atexit(a1, 0, v1);
}
