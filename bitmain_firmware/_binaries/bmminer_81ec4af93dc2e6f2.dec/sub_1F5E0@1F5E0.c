_DWORD *sub_1F5E0()
{
  _DWORD *v0; // r4
  _WORD *v1; // r5

  v0 = malloc(0x130u);
  if ( v0 )
  {
    v1 = malloc(0x72u);
    memset(v1 + 1, 0, 0x70u);
    *v1 = 12548;
    memcpy(v0, &off_8DD18, 0x130u);
    v0[75] = v1;
  }
  return v0;
}
