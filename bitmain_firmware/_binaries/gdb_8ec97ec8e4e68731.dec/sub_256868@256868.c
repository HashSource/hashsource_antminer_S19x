int __fastcall sub_256868(int a1, FILE *stream, char a3)
{
  int v5; // r0

  *(_DWORD *)(a1 + 4) = stream;
  *(_DWORD *)a1 = &off_3F294C;
  v5 = fileno(stream);
  *(_BYTE *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 8) = v5;
  return a1;
}
