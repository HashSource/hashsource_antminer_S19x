_DWORD *sub_21304()
{
  _DWORD *v0; // r4
  _WORD *v1; // r5

  v0 = malloc(0x130u);
  if ( v0 )
  {
    v1 = malloc(0xFAu);
    memset(v1 + 1, 0, 0xF8u);
    *v1 = 12549;
    memcpy(v0, &off_8E318, 0x130u);
    v0[75] = v1;
  }
  return v0;
}
