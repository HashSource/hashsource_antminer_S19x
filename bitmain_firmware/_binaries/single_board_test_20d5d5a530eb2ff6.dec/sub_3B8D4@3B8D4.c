_DWORD *sub_3B8D4()
{
  _DWORD *v0; // r4
  _BYTE *v1; // r5

  v0 = malloc(0x130u);
  if ( v0 )
  {
    v1 = calloc(0xFAu, 1u);
    *v1 = 5;
    v1[1] = 17;
    memcpy(v0, &off_19B2E8, 0x130u);
    v0[75] = v1;
  }
  return v0;
}
