void __fastcall sub_217CC(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r4

  if ( a1 && (v2 = (void *)a1[75]) != 0 )
  {
    v3 = a1;
    free(v2);
    free(v3);
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    sub_21770();
  }
}
