void __fastcall sub_31F40(void **a1, const char *a2, const char *a3, int a4)
{
  char v5[8]; // [sp+1Ch] [bp-808h] BYREF
  void *ptr; // [sp+81Ch] [bp-8h]

  ptr = *a1;
  if ( ptr )
  {
    sub_31ED8((void **)ptr);
    free(ptr);
    *a1 = 0;
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v5, 0x800u, "Free work called with NULL work from %s %s:%d", a2, a3, a4);
    sub_1E4EC(3, v5, 0);
  }
}
