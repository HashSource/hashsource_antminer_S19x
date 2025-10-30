int sub_E5FF8()
{
  void *v0; // r0
  int v1; // r4
  __int64 v3; // r0

  if ( dword_47896C )
  {
    v0 = (void *)dword_47896C;
    v1 = *(_DWORD *)(dword_47896C + 4);
    dword_47896C = *(_DWORD *)dword_47896C;
    free(v0);
    return v1;
  }
  else
  {
    v3 = sub_94700((int)"buildsym.c", 890, "failed internal consistency check");
    return sub_E6044(v3, HIDWORD(v3));
  }
}
