void __fastcall sub_30E0C(void **a1, const char *a2, const char *a3, int a4)
{
  char v5[8]; // [sp+1Ch] [bp-808h] BYREF
  void *ptr; // [sp+81Ch] [bp-8h]

  ptr = *a1;
  if ( ptr )
  {
    sub_30DA0((void **)ptr);
    free(ptr);
    *a1 = 0;
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v5, 0x800u, "Free work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_1DB6C(3, v5, 0);
  }
}
