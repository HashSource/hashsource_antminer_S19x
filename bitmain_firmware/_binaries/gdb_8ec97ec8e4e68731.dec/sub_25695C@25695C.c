int __fastcall sub_25695C(int a1, FILE *stream)
{
  *(_DWORD *)(a1 + 4) = stream;
  *(_DWORD *)a1 = &off_3F294C;
  *(_DWORD *)(a1 + 8) = fileno(stream);
  *(_DWORD *)a1 = &off_3F299C;
  *(_BYTE *)(a1 + 12) = 0;
  return a1;
}
