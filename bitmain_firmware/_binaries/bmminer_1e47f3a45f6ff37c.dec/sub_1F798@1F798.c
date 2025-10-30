_DWORD *sub_1F798()
{
  _DWORD *v0; // r4
  _BYTE *v1; // r5

  v0 = malloc(0x130u);
  if ( v0 )
  {
    v1 = malloc(0x72u);
    memset(v1, 0, 0x72u);
    *v1 = 4;
    v1[1] = 49;
    memcpy(v0, &off_91094, 0x130u);
    v0[75] = v1;
  }
  return v0;
}
