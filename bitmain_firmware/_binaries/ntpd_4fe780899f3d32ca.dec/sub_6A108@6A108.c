int sub_6A108()
{
  int v0; // r4
  int v1; // r12
  void *v2; // r0

  v0 = dword_10721C;
  if ( dword_10721C )
  {
    v1 = *(_DWORD *)dword_10721C;
    --dword_107208;
    v2 = (void *)dword_10721C;
    dword_10721C = v1;
    memset(v2, 0, 0x8A4u);
    *(_DWORD *)(v0 + 2208) = 1;
  }
  else
  {
    ++dword_107218;
  }
  return v0;
}
