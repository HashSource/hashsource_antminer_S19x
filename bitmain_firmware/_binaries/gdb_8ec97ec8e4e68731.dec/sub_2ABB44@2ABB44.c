int __fastcall sub_2ABB44(int result, const char *a2, int a3, unsigned int a4)
{
  const char *v5; // r6

  if ( (a4 | dword_48BBEC) != 0xFFFFFFFF )
  {
    v5 = (const char *)result;
    fflush((FILE *)stdout);
    if ( a4 )
      fprintf((FILE *)stderr, "Deprecated %s called at %s line %d in %s\n", v5, a2, a3, (const char *)a4);
    else
      fprintf((FILE *)stderr, "Deprecated %s called\n", v5);
    result = fflush((FILE *)stderr);
    dword_48BBEC |= ~a4;
  }
  return result;
}
