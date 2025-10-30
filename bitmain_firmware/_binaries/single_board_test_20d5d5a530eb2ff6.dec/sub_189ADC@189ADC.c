int __fastcall sub_189ADC(void (*a1)(void *))
{
  int *v1; // r2

  v1 = &dword_21B39C;
  if ( &dword_21B39C )
    v1 = (int *)dword_21B39C;
  return j___cxa_atexit(a1, 0, v1);
}
