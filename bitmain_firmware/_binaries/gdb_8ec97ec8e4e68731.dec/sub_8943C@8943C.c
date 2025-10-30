void sub_8943C()
{
  void *v0; // r0
  int v1; // r2

  if ( dword_475158 )
  {
    v0 = (void *)dword_475158;
    v1 = *(_DWORD *)(dword_475158 + 4);
    dword_47515C = *(_DWORD *)dword_475158;
    dword_475158 = v1;
    free(v0);
  }
}
