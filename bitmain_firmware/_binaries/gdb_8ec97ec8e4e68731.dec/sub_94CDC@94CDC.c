int sub_94CDC()
{
  _DWORD *v0; // r4
  int v1; // r8
  int v2; // r5
  void *v3; // r0
  int result; // r0

  v0 = (_DWORD *)dword_487D28;
  v1 = dword_487D2C;
  if ( dword_487D28 )
  {
    do
    {
      ((void (__fastcall *)(_DWORD *))loc_1CD290)(v0);
      v2 = dword_487D2C;
      v3 = *(void **)(dword_487D2C + 40);
      if ( v3 )
        free(v3);
      *(_DWORD *)(v2 + 44) = 0;
      *(_DWORD *)(v2 + 40) = 0;
      sub_94C5C();
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  result = v1;
  if ( dword_487D2C != v1 )
  {
    if ( !v1 )
    {
      sub_94700(
        (int)"progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD2E4);
    }
    dword_487D2C = v1;
    return sub_15D778(v1);
  }
  return result;
}
