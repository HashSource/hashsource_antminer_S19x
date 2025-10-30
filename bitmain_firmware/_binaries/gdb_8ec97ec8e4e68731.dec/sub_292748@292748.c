int sub_292748()
{
  _DWORD *v0; // r3
  int v1; // r12
  int v2; // lr

  v0 = sub_93028(0x14u);
  v1 = dword_48B6E8;
  v2 = dword_48B6E0;
  v0[4] = 3;
  v0[1] = 0;
  *v0 = v2;
  v0[2] = 0;
  dword_48B6E0 = (int)v0;
  dword_48B6E8 = v1 - 1;
  v0[3] = 0;
  return 0;
}
