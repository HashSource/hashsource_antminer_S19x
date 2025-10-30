_DWORD *sub_1CD1A8()
{
  _DWORD *v0; // r4
  int v1; // r2

  v0 = sub_93094(1u, 0xCu);
  v1 = dword_487D38 + 1;
  *v0 = dword_487D38 + 1;
  dword_487D38 = v1;
  sub_1E0B10(&unk_487D20, v0 + 1);
  return v0;
}
