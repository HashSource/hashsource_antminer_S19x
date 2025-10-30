int sub_6B088()
{
  int v0; // r4
  void *v1; // r0

  v0 = dword_108240;
  if ( dword_108240 )
  {
    v1 = (void *)dword_108240;
    dword_108240 = *(_DWORD *)dword_108240;
    --dword_10822C;
    memset(v1, 0, 0x8A4u);
    *(_DWORD *)(v0 + 2208) = 1;
  }
  else
  {
    ++dword_10823C;
  }
  return v0;
}
