int __fastcall sub_8CCB0(void (*a1)(void *))
{
  int *v1; // r2

  v1 = &dword_AF2CC;
  if ( &dword_AF2CC )
    v1 = (int *)dword_AF2CC;
  return j___cxa_atexit(a1, 0, v1);
}
