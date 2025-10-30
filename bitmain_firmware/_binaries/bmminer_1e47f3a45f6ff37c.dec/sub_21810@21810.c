_DWORD *sub_21810()
{
  _DWORD *v0; // r4
  _BYTE *v1; // r5

  v0 = malloc(0x130u);
  if ( v0 )
  {
    v1 = malloc(0xFAu);
    memset(v1, 0, 0xFAu);
    *v1 = 5;
    v1[1] = 49;
    memcpy(v0, &off_91694, 0x130u);
    v0[75] = v1;
  }
  return v0;
}
