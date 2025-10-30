int __fastcall sub_16DD58(int a1, int a2)
{
  const char *v3; // r0

  if ( (unsigned int)(sub_16DA0C(a2) - 4) <= 1 )
  {
    v3 = (const char *)sub_16DA14(a2);
    fputs(v3, (FILE *)dword_6E1D48);
    fflush((FILE *)dword_6E1D48);
  }
  return 1;
}
