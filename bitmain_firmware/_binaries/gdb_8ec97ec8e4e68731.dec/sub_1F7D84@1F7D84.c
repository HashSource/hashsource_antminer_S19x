_DWORD *sub_1F7D84()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r0

  v0 = sub_93094(1u, 0xCu);
  v1 = sub_93028(0xCu);
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  *v0 = v1;
  v0[1] = sub_153270((int)&loc_1F7C08, (int)v0);
  return v0;
}
